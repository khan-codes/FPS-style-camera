"#version 330 core
out vec4 FragColor;
in vec3 OurColor
uniform vec3 ourColor;
void main()
{
	FragColor = vec4(OurColor, 1.0f);
}"