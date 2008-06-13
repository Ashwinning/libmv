const int max_kernel_size = 25;

uniform sampler2D source;

uniform vec2 offsets[max_kernel_size];
uniform vec4 weights[max_kernel_size];
uniform int kernel_size;

void main()
{
	vec4 sum = vec4(0.0);

	for(int i=0; i<kernel_size; i++)
		sum += weights[i] * texture2D(source, gl_TexCoord[0].st + offsets[i]);

	gl_FragColor = sum;
}

