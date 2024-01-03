#include <iostream>

int main() {
    // Test Case 1: Basic Graph Creation and BFS
    Graph graph1(4);
    graph1.addWord("ağız");
    graph1.addWord("ağızlık");
    graph1.addWord("akıl");
    graph1.addWord("akıllı");
    graph1.addEdge("ağız", "ağızlık");
    graph1.addEdge("ağızlık", "akıllı");
    graph1.addEdge("akıllı", "akıl");

    std::cout << "Test Case 1: Basic Graph Creation and BFS\n";
    std::cout << "Shortest Path from 'ağız' to 'akıl':\n";
    graph1.BFS("ağız", "akıl");
    std::cout << "------------------------------------------\n";

    // Test Case 2: Words Not in Dictionary
    Graph graph2(3);
    graph2.addWord("akrep");
    graph2.addWord("akustik");
    graph2.addWord("akvaryum");
    graph2.addEdge("akrep", "akustik");

    std::cout << "Test Case 2: Words Not in Dictionary\n";
    std::cout << "Shortest Path from 'akrep' to 'akvaryum' (with words not in dictionary):\n";
    graph2.BFS("akrep", "akvaryum");
    std::cout << "------------------------------------------\n";

    // Test Case 3: No Path Between Words
    Graph graph3(3);
    graph3.addWord("ala");
    graph3.addWord("alaca");
    graph3.addWord("alabalık");
    graph3.addEdge("ala", "alaca");

    std::cout << "Test Case 3: No Path Between Words\n";
    std::cout << "Shortest Path from 'ala' to 'alabalık' (no path between the words):\n";
    graph3.BFS("ala", "alabalık");
    std::cout << "------------------------------------------\n";

    return 0;
}
