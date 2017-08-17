# PokerGenerator
不重複亂數產生器

# 使用方法

1. 將PokerGenerator.h以及PokerGenerator.c放置在專案資料夾下
2. include PokerGenerator.h
3. 呼叫PokerGenerator(最小值, 最大值, 張數);

# 使用範例

```c
#include "PokerGenerator.h"

int main() {
    int *x=PokerGenerator(5, 300, 3); // 隨機從5~300中挑選3個不重複數
    return 0;
}
```