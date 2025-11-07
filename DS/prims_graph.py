import networkx as nx
import matplotlib.pyplot as plt

# Define the adjacency matrix
graph = [
    [0,3,0,0,6,5],
    [3,0,1,0,0,4],
    [0,1,0,6,0,4],
    [0,0,6,0,8,5],
    [6,0,0,8,0,2],
    [5,4,4,5,2,0]
]
MAX = 6

# Create an undirected weighted graph
G = nx.Graph()

# Add edges with weights
for i in range(MAX):
    for j in range(i + 1, MAX):  # avoid duplicates
        if graph[i][j] != 0:
            G.add_edge(i, j, weight=graph[i][j])

# Draw the graph
pos = nx.spring_layout(G, seed=42)
plt.figure(figsize=(8, 6))
nx.draw(G, pos, with_labels=True, node_color='skyblue',
        node_size=1200, font_size=12, font_weight='bold')
labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels,
                             font_size=11, font_color='darkred')
plt.title("Weighted Graph Representation", fontsize=14, fontweight='bold')
plt.show()
