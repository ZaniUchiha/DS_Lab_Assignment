# Lab 5 — Queue Implementations (Zain Abdullah)

This repository contains a Jupyter notebook demonstrating several queue implementations and a small printer-job simulation.

Files
- [Lab_5_Zain_Abdullah.ipynb](Lab_5_Zain_Abdullah.ipynb) — main notebook with all tasks and demos  
- [.ipynb_checkpoints/Lab_5_Zain_Abdullah-checkpoint.ipynb](.ipynb_checkpoints/Lab_5_Zain_Abdullah-checkpoint.ipynb) — notebook checkpoint

Key symbols (in the notebook)
- [`Queue`](Lab_5_Zain_Abdullah.ipynb) — simple list-backed FIFO queue with enqueue, dequeue, front, is_empty  
- [`ArrayQueue`](Lab_5_Zain_Abdullah.ipynb) — fixed-size array queue (non-circular) demonstrating wasted space after dequeues  
- [`CircularQueue`](Lab_5_Zain_Abdullah.ipynb) — fixed-size circular queue that reuses slots using modulo arithmetic  
- [`run_printer_sim`](Lab_5_Zain_Abdullah.ipynb) — small printer job simulation using `CircularQueue`

Overview of tasks
- Task 1: Simple queue using Python list and pop(0) for dequeue (FIFO).  
- Task 2: `Queue` class with basic operations and simple prints for tracing.  
- Task 3: `ArrayQueue` shows index-tracking front/rear and wasted slots when not circular.  
- Task 4: Explanation and implementation of circular queue; wrap-around uses modulo:
  $$rear = (rear + 1) \% size$$
  $$front = (front + 1) \% size$$
- Task 5: `run_printer_sim` demonstrates enqueueing jobs and servicing them from a `CircularQueue`.

How to run
1. Open [Lab_5_Zain_Abdullah.ipynb](Lab_5_Zain_Abdullah.ipynb) in VS Code or Jupyter.  
2. Run cells sequentially to see printed traces and demos.  

Notes
- The notebook contains short demos and print statements for clarity; adapt return values and error handling for production use.  
- `ArrayQueue` is intentionally non-circular to illustrate wasted space; use `CircularQueue` to reuse freed slots.

License / Author
- Author: Zain Abdullah (shown in notebook)