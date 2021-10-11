

const merge = (arrA: number[], arrB: number[], stepLength: number) => {
    let indexA = 0;
    let indexB = 0;
    const merged: number[] = [];
    let mergedIndex = 0; // can be replaced by push
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

    while(merged.length <= stepLength) {
        let greater;

        if (arrA[indexA] < arrB[indexB]) {
            greater = arrA[indexA];
            indexA++;
        } else {
            greater = arrB[indexB];
            indexB++;
        }

        merged[mergedIndex] = greater;
        mergedIndex++;
    }
}

const arr = [4, 3] //, 1, 67, 55, 8, 0, 4, -5, 37, 7, 4, 2, 9, 1, -1]

const merged = merge([arr[0]], [arr[1]], 1);
console.log(merged)
