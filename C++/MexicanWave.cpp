std::vector<std::string> wave(std::string y){
  
  std::vector<std::string> result;
  result.reserve(y.length());
  std::string temp = y;
  
  if (y == "")       
    return {};     
  
  for (unsigned int i = 0; i < y.length(); i++)
  {
    if (temp[i] == 32)
      continue;
    temp[i] -= 32;                                 //deduct the corresponding ascii value by 32 to convert to uppercase
    result.push_back(temp);
    temp = y;
  }
  
  return result;
}
