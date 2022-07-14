#include <iostream>

int main()
{

	// 지하철 요금 계산기

	std::cout << "이동거리(km)가 얼마나 되십니까?" << std::endl;

	float distance;
	int pay, age;
	std::string charge;

	std::cin >> distance;

	std::cout << "지불방식이 카드면 0, 현금이면 1을 입력해주세요." << std::endl;

	std::cin >> pay;

	std::cout << "나이를 입력해주세요." << std::endl;

	std::cin >> age;


	if (pay == 0)
	{
		if (age >= 6 && age < 13)
		{
			if (distance <= 10.0f)
			{
				charge = "450원";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "500원";
			}
			else  if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "550원";
			}
			else
			{
				charge = "오류";
			}
		}
		else if (age >= 13 && age <= 18)
		{
			if (distance <= 10.0f)
			{
				charge = "720원";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "800원";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "880원";
			}
			else
			{
				charge = "오류";
			}
		}
		else if (age >= 19)
		{
			if (distance <= 10.0f)
			{
				charge = "1250원";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "1350원";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "1450원";
			}
			else
			{
				charge = "오류";
			}
		}
	}
	else if (pay == 1)
	{
		if (age >= 6 && age < 13)
		{
			if (distance <= 10)
			{
				charge = "450원";
			}
			else if (distance > 10 && distance <= 15)
			{
				charge = "500원";
			}
			else  if (distance > 15 && distance <= 20)
			{
				charge = "550원";
			}
			else
			{
				charge = "오류";
			}
		}
		else if (age >= 13)
		{
			if (distance <= 10.0f)
			{
				charge = "1350원";
			}
			else if (distance > 10.0f && distance <= 15.0f)
			{
				charge = "1450원";
			}
			else if (distance > 15.0f && distance <= 20.0f)
			{
				charge = "1550원";
			}
			else
			{
				charge = "오류";
			}

		}
	}
	else
	{
		charge = "오류";
	}

	std::cout << "요금값 = " << charge << std::endl;

}