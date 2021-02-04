#version 330 core

in vec3 outColor;

out vec4 FragColor;

void main()
{
    FragColor = vec4(outColor, 1.0f); // el color que va a tener
//    FragColor = vec4(vec3(1,1,1,0.f), 1.0f); // Si queremos que el triangulo sea blanco
}
