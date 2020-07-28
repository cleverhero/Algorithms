#include <functional>
#include <vector>
#include <iostream>

using namespace std;

void bin_search_double() {
	double MIN_X = -1000;
	double MAX_X = 1000;

	double EPS = 1e-10;

	function<double(double)> f = [](double x) {
		return x * x * x;
	};

	for (int it = 0; it < 100; it++) {
		double y0;
		cin >> y0;

		//-----------------
		double l_x = -1000, r_x = 1000;
		while (r_x - l_x > EPS) {
			double m_x = (r_x + l_x) / 2;

			if (f(m_x) > y0) {
				r_x = m_x;
			}
			else {
				l_x = m_x;
			}
		}

		cout << l_x << endl;
	}	
}

void bin_search_find() {
	vector<int> arr = {1, 2, 2, 4, 4, 4, 4, 4, 4, 4, 9, 9, 9, 9};

	for (int it = 0; it < 100; it++) {
		int v;
		cin >> v;

		int l = 0, r = arr.size();
		int m = 0;
		while (l < r) {
			m = l + (r - l) / 2;

			if (arr[m] > v)
				r = m;
			else if (arr[m] < v)
				l = m + 1;
			else
				break;
		}

		cout << m << ' ' << arr[m] << endl;
	}
}

void bin_search_lower() {
	vector<int> arr = { 1, 2, 2, 4, 4, 4, 4, 4, 4, 4, 9, 9, 9, 9 };

	for (int it = 0; it < 100; it++) {
		int v;
		cin >> v;

		int l = 0, r = arr.size();
		int m = 0;
		while (l < r) {
			m = l + (r - l) / 2;

			if (arr[m] >= v)
				r = m;
			else if (arr[m] < v)
				l = m + 1;
		}

		cout << l << ' ' << arr[l] << endl;
	}
}

void bin_search_upper() {
	vector<int> arr = { 1, 2, 2, 4, 4, 4, 4, 4, 4, 4, 9, 9, 9, 9 };

	for (int it = 0; it < 100; it++) {
		int v;
		cin >> v;

		int l = 0, r = arr.size();
		int m = 0;
		while (l < r) {
			m = l + (r - l) / 2;

			if (arr[m] > v)
				r = m;
			else if (arr[m] <= v)
				l = m + 1;
		}

		cout << l << ' ' << arr[l] << endl;
	}
}