#include <string>
#include <vector>
#include <math.h> 

std::string who_is_next(std::vector<std::string> names, long long r) {
int s = names.size();
while (r > s)
    r = ceil((r - s) / 2.0);
return names[r - 1];
}
