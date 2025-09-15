// a small program to check if an input vector of names has any duplicates
	bool Test8(std::vector<std::string> names)
	{
		bool result = false; // Initialize result return value, assume no duplicates as default
		std::vector<std::string> duplicateChecker = { }; // Declare a vector to hold the values of the previous names to compare to the current

		for (int i = 0; i < names.size(); i++) {
			std::string currentName = names[i]; // Variable to hold value of the current name

			for (int j = 0; j < duplicateChecker.size(); j++) {
				if (currentName == duplicateChecker[j]) { // Check if the current name is represented in the previous names collection
					result = true; // If a match is found, set result to true (duplicate exists) and exit the loop
					break;
				}
			}

			// Store the current name in duplicateTracker at the end of the loop to be used for comparison in the next iteration
			duplicateChecker.push_back(names[i]);
		}

		return result;
	}

	

	
};

