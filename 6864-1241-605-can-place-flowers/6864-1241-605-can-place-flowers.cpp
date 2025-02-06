#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) { // Check if current plot is empty
                bool canPlace = true;

                // Check left (handle boundary)
                if (i > 0 && flowerbed[i - 1] == 1) {
                    canPlace = false;
                }

                // Check right (handle boundary)
                if (i < size - 1 && flowerbed[i + 1] == 1) {
                    canPlace = false;
                }
                
                // Implicitly handles the edge cases where i is 0 or size -1.

                if (canPlace) {
                    flowerbed[i] = 1; // Plant the flower
                    count++;
                }
            }
        }

        return count >= n;
    }
};