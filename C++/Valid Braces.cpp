bool valid_braces(std::string braces) 
{
  std::vector<char> occ;
  for (char i : braces)
  {
    switch(i)
    {
    case '(':
      occ.push_back(')');
      break;
    case '{':
      occ.push_back('}');
      break;
    case '[':
      occ.push_back(']');
      break;
    case ')': case '}': case ']':
      if (occ.empty() || occ.back() != i)
        return false;
      occ.pop_back();
    }
  }
  return true;
}
