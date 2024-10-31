#include "array.h"
#include "stdio.h"

#ifdef TAG_88
uint8_t m = 3;
uint8_t nums1[6] = {1, 2, 3, 0, 0, 0};
uint8_t nums2[3] = {2, 5, 6};
uint8_t n = 3;

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    uint8_t fence1 = 0, fence2 = 0, listsize = nums1Size;
    for (; fence1 < nums1Size; fence1++)
    {
        if (*(nums1 + fence1) < *(nums2 + fence2))
        {

        }
    }
}
#endif // TAG_88

