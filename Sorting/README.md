### 常见排序算法总共有十种：冒泡、插入、选择、希尔、归并、堆、快速、计数、桶、基数
----

排序方法|平均时间复杂度|最优时间复杂度|最坏时间复杂度|空间复杂度（辅助空间）|稳定性
--------|-------------------------|--------|--------|--------|------
冒泡排序|O(n<sup>2</sup>)         |O(n)              |O(n<sup>2</sup>)|O(1)         |稳定
选择排序|O(n<sup>2</sup>)         |O(n<sup>2</sup>)  |O(n<sup>2</sup>)|O(1)         |稳定
插入排序|O(n<sup>2</sup>)         |O(n)              |O(n<sup>2</sup>)|O(1)         |稳定
希尔排序|O(nlogn)~O(n<sup>2</sup>)|O(n<sup>1.3</sup>)|O(n<sup>2</sup>)|O(1)         |不稳定
堆排序  |O(nlogn)                 |O(nlogn)          |O(nlogn)        |O(1)         |不稳定
归并排序|O(nlogn)                 |O(nlogn)          |O(nlogn)        |O(n)         |稳定
快速排序|O(nlogn)                 |O(nlogn)          |O(n<sup>2</sup>)|O(nlogn)~O(n)|不稳定
桶排序  |O(n + k)                 |O(n)              |O(n<sup>2</sup>)|O(n*k)       |稳定
计数排序|O(n + k)                 |O(n + k)          |O(n + k)        |O(n + k)     |稳定
基数排序|O(k*n)                   |O(n)              |O(k*n)          |O(n + k)     |稳定
