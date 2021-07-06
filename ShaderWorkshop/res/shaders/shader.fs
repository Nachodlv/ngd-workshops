#version 330 core

out vec4 outColor;

in vec3 color;
in vec2 uv;
in vec3 fragmentWorldPosition;
in mat3 TBN;

// texture sampler
uniform sampler2D albedoMap;
uniform sampler2D normalMap;
uniform vec3 lightWorldPosition;
uniform vec3 lightColor;
uniform vec3 baseColor;

void main()
{
	vec3 samplerColor 			= texture2D(albedoMap, uv).rgb;

	vec3 samplerNormal 			= texture2D(normalMap, uv).rgb;
	vec3 normalTangentSpace 	= normalize(samplerNormal * 2.0 - 1.0);  		// Normal in Tangentspace
	vec3 normalWorldSpace 		= normalize(TBN * normalTangentSpace); 			// Normal in Worldspace

	vec3 ambient = vec3(0.1, 0.1, 0.1);

	vec3 lightDir = normalize(lightWorldPosition - fragmentWorldPosition);
	float diff = max(dot(normalWorldSpace, lightDir), 0.0);

	vec3 diffuse = (diff * lightColor);

	vec3 result = (ambient + diffuse) * (baseColor * samplerColor);

	outColor = vec4(result, 1.0f);
}
