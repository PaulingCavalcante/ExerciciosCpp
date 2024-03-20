#include <cmath>

void ex1(), ex2(), ex3(), ex4(), ex5();

int main(int argc, char **argv)
{
	// ex1(); ex2();
	ex3();
	ex4();
	ex5();
	return 0;
}

void ex1()
{
	printf("Exercicio 1\n");
	float altura;
	printf("Digite sua altura em metros: ");
	scanf("%f", &altura);
	printf("Sua altura em centimetros eh: %.2fcm\n\n", altura * 100);
}

void ex2()
{
	printf("Exercicio 2\n");
	float variacaoDeslocamento, variacaoTempo;
	printf("Digite a variacao do deslocamento, em metros: ");
	scanf("%f", &variacaoDeslocamento);
	printf("Digite a variacao do tempo, em segundos: ");
	scanf("%f", &variacaoTempo);
	printf("A velocidade media foi de %.2fm/s\n\n", variacaoDeslocamento / variacaoTempo);
}

void ex3()
{
	printf("Exercicio 3\n");
	float raio;
	printf("Digite o raio do circulo, em metros: ");
	scanf("%f", &raio);
	printf("A area do circulo eh de: %.2fm^2\n\n", (raio * raio) * M_PI);
}

void ex4()
{
	printf("Exercicio 4\n");
	float base, altura;
	printf("Digite a altura do triangulo, em centimetros: ");
	scanf("%f", &altura);
	printf("Digite o tamanho da base do triangulo, em centimetros: ");
	scanf("%f", &base);
	printf("A area do triangulo eh de: %.2fcm^2\n\n", (base * altura) / 2);
}

void ex5()
{
	printf("Exercicio 5\n");
	float raio;
	printf("Digite o raio da circunferencia, em centimetros: ");
	scanf("%f", &raio);
	printf("O comprimento da circunferencia eh: %.2fcm\n\n", 2 * M_PI * raio);
}