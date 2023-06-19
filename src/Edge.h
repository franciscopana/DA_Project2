/**
 * @file Edge.h
 * @brief Edge class header file
 */

#ifndef DA_PROJECT2_EDGE_H
#define DA_PROJECT2_EDGE_H

#include <iostream>

/**
 * @brief Class that represents an edge
 */
class Edge {
private:
    int node1;/**< First node */
    int node2;/**< Second node */
    double distance;/**< Distance between the two nodes */
    bool selected;/**< True if the edge is selected, false otherwise */

public:
    /**
     * @brief Constructor of the class
     *
     * @param node1 First node
     * @param node2 Second node
     * @param distance Distance between the two nodes
     * 
     * @details Time complexity: O(1)
     */
    Edge(int node1, int node2, double distance);

    /**
     * @brief Gets the first node
     *
     * @return First node
     * 
     * @details Time complexity: O(1)
     */
    int getNode1() const;

    /**
     * @brief Gets the second node
     *
     * @return Second node
     * 
     * @details Time complexity: O(1)
     */
    int getNode2() const;

    /**
     * @brief Gets the distance between the two nodes
     *
     * @return Distance between the two nodes
     * 
     * @details Time complexity: O(1)
     */
    double getDistance() const;

    /**
     * @brief Gets if the edge is selected
     *
     * @return True if the edge is selected, false otherwise
     * 
     * @details Time complexity: O(1)
     */
    bool isSelected() const;

    /**
     * @brief Sets if the edge is selected
     *
     * @param s True if the edge is selected, false otherwise
     * 
     * @details Time complexity: O(1)
     */
    void setSelected(bool s);

    /**
     * @brief Prints the edge
     * 
     * @details Time complexity: O(1)
     */
    void print();
};


#endif //DA_PROJECT2_EDGE_H
