//#include <iostream>
//#include <cmath>
//
//struct polar
//{
//	double distance;
//	double angle;
//};
//
//struct rect
//{
//	double x;
//	double y;
//};
//
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//void rect_to_polar(const rect* pxy, polar* pda);
//void show_polar(const polar* pda);
//
//int main()
//{
//	rect rplace;
//	polar pplace;
//
//	std::cout << "Enter the x and y values:";
//	while (std::cin >> rplace.x >> rplace.y)
//	{
//		//pplace = rect_to_polar(rplace);
//		//show_polar(pplace);
//		rect_to_polar(&rplace, &pplace);
//		show_polar(&pplace);
//		std::cout << "Next two numbwr (q to quit):";
//	}
//
//	std::cout << "Done.\n";
//
//	return 0;
//}
//
//
//
//polar rect_to_polar(rect xypos)
//{
//	polar answer;
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;
//}
//
//void show_polar(polar dapos)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	std::cout << "distance = " << dapos.distance;
//	std::cout << ", angle = " << dapos.angle * Rad_to_deg;
//	std::cout << " degrees\n";
//}
//
//void rect_to_polar(const rect* pxy, polar* pda)
//{
//	
//	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//	
//}
//
//void show_polar(const polar* pda)
//{
//	const double Rad_to_deg = 57.29577951;
//
//	std::cout << "distance = " << pda->distance;
//	std::cout << ", angle = " << pda->angle * Rad_to_deg;
//	std::cout << " degrees\n";
//}