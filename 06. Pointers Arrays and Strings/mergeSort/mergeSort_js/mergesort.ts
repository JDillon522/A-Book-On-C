

const merge = (arrA: number[], arrB: number[], chunkSize: number): number[] => {
    let indexA = 0;
    let indexB = 0;
    const merged: number[] = [];
    let mergedIndex = 0; // can be replaced by push
    let iterations = 0;
    /**
     * arrA = [1, 5]
     * arrB = [-6, 22]
     * merged = []
     *
     * iterate and compare
     *  arrA[indexA] > arrB[indexB]
     *      merged[mergedIndex]
     *      increment indexA
     *  else
     *      merged[mergedIndex]
     *      increment indexB
     *  increment mergedIndex
     */

    while(iterations < chunkSize * 2) {

        if (arrA[indexA] < arrB[indexB] && arrA[indexA]) {
            merged[mergedIndex] = arrA[indexA];
            indexA++;
            mergedIndex++;

        }

        if (arrA[indexA] > arrB[indexB] && arrB[indexA]) {
            merged[mergedIndex] = arrB[indexB];
            indexB++;
            mergedIndex++;
        }

        iterations++;
    }

    while(indexA < chunkSize)
    {
        if (arrA[indexA]) {
            merged[mergedIndex] = arrA[indexA];
            mergedIndex++;
        }
        indexA++;
    }

    while(indexB < chunkSize)
    {
        if (arrB[indexB]) {
            merged[mergedIndex] = arrB[indexB];
            mergedIndex++;
        }
        indexB++;
    }

    return merged;
}

const arr = [4, 3, 1, 67, 55, 8, 0, 4] // , -5, 37, 7, 4, 2, 9, 1, -1]

const mergeSort = (arr: number[]): number[] => {
    let sortedChunks: number[] = [];

    const finalSize = arr.length;

    // sort individual chunks. eventually the chunk will be 1/2 of the array.
    // The next iteration will make the chunk size the whole array
    for (let chunkSize = 1; chunkSize < finalSize; chunkSize *= 2)
    {

        // still not working correctly.
        for (let chunkStart = 0; chunkStart < arr.length - chunkSize; chunkStart += 2 * chunkSize) {
            const firstStart = chunkStart;
            const firstChunkEnd = chunkStart + chunkSize;
            const firstChunk = arr.slice(firstStart, firstChunkEnd);

            const secondStartIndex = firstChunkEnd ;
            const secondEnd = secondStartIndex + chunkSize;
            const secondChunk = arr.slice(secondStartIndex, secondEnd);

            const merged = merge(firstChunk, secondChunk, chunkSize);
            sortedChunks = sortedChunks.concat(merged);
        }

        for (let i = 0; i < sortedChunks.length; i++) {
            arr[i] = sortedChunks[i];
        }
        sortedChunks = [];
    }

    return arr;
}


console.log(mergeSort(arr));