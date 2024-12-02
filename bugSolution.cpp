std::vector<int> myVector; 

// ... some code that adds elements to myVector ...

for (int i = 0; i < myVector.size(); ++i) { // Corrected: Now iterates up to size()-1
  std::cout << myVector[i] << " ";
}

// ... more code ...