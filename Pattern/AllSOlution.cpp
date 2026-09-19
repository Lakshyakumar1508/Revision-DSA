#include <iostream>
using namespace std;

// ============================================================
// 1. SOLID SQUARE
// ============================================================
void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
}

// ============================================================
// 2. NUMBER SQUARE
// ============================================================
void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << j;
        cout << endl;
    }
}

// ============================================================
// 3. SAME NUMBER SQUARE
// ============================================================
void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << i;
        cout << endl;
    }
}

// ============================================================
// 4. ALPHABET SQUARE
// ============================================================
void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << char('A' + j);
        cout << endl;
    }
}

// ============================================================
// 5. STAR RIGHT TRIANGLE
// ============================================================
void pattern5(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// ============================================================
// 6. NUMBER RIGHT TRIANGLE
// ============================================================
void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

// ============================================================
// 7. SAME NUMBER TRIANGLE
// ============================================================
void pattern7(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

// ============================================================
// 8. ALPHABET TRIANGLE
// ============================================================
void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << char('A' + j);
        cout << endl;
    }
}

// ============================================================
// 9. REPEATED ALPHABET TRIANGLE
// ============================================================
void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << char('A' + i);
        cout << endl;
    }
}

// ============================================================
// 10. INVERTED STAR TRIANGLE
// ============================================================
void pattern10(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// ============================================================
// 11. INVERTED NUMBER TRIANGLE
// ============================================================
void pattern11(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

// ============================================================
// 12. INVERTED SAME NUMBER TRIANGLE
// ============================================================
void pattern12(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--)
            cout << i;
        cout << endl;
    }
}

// ============================================================
// 13. FULL STAR PYRAMID
// ============================================================
void pattern13(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 14. NUMBER PYRAMID
// ============================================================
void pattern14(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 15. SAME NUMBER PYRAMID
// ============================================================
void pattern15(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << i;

        cout << endl;
    }
}

// ============================================================
// 16. ALPHABET PYRAMID
// ============================================================
void pattern16(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
            cout << char('A' + j);

        cout << endl;
    }
}

// ============================================================
// 17. INVERTED STAR PYRAMID
// ============================================================
void pattern17(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 18. INVERTED NUMBER PYRAMID
// ============================================================
void pattern18(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 19. STAR DIAMOND
// ============================================================
void pattern19(int n) {

    // Upper
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower
    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 20. NUMBER DIAMOND
// ============================================================
void pattern20(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << j;

        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 21. HOLLOW SQUARE
// ============================================================
void pattern21(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 22. HOLLOW RECTANGLE
// ============================================================
void pattern22(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= cols; j++) {

            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 23. HOLLOW RIGHT TRIANGLE
// ============================================================
void pattern23(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            if (j == 1 || j == i || i == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 24. HOLLOW PYRAMID
// ============================================================
void pattern24(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 25. HOLLOW INVERTED PYRAMID
// ============================================================
void pattern25(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 26. HOLLOW DIAMOND
// ============================================================
void pattern26(int n) {

    // Upper
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower
    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 27. FLOYD'S TRIANGLE
// ============================================================
void pattern27(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)
            cout << num++ << " ";

        cout << endl;
    }
}

// ============================================================
// 28. REVERSE FLOYD'S TRIANGLE
// ============================================================
void pattern28(int n) {
    int total = n * (n + 1) / 2;
    int num = 1;

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++)
            cout << num++ << " ";

        cout << endl;
    }
}

// ============================================================
// 29. BINARY TRIANGLE
// ============================================================
void pattern29(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }
}

// ============================================================
// 30. BINARY SQUARE
// ============================================================
void pattern30(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }
}

// ============================================================
// 31. ALTERNATING BINARY TRIANGLE
// ============================================================
void pattern31(int n) {
    for (int i = 1; i <= n; i++) {

        int value = (i % 2 == 1) ? 1 : 0;

        for (int j = 1; j <= i; j++)
            cout << value;

        cout << endl;
    }
}

// ============================================================
// 32. INCREASING NUMBER TRIANGLE
// ============================================================
void pattern32(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)
            cout << num++ << " ";

        cout << endl;
    }
}

// ============================================================
// 33. DECREASING NUMBER TRIANGLE
// ============================================================
void pattern33(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 34. CONTINUOUS NUMBER SQUARE
// ============================================================
void pattern34(int n) {
    int num = 1;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++)
            cout << num++ << " ";

        cout << endl;
    }
}

// ============================================================
// 35. REVERSE NUMBER TRIANGLE
// ============================================================
void pattern35(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 36. CHARACTER TRIANGLE
// ============================================================
void pattern36(int n) {
    char ch = 'A';

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)
            cout << ch++;

        cout << endl;
    }
}

// ============================================================
// 37. REVERSE CHARACTER TRIANGLE
// ============================================================
void pattern37(int n) {
    for (int i = n; i >= 1; i--) {

        for (int j = 0; j < i; j++)
            cout << char('A' + j);

        cout << endl;
    }
}

// ============================================================
// 38. SAME CHARACTER TRIANGLE
// ============================================================
void pattern38(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++)
            cout << char('A' + i);

        cout << endl;
    }
}

// ============================================================
// 39. BUTTERFLY PATTERN
// ============================================================
void pattern39(int n) {

    // Upper
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower
    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 40. HOLLOW BUTTERFLY
// ============================================================
void pattern40(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";

        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 41. RHOMBUS
// ============================================================
void pattern41(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= n; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 42. HOLLOW RHOMBUS
// ============================================================
void pattern42(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 43. PARALLELOGRAM
// ============================================================
void pattern43(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++)
            cout << " ";

        for (int j = 1; j <= n; j++)
            cout << "*";

        cout << endl;
    }
}

// ============================================================
// 44. X PATTERN
// ============================================================
void pattern44(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j || i + j == n - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 45. PLUS PATTERN
// ============================================================
void pattern45(int n) {

    int mid = n / 2;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == mid || j == mid)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 46. HOLLOW X PATTERN
// ============================================================
void pattern46(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j || i + j == n - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}

// ============================================================
// 47. PALINDROMIC NUMBER PYRAMID
// ============================================================
void pattern47(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Increasing
        for (int j = 1; j <= i; j++)
            cout << j;

        // Decreasing
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 48. REVERSE PALINDROME
// ============================================================
void pattern48(int n) {

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << j;

        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}

// ============================================================
// 49. PALINDROMIC ALPHABET PYRAMID
// ============================================================
void pattern49(int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // Increasing
        for (int j = 0; j <= i; j++)
            cout << char('A' + j);

        // Decreasing
        for (int j = i - 1; j >= 0; j--)
            cout << char('A' + j);

        cout << endl;
    }
}

// ============================================================
// 50. PASCAL'S TRIANGLE
// ============================================================
void pattern50(int n) {

    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        long long value = 1;

        for (int j = 0; j <= i; j++) {

            cout << value << " ";

            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
}


// ============================================================
// MAIN
// ============================================================
int main() {

    int n = 5;

    // Call any pattern you want:

    pattern1(n);

    return 0;
}