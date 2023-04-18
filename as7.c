#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define ROWS 9
#define COLUMNS 9
#define INT_MAXI 2147483647

// Function used in picking the next node to be visited which should have the the least distance from the adjacent nodes of the shortest path
int minDistance(int dist_from_src[], bool visited_nodes[]) {
    int min_dist = INT_MAX, min_index;
    for (int i = 0; i < COLUMNS; i++) {
        if (visited_nodes[i] == false && dist_from_src[i] <= min_dist) {
            min_dist = dist_from_src[i], min_index = i;
        }
    }
    return min_index;
}
int main(){
 // Declares and initializes the adjacency matrix
    bool road_networks[ROWS][COLUMNS] = {
        //      {a, b, c, d, e, f, g, h, i}
        /* a */ {1, 1, 0, 0, 0, 1, 0, 0, 0},
        /* b */ {1, 1, 1, 0, 0, 0, 0, 0, 0},
        /* c */ {0, 1, 1, 0, 1, 1, 0, 0, 1},
        /* d */ {0, 0, 0, 1, 1, 0, 0, 0, 0},
        /* e */ {0, 0, 0, 1, 1, 0, 0, 0, 0},
        /* f */ {1, 0, 1, 0, 0, 1, 0, 0, 0},
        /* g */ {1, 0, 0, 1, 0, 0, 1, 0, 0},
        /* h */ {0, 0, 0, 0, 0, 0, 0, 1, 1},
        /* i */ {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };

    // Prints the adjacency matrix with the node names
    printf("Adjacency Matrix\n\n");
    for (int i = 0; i < ROWS + 1; i++) {
        for (int j = 0; j < COLUMNS + 1; j++) {
            // Prints out the gap on the upper left corner of the table
            if (i == 0 && j == 0) {
                printf("    ");
            }
            // Prints out the node names on the first row and column
            else if (i == 0 || j == 0) {
                // Encloses Nodes C and D in braces, while other node names print normally
                switch (abs(i-j)) {
                    case 3: case 4: printf("[%c] ", 64 + abs(i-j)); break;
                    default: printf(" %c  ", 64 + abs(i-j)); break;
                }
            }
            // Prints out all the bool values on the matrix
            else {
                printf(" %d  ", road_networks[i-1][j-1]);
            }
        }
        printf("\n");
    }   printf("\n");

    // Declares src variable and prompts the user to input a valid current location
    int src;
    printf("At which point are you currently located (0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - I): ");
    do {
        scanf("%d", &src);
        if (src < 0 || src > 8) {
            printf("You have inputted an invalid point address. Please try again: ");
        }
    } while (src < 0 || src > 8); printf("\n");

    // Declares an array for the shortest distance of a node from the specified source and an array that tells whether a node has been visited or not
    int dist_from_src[COLUMNS];
    bool visited_nodes[COLUMNS];

    // Initializes all the nodes to having maximum distance from the source and being not visited
    for (int i = 0; i < COLUMNS; i++) {
        dist_from_src[i] = INT_MAXI, visited_nodes[i] = false;
    }
    // Reinitializes the source node to have 0 distance from itself
    dist_from_src[src] = 0;

    // Uses Dijkstra's shortest path algorithm in calculating the shortest distance from the source to all the nodes
    for (int count = 0; count < COLUMNS - 1; count++) {
        int current_node = minDistance(dist_from_src, visited_nodes);
        visited_nodes[current_node] = true;
        for (int adjacent_node = 0; adjacent_node < COLUMNS; adjacent_node++) {
            if (!visited_nodes[adjacent_node]
                && road_networks[current_node][adjacent_node]
                && dist_from_src[current_node] != INT_MAXI
                && dist_from_src[current_node] + road_networks[current_node][adjacent_node] < dist_from_src[adjacent_node]) {
                    dist_from_src[adjacent_node] = dist_from_src[current_node] + road_networks[current_node][adjacent_node];
            }
        }
    }

    // Prints out information for Nodes C and D as charging stations
    if (src == 2 || src == 3) {
        printf("Point %c is already a charging station\n", 65 + src);
    }
    // Prints out information for nodes without charging stations
    else if (dist_from_src[2] == INT_MAXI && dist_from_src[3] == INT_MAXI) {
        printf("You are currently at Point %c.\n", 65 + src);
        printf("There are no near charging stations at this point.\n");
    }
    // Prints out information for all the other points
    else {
        // Prints out the point name of current location
        printf("You are currently at Point %c.\n", 65 + src);
        // Prints out the the nearest charging station based on the charge_at_d array
        printf("The nearest charging station to Point %c is Point %c.\n", 65 + src, 67 + (dist_from_src[2] > dist_from_src[3]));
    }

    return 0;
}