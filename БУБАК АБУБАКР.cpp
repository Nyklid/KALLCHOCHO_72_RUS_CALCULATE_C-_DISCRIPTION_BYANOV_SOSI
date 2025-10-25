#include <iostream>

int addition(int gavno, int mocha)
{
    return gavno + mocha;
}

int multiply(int gavno, int mocha)
{
    return gavno * mocha;
}

int divide(int gavno, int mocha)
{
    return gavno / mocha;
}

int modulo(int gavno, int mocha)
{
    return gavno % mocha;
}

int subtraction(int gavno, int mocha)
{
    return gavno - mocha;
}

int numForSwitch(std::string kall, int numerable)
{
	if (kall == "+")
	{
		return numerable = 1;
	}

	else if (kall == "*")
	{
		return numerable = 2;
	}

	else if (kall == "/")
	{
		return numerable = 3;
	}

	else if (kall == "%")
	{
		return numerable = 4;
	}

	else if (kall == "-")
	{
		return numerable = 5;
	}
}

int main()
{
	setlocale(LC_ALL, "ru_RU");
	std::string kall;
	int numerable = 0;
	std::string disciprtion = "Хуйня из под коня соси жопу еблан ебучий сучий уебок сын хуйни пошел ты нахуй парашник ебливый уебок";
	int gavno, mocha;

	std::cin >> gavno >> mocha >> kall;
	numerable = numForSwitch(kall, numerable);


	switch (numerable)
	{
		case 1:
			std::cout << addition(gavno, mocha) << "\nБУЯНОВ ЖИРНОЕ ЧМО КОГДА ТЫ УЖЕ ДОБАВИШЬ ЧРНГО НЕГРА У КОТОРОГО НА МАКСИМУМ БУДЕТ ВКАЧЧИНО ВЫНОСЛИВОСТЬ." << std::endl;
			break;
		case 2:
			std::cout << multiply(gavno, mocha) << "\nБУЯНОВ ЖИРНОЕ ЧМО КОГДА ТЫ УЖЕ ДОБАВИШЬ ЧРНГО НЕГРА У КОТОРОГО НА МАКСИМУМ БУДЕТ ВКАЧЧИНО ВЫНОСЛИВОСТЬ." << std::endl;
			break;
		case 3:
			std::cout << divide(gavno, mocha) << "\nБУЯНОВ ЖИРНОЕ ЧМО КОГДА ТЫ УЖЕ ДОБАВИШЬ ЧРНГО НЕГРА У КОТОРОГО НА МАКСИМУМ БУДЕТ ВКАЧЧИНО ВЫНОСЛИВОСТЬ." << std::endl;
			break;
		case 4:
			std::cout << modulo(gavno, mocha) << "\nБУЯНОВ ЖИРНОЕ ЧМО КОГДА ТЫ УЖЕ ДОБАВИШЬ ЧРНГО НЕГРА У КОТОРОГО НА МАКСИМУМ БУДЕТ ВКАЧЧИНО ВЫНОСЛИВОСТЬ." << std::endl;
			break;
		case 5:
			std::cout << subtraction(gavno, mocha) << "\nБУЯНОВ ЖИРНОЕ ЧМО КОГДА ТЫ УЖЕ ДОБАВИШЬ ЧРНГО НЕГРА У КОТОРОГО НА МАКСИМУМ БУДЕТ ВКАЧЧИНО ВЫНОСЛИВОСТЬ." << std::endl;
			break;
		
		default:
			std::cout << disciprtion << std::endl;
	}

	system("pause");
	return 0;
}