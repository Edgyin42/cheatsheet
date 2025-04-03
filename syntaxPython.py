
####################### MATH #######################
import math
math.sqrt()                                              # square root

####################### HEAP #######################
import heapq
# MIN_HEAP

heap = []                                                # Create a heap 
heapq.heappush(heap, 3)                                  # Push elements onto the heap
min_element = heapq.heappop(heap)                        # Pop the smallest element
smallest = heap[0]                                       # Peek at the smallest element without removing it
arr = [4, 6, 8, 2, 9]                                    # Convert a list into a heap
heapq.heapify(arr)

# MAX-HEAP (Using Negation)

max_heap = []                                            # Create an empty max-heap
heapq.heappush(max_heap, -3)                             # Insert elements by negating them
print(-heapq.heappop(max_heap))                          # Convert back when popping
nums = [4, 1, 7, 3, 8, 5]                                # Converting a List into a Max-Heap
max_heap = [-num for num in nums]                        # Convert all numbers to negative
heapq.heapify(max_heap)                                  # Heapify the list
print(-heapq.heappop(max_heap))                          # Get max element by negating


