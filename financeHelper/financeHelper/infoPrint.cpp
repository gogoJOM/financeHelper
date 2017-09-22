#include "infoPrint.h"
#include <Windows.h>

void printOneLine(std::string a_line)
{
	std::cout << a_line << std::endl;
}

void writeHelp();

void writeIntro()
{
	printOneLine("Данное приложение помогает контролировать Ваши финансы.");
	printOneLine("");
	printOneLine("Список категорий и их соответствие номерам представлен ниже.");
	printOneLine("");
	writeHelp();
	printOneLine("");
	printOneLine("Чтобы внести некоторые данные об изменениях в Ваших финансах - введите 1.");
	printOneLine("Чтобы посмотреть текущий баланс - введите 0.");
	printOneLine("");
	std::cin >> CMainFile::getInstance().getIsChange();// >> std::endl;
	if (CMainFile::getInstance().isChange())
		printOneLine("Режим редактиования.");
	else
		printOneLine("Режим вывода информации.");
}

void writeCategory()
{
	printOneLine("");
	printOneLine("Введите \"help\", чтобы отобразить список категорий.");
	printOneLine("");
	printOneLine("Введите номер категории, по поводу которой произошли изменения в Вашем бюджете.");
	printOneLine("");
}

void writeInput()
{
	printOneLine("");
	printOneLine("Введите потраченное/полученное количество денег:");
}

void writeContinue()
{
	printOneLine("");
	printOneLine("Чтобы продолжить вносить данные - введите 1.");
	printOneLine("Чтобы посмотреть баланс - введите 0.");

	std::cin >> CMainFile::getInstance().getIsChange();
}

void writeHelp()
{
	printOneLine("В случае трат, выберите одну из категорий:");
	printOneLine("");
	printOneLine("Транспорт - 1");
	printOneLine("Еда - 2");
	printOneLine("Развлечения - 3");
	printOneLine("Образование - 4");
	printOneLine("Бытовые нужды - 5");
	printOneLine("Подарки - 6");
	printOneLine("Одежда - 7");
	printOneLine("Отдых - 8");
	printOneLine("Другое - 9");
	printOneLine("");
	printOneLine("В случае прибыли, выберите одну из категорий:");
	printOneLine("");
	printOneLine("Зарплата - 10");
	printOneLine("Продажа чего-либо - 11");
	printOneLine("Выигрыш - 12");
	printOneLine("Другое - 13");
}

void writeRes()
{
	printOneLine("");
	printOneLine("Ваш баланс на текущий момент:");
	printOneLine("");
	printOneLine(std::to_string(CMainFile::getInstance().getBalance()));
}

void CInfoPrint::write(infoType a_info)
{
	switch (a_info) {
	
	case INTRO:
		writeIntro();
		break;
	case CATEGORY:
		writeCategory();
		break;
	case EINPUT:
		writeInput();
		break;
	case ECONTINUE:
		writeContinue();
		break;
	case HELP:
		writeHelp();
		break;
	case RES:
		writeRes();
		break;
	}
}