std::string is_sorted_and_how(std::vector<int> array)
{
    return std::is_sorted(array.begin(), array.end()) ? "yes, ascending" :
           std::is_sorted(array.rbegin(), array.rend()) ? "yes, descending" :
           "no";        
}
