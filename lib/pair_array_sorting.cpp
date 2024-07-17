#include <iostream>
#include <vector>
#include <algorithm>

// Function to sort coordinates and heights
void sortCoordinatesAndHeights(int coordinates[], int heights[], int n) {
    // Create a vector of pairs
    std::vector<std::pair<int, int>> treeData;

    // Populate the vector with coordinates and heights
    for (int i = 0; i < n; ++i) {
        treeData.push_back(std::make_pair(coordinates[i], heights[i]));
    }

    // Sort the vector based on coordinates
    std::sort(treeData.begin(), treeData.end());

    // Extract the sorted coordinates and heights back into the arrays
    for (int i = 0; i < n; ++i) {
        coordinates[i] = treeData[i].first;
        heights[i] = treeData[i].second;
    }
}

int main() {
    int coordinates[] = {3, 1, 4, 2};
    int heights[] = {10, 20, 30, 40};
    int n = sizeof(coordinates) / sizeof(coordinates[0]);

    // Sort the coordinates and heights
    sortCoordinatesAndHeights(coordinates, heights, n);

    // Print the sorted coordinates and heights
    std::cout << "Sorted coordinates and heights:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Coordinate: " << coordinates[i] << ", Height: " << heights[i] << std::endl;
    }

    return 0;
}