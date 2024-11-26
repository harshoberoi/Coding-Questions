public int circularSubarraySum(int arr[]) {
        int n = arr.length;

        int maxEndingHere = arr[0], maxSoFar = arr[0];
        int minEndingHere = arr[0], minSoFar = arr[0];
        int totalSum = arr[0];

        for (int i = 1; i < n; i++) {
            totalSum += arr[i];

            maxEndingHere = Math.max(arr[i], maxEndingHere + arr[i]);
            maxSoFar = Math.max(maxSoFar, maxEndingHere);

            minEndingHere = Math.min(arr[i], minEndingHere + arr[i]);
            minSoFar = Math.min(minSoFar, minEndingHere);
        }
        
        if (maxSoFar < 0) {
            return maxSoFar; 
        }

        return Math.max(maxSoFar, totalSum - minSoFar);
}
