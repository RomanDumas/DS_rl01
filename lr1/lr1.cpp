
#include <iostream>

using namespace std;
int main()
{
	



	//((p->-(q))^(rvp)~((qvr)^(p->-(r))
	
int p, q, r, f1, f2, f3, f4, f5, f6, r1, q1, result;
for (int p = 0; p < 2; ++p) {

	for (int q = 0; q < 2; ++q) {

		for (int r = 0; r < 2; ++r) {
			//-(q)

			if (q == 1)
				q1 = 0;
			else
				q1 = 1;

			//-(r)
			if (r == 1)
				r1 = 0;
			else
				r1 = 1;

			//p->-(q)
			if (p == 1 && q1 == 0)
				f1 = 0;
			else
				f1 = 1;

			//rvp

			if (r == 0 && p == 0)
				f2 = 0;
			else
				f2 = 1;

			//qvr
			if (q == 0 && r == 0)
				f3 = 0;
			else
				f3 = 1;

			//p->-(r)
			if (p == 1 && r1 == 0)
				f4 = 0;
			else
				f4 = 1;

			//f1^f2
			if (f1 == 1 && f2 == 1)
				f5 = 1;
			else
				f5 = 0;

			//f3^f4
			if (f3 == 1 && f4 == 1)
				f6 = 1;
			else
				f6 = 0;

			//f5~f6
			if (f5 == 1 && f6 == 1)
				result = 1;
			if (f5 == 0 && f6 == 0)
				result = 1;
			else
				result = 0;

			cout << result << endl;
		}

	}

}



	
	return 0;
}