import matplotlib.pyplot as plt
import numpy as np

# Given data
classes = [(5, 9), (10, 14), (15, 19), (20, 24), (25, 29), (30, 34), (35, 39)]
frequencies = [5, 12, 32, 40, 16, 9, 6]
class_width = 5

# Calculate class boundaries
boundaries = [(c[0] - 0.5, c[1] + 0.5) for c in classes]

# Calculate midpoints
midpoints = [(c[0] + c[1]) / 2 for c in classes]

# Calculate frequency densities (heights of histogram bars)
heights = [f / class_width for f in frequencies]

# Plot histogram
plt.figure(figsize=(8, 5))
for i, (boundary, height) in enumerate(zip(boundaries, heights)):
    plt.bar(boundary[0], height, width=class_width, align='edge', edgecolor='black', alpha=0.5)

# Plot frequency polygon
plt.plot(midpoints, heights, marker='o', color='red', linestyle='-', label="Frequency Polygon")

# Extend the frequency polygon to the next lower and upper class midpoints (assuming frequency = 0)
extended_midpoints = [midpoints[0] - class_width] + midpoints + [midpoints[-1] + class_width]
extended_heights = [0] + heights + [0]
plt.plot(extended_midpoints, extended_heights, marker='o', color='red', linestyle='-')

# Labels and Title
plt.xlabel("Class Midpoints")
plt.ylabel("Frequency Density")
plt.title("Histogram and Frequency Polygon")
plt.legend()
plt.grid(True, linestyle="--", alpha=0.7)
plt.show()
