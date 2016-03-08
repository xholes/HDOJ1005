#include < iostream>
using namespace std;
int main()
{ 
	int A, B, n;
	int stop = 0;
	while (!stop)
	{
		int res[51],loop,f,f1,f2;
		cin >> A >> B >> n;
		res[0] = 1; res[1] = 1;
		f1 = 1; f2 = 1; f = 0;
			for (int i = 0; i <51; i++)
			{
				f = (A*f2 + B*f1) % 7;
				res[2 + i] = f;
				if ((res[1 + i] == 1) && (res[2 + i] == 1))
				{
					loop = 1+i; break;
				}
				f1 = f2;
				f2 = f;
			}
		if ((A == 0) && (B == 0) && (n == 0)) stop = 1;
		if (!stop) { f = res[(n-1)%loop];cout << f << endl; }
	}
}