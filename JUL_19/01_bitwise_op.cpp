#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    cout << endl;

    // Declare two integer variables
    int a = 9; // Binary: 1001
    int b = 6; // Binary: 0110

    // Bitwise AND: Both bits must be 1 to result in 1
    cout << a << " & " << b << " = " << (a & b) << endl; // 1001 & 0110 = 0000 => 0

    // Bitwise OR: At least one bit must be 1
    cout << a << " | " << b << " = " << (a | b) << endl; // 1001 | 0110 = 1111 => 15

    // Bitwise XOR: Bits must be different to result in 1
    cout << a << " ^ " << b << " = " << (a ^ b) << endl; // 1001 ^ 0110 = 1111 => 15

    // Bitwise NOT: Inverts each bit (1 becomes 0, 0 becomes 1)
    cout << "~" << a << " = " << (~a) << endl; // ~1001 = ...11110110 => -10 (in 2's complement)
    cout << "~" << b << " = " << (~b) << endl; // ~0110 = ...11111001 => -7

    // Bitwise right shift: Shifts bits to the right, losing rightmost bits
    cout << 17 << " >> " << 2 << " = " << (17 >> 2) << endl; // 17 = 10001 >> 2 = 000100 => 4
    cout << 17 << " << " << 1 << " = " << (17 << 1) << endl; // 10001 << 1 = 100010 => 34

    cout << 19 << " >> " << 2 << " = " << (19 >> 2) << endl; // 19 = 10011 >> 2 = 000100 => 4
    cout << 19 << " << " << 1 << " = " << (19 << 1) << endl; // 10011 << 1 = 100110 => 38

    cout << bitset<32>(9);

    cout << endl;
    return 0;
}
