class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> box;
        for (size_t i = 0; i < boxes.size(); i++)
        {
            box.push_back(boxes[i] - '0');
        }
        for (size_t i = 0; i < box.size(); i++)
        {
            int count = 0;
            for (size_t j = 0; j < box.size(); j++)
            {
                if (boxes[j] == '1' && i != j)
                {
                    count += std::abs(static_cast<int>(i) - static_cast<int>(j));
                }
            }
            box[i] = count;
        }
        return box;
    }
};