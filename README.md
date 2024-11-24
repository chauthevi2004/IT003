# Experimental Analysis of Sorting Algorithms

## Overview

This project focuses on the implementation and experimental analysis of various sorting algorithms, including Heap Sort, Merge Sort, and Quick Sort. The objective is to compare their performance under different conditions and datasets.

## Project Structure

The repository contains the following files:

- `HeapSort.cpp`: Implementation of the Heap Sort algorithm.
- `MergeSort.cpp`: Implementation of the Merge Sort algorithm.
- `QuickSort.cpp`: Implementation of the Quick Sort algorithm.
- `main.cpp`: Main program to execute and compare the sorting algorithms.
- `maketest.cpp`: Generates test datasets for performance evaluation.
- `createChart.py`: Python script to create performance charts from the results.
- `test1.txt` to `test10.txt`: Test datasets used for benchmarking.
- `time_HeapSort.txt`: Execution times recorded for Heap Sort.
- `time_MergeSort.txt`: Execution times recorded for Merge Sort.
- `time_QuickSort.txt`: Execution times recorded for Quick Sort.
- `time_SortCpp.txt`: Execution times recorded for C++'s standard `sort` function.
- `Chart.png`: Graphical representation of the performance comparison.
- `BÁO CÁO THỰC NGHIỆM CÁC THUẬT TOÁN SẮP XẾP.pdf`: Detailed experimental report on the sorting algorithms.

## Features

- **Implementation**: Provides C++ implementations of Heap Sort, Merge Sort, and Quick Sort.
- **Performance Evaluation**: Measures and records the execution time of each algorithm on various datasets.
- **Visualization**: Generates charts to visually compare the performance of the sorting algorithms.

## Getting Started

### Prerequisites

- C++ compiler (e.g., GCC, Clang)
- Python 3.x (for generating charts)
- Matplotlib library for Python (install using `pip install matplotlib`)

### Compilation

To compile the sorting algorithms and test generator:

```bash
g++ -o main main.cpp
g++ -o maketest maketest.cpp
```

### Usage

1. **Generate Test Data**: Run the test generator to create datasets.

   ```bash
   ./maketest
   ```

   This will produce `test1.txt` to `test10.txt` files with different data distributions.

2. **Execute Sorting Algorithms**: Run the main program to sort the datasets and record execution times.

   ```bash
   ./main
   ```

   The execution times will be saved in `time_HeapSort.txt`, `time_MergeSort.txt`, `time_QuickSort.txt`, and `time_SortCpp.txt`.

3. **Generate Performance Chart**: Use the Python script to create a performance comparison chart.

   ```bash
   python createChart.py
   ```

   This will generate `Chart.png` illustrating the performance of each sorting algorithm.

## Experimental Report

For a detailed analysis of the experiments, including methodology, results, and conclusions, refer to the [experimental report](https://github.com/chauthevi2004/IT003.N21.CTTN/blob/main/B%C3%81O%20C%C3%81O%20TH%E1%BB%B0C%20NGHI%E1%BB%86M%20C%C3%81C%20THU%E1%BA%ACT%20TO%C3%81N%20S%E1%BA%AEP%20X%E1%BA%BEP.pdf).

## Contributing

Contributions are welcome. Please fork the repository and submit a pull request with your enhancements or bug fixes.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgments

Special thanks to the contributors and the open-source community for their support and resources.
