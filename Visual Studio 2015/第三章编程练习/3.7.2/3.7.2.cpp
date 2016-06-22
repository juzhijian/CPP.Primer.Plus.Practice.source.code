//计算相应的体重指数
#include <iostream>
const int inch_per_feet = 12;//1英尺=12英寸
const double meter_per_inch = 0.0254;//1英寸=0.0254米
const double pound_per_kilogram = 2.2;//1千克=2.2磅

int main()
{
	using namespace std;
	cout << "请输入您的身高:" << endl;
	cout << "首先，请输入您身高的英尺部分：____\b\b\b\b"<<endl;
	int ht_feet;//英尺
	cin >> ht_feet;
	cout << "然后，请输入您身高的英寸部分：____\b\b\b\b" << endl;
	int ht_inch;//英寸
	cin >> ht_inch;
	cout << "现在，请输入您的体重：____\b\b\b\b（磅）" << endl;
	double wt_pound;// 磅
	cin >> wt_pound;
	int inch;
	inch = ht_feet*inch_per_feet + ht_inch;//身高英寸
	double ht_meter;//身高米
	ht_meter = inch*meter_per_inch;
	double wt_kilogram;//体重千克
	wt_kilogram = wt_pound / pound_per_kilogram;
	cout << "你的个人身体信息如下:" << endl;
	cout << "身高：" << inch << "(英尺 inch）\n" << "身高：" << ht_meter << "(米 meter)\n" << "体重：" << wt_kilogram << "(千克 kilogram)\n";
	double BMI;
	BMI = wt_kilogram / (ht_meter*ht_meter);
	cout << "您的身体指数是：" << BMI << endl;
	cin.get();
	cin.get();
	return 0;
}
