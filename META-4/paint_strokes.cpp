
/*Nikita has a line of N tiles indexed from 0 to N−1. She wants to paint them to match a color configuration, C, which is comprised of 2 colors: Red(R) and Blue(B).
In one stroke, Nikita can paint 1 or more adjacent tiles a single color. After she finishes painting, each tile iishould be painted color Ci.
It should be noted that it is not allowed to apply more than 1 stroke on a tile.
Given the required color configuration, find and print the minimum number of strokes required for Nikita to paint all N tiles.

Note: In a line of tiles, 2 tiles with the indices i and j are considered adjacent only if |j−i|=1,a c++ code and explanation
*/
#include <iostream>
#include <string>
using namespace std;

int minStrokes(const string &C) {
    if (C.empty()) return 0;

    int strokes = 1; // Start with one stroke for the first segment
    for (size_t i = 1; i < C.length(); ++i) {
        if (C[i] != C[i - 1]) {
            ++strokes; // Increment stroke count when color changes
        }
    }
    return strokes;
}

int main() {
    string C;
    cout << "Enter the color configuration (sequence of 'R' and 'B'): ";
    cin >> C;

    int result = minStrokes(C);
    cout << "Minimum number of strokes required: " << result << endl;

    return 0;
}
