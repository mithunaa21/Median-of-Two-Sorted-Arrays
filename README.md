# Median of Two Sorted Arrays

## Problem Statement
Given two sorted arrays `nums1` and `nums2` of size `m` and `n`, respectively, return the median of the two sorted arrays. The overall run time complexity should be `O(log (m+n))`.

## Example

### Example 1:
```plaintext
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```

### Example 2:
```plaintext
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```

## Constraints
- `nums1.length == m`
- `nums2.length == n`
- `0 <= m, n <= 1000`
- `1 <= m + n <= 2000`
- `-10^6 <= nums1[i], nums2[i] <= 10^6`

## Solution Approach
We solve this problem by merging both sorted arrays into one sorted array and then finding the median. The approach runs in `O(m+n)` time complexity.

## Implementation Approach
1. Initialize pointers for both arrays and a merged array to store the sorted values.
2. Use a two-pointer approach to merge both sorted arrays into one.
3. Once merged, determine the median:
   - If the total number of elements is odd, the median is the middle element.
   - If even, the median is the average of the two middle elements.
4. Free any dynamically allocated memory after computing the median.

## Usage
Pass two sorted integer arrays along with their sizes to the function. The function returns the median as a floating-point number.

## Contributing
Feel free to submit issues or pull requests if you have improvements!

