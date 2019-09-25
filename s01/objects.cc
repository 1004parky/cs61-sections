#include <cstdlib>
#include <cstdio>
#include <vector>

char global_ch = 65;
const char const_global_ch = 66;

int main() {
    char local_ch = 67;
    char* allocated_ch = (char*) malloc(sizeof(char));
    *allocated_ch = 68;

    printf("global_char address: %p size: %zu\n", &global_ch, sizeof(global_ch));
    printf("const_global_ch address: %p size: %zu\n", &const_global_ch, sizeof(const_global_ch));
    printf("local_ch address: %p size: %zu\n", &local_ch, sizeof(local_ch));
    printf("allocated_ch address: %p size: %zu\n", allocated_ch, sizeof(*allocated_ch));
    std::vector<int> v = {1, 2, 3, 4, 5};
    for (auto& a : v) printf("%d\n", a);
	
}
