#include "Functions.h"
#include "Pusir.h" //!< a bubble sort function.
#include "Merge.h" //!< a merge sort function.

int main (void) {
	cin >> n; /*!< an counter value */

	for (int i = 0; i < n; i++){
		cin >> a[i]; /*!< an massive values */
	};
	cout << "Bubble or Merge sort? (b, m)" << endl;
	char b[2];
	cin >> b;
	switch (b[0]){
	case 'b': Bubble(a[100], n); //!< a bubble sort function.
		break;
	case 'm': merge(0, n - 1); //!< a merge sort function.
		break;
	};   
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    getch();
    return 0;
};