#include <iostream>

int main()
{

	// ����ö ��� ����

	std::cout << "�̵��Ÿ�(km)�� �󸶳� �ǽʴϱ�?" << std::endl;

	float distance;
	int pay, age;
	std::string charge;

	std::cin >> distance;

	std::cout << "���ҹ���� ī��� 0, �����̸� 1�� �Է����ּ���." << std::endl;

	std::cin >> pay;

	std::cout << "���̸� �Է����ּ���." << std::endl;

	std::cin >> age;


	if (pay == 0)
	{
		if (age >= 6 && age < 13)
		{
			if (distance <= 10.0f)
			{
				charge = "450��";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "500��";
			}
			else  if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "550��";
			}
			else
			{
				charge = "����";
			}
		}
		else if (age >= 13 && age <= 18)
		{
			if (distance <= 10.0f)
			{
				charge = "720��";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "800��";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "880��";
			}
			else
			{
				charge = "����";
			}
		}
		else if (age >= 19)
		{
			if (distance <= 10.0f)
			{
				charge = "1250��";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "1350��";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "1450��";
			}
			else
			{
				charge = "����";
			}
		}
	}
	else if (pay == 1)
	{
		if (age >= 6 && age < 13)
		{
			if (distance <= 10)
			{
				charge = "450��";
			}
			else if (distance > 10 && distance <= 15)
			{
				charge = "500��";
			}
			else  if (distance > 15 && distance <= 20)
			{
				charge = "550��";
			}
			else
			{
				charge = "����";
			}
		}
		else if (age >= 13)
		{
			if (distance <= 10.0f)
			{
				charge = "1350��";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "1450��";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "1550��";
			}
			else
			{
				charge = "����";
			}

		}
	}
	else
	{
		charge = "����";
	}

	std::cout << "��ݰ� = " << charge << std::endl;

}