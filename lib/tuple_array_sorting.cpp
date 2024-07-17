#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

// Function to sort coordinates, heights, and ages
void sortTreeData(int coordinates[], int heights[], int ages[], int n) {
    // Create a vector of tuples
    std::vector<std::tuple<int, int, int>> treeData;

    // Populate the vector with coordinates, heights, and ages
    for (int i = 0; i < n; ++i) {
        treeData.emplace_back(coordinates[i], heights[i], ages[i]);
    }

    // Sort the vector based on coordinates
    std::sort(treeData.begin(), treeData.end(), [](const auto& a, const auto& b) {
        return std::get<0>(a) < std::get<0>(b);
    });

    // Extract the sorted coordinates, heights, and ages back into the arrays
    for (int i = 0; i < n; ++i) {
        coordinates[i] = std::get<0>(treeData[i]);
        heights[i] = std::get<1>(treeData[i]);
        ages[i] = std::get<2>(treeData[i]);
    }
}

int main() {
    int coordinates[] = {3, 1, 4, 2};
    int heights[] = {10, 20, 30, 40};
    int ages[] = {5, 15, 25, 35};
    int n = sizeof(coordinates) / sizeof(coordinates[0]);

    // Sort the coordinates, heights, and ages
    sortTreeData(coordinates, heights, ages, n);

    // Print the sorted coordinates, heights, and ages
    std::cout << "Sorted coordinates, heights, and ages:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Coordinate: " << coordinates[i] << ", Height: " << heights[i] << ", Age: " << ages[i] << std::endl;
    }

    return 0;
}
