#version 330 core

out vec4 outColor;

in vec3 color;
in vec2 uv;

// texture sampler
uniform sampler2D albedo;

uniform float alpha = 0.5f;

void main()
{
	vec4 samplerColor = texture2D(albedo, uv, alpha);
	outColor = mix(samplerColor, vec4(color, 1.0f), alpha);
}
