# Course: Data Structures (CSE CS203A)
# Assignment V: Tree

## Section 1. Definitions of Tree Variants
### Task: Write your own definitions for each tree type. You may use AI for learning, but rewrite in your own words.

- General Tree    
Definition: 由節點組成的層級結構，每個節點可以有任意數量的子節點。根節點沒有父節點，其他節點只有一個父節點。
- Binary Tree
Definition: 每個節點最多有兩個子節點的樹形結構，分別是左子節點與右子節點。
- Complete Binary Tree
Definition: 一種二元樹，除了最後一層外，每層節點皆填滿，最後一層節點從左到右依序排列。
- Binary Search Tree (BST)
Definition: 一種二元樹，左子樹所有節點的值小於根節點，右子樹所有節點的值大於根節點。
- AVL Tree
Definition: 自平衡的二元搜尋樹，每個節點的左、右子樹高度差不超過 1。
- Red-Black Tree
Definition: 自平衡的二元搜尋樹，每個節點具有顏色，並遵守紅黑規則，根節點為黑、紅節點不能連續、從根到葉節點的黑節點數相同。
- Max Heap
Definition: 一種完全二元樹，每個節點的值大於或等於其子節點的值。根節點為最大值，適合用於優先權佇列。
- Min Heap
Definition: 一種完全二元樹，每個節點的值小於或等於其子節點的值。根節點為最小值，適合用於快速取得最小元素。

## Section 2. Tree Family Hierarchy and Transformations
### Task: Show how these structures are related (general → specialized). Use a simple diagram and explanations of what constraints are added at each step.
### 2.1 Tree Family Diagram
### You may draw this by hand and paste a photo, or use drawing tools.
### Suggested chain example (you may extend or adjust):
- General Tree → Binary Tree → Complete Binary Tree
- Binary Tree → Binary Search Tree → AVL / Red-Black
- Binary Tree → Max Heap / Min Heap
### Your Diagram:
<img width="933" height="261" alt="image" src="https://github.com/user-attachments/assets/405b9df9-cead-4599-bd89-22284564c894" />
<img width="926" height="286" alt="image" src="https://github.com/user-attachments/assets/55c79e2e-b8aa-41ab-8799-e037e8db0cd4" />
<img width="917" height="279" alt="image" src="https://github.com/user-attachments/assets/b27b9e32-fa0e-4830-bf43-53f68f3b166c" />

## 2.2 Explanation of Transformations

### Fill in what new property or constraint is added at each step.

From	         |To                      |	New property / constraint added                    |
|--------------|------------------------|----------------------------------------------------|
|General Tree  |Binary Tree             |	每個節點最多有兩個子節點                             |
|Binary Tree   |	Complete Binary Tree	|除了最後一層外，每層節點皆填滿，最後一層節點從左到右排列 |
|Binary Tree   |	Binary Search Tree    |	左子樹節點 < 根節點 < 右子樹節點                     |
|BST           |	AVL Tree	            |高度平衡，每個節點左右子樹高度差 ≤ 1                   |
|BST           |	Red-Black Tree      	|自平衡，節點有紅/黑顏色，遵守紅黑規則                  |
|Binary Tree   |	Max Heap	            |完全二元樹，每個節點 ≥ 子節點                         |
|Binary Tree	 |Min Heap	              |完全二元樹，每個節點 ≤ 子節點                         |

## Section 3. Tree Constructions Using Given Integers
### Given integers (fixed for all parts):37, 142, 5, 89, 63, 117, 24, 176, 58, 133, 92, 11, 151, 72, 39, 184, 7, 101, 54, 160
### Task: For each tree type below, construct the tree using these integers, take a screenshot of the tree from your chosen tool, record the tool name/URL, and describe the insertion / heap-building procedure.

- Binary Tree
Tool name / URL: https://treeconverter.com/

Construction / insertion description: 每個節點最多有兩個子節點。

Screenshot of Binary Tree (paste below):

<img width="702" height="209" alt="image" src="https://github.com/user-attachments/assets/75eaa8fc-9299-4f52-8623-70441399f46c" />


- Complete Binary Tree
Tool name / URL: https://sercankulcu.github.io/files/data_structures/slides/Bolum_08_Heap.html

Construction / insertion description: 一種二元樹，除最後一層外，每層節點皆填滿，最後一層節點從左到右排列。

Screenshot of Complete Binary Tree (paste below):

<img width="555" height="331" alt="image" src="https://github.com/user-attachments/assets/6664015a-4206-48c2-b6ed-0eddc20583bd" />


- Binary Search Tree (BST)
Tool name / URL: https://www.cs.usfca.edu/~galles/visualization/BST.html

Insertion rule (e.g., “insert in given order using BST rules”): 若新值小於目前節點，往左子樹移動
，若新值大於目前節點，往右子樹移動。左子樹節點 < 根節點 < 右子樹節點。

Screenshot of BST (paste below):

<img width="385" height="262" alt="image" src="https://github.com/user-attachments/assets/cafd05bb-782f-4f5a-94e1-10d8a0d1942b" />


- AVL Tree
Tool name / URL: https://cmps-people.ok.ubc.ca/ylucet/DS/AVLtree.html

Insertion & balancing description: 自平衡的二元搜尋樹，每個節點左右子樹高度差 ≤ 1，若某節點左右子樹高度差超過 1，則透過適當的旋轉進行調整，以維持高度平衡。

Screenshot of AVL Tree (paste below):

<img width="373" height="183" alt="image" src="https://github.com/user-attachments/assets/38edd8c1-f9ba-44f1-a2a4-4d6e0486b95e" />


- Red-Black Tree
Tool name / URL: https://www.cs.usfca.edu/~galles/visualization/RedBlack.html

Insertion & balancing description: 遵守紅黑規則，插入位置依 BST 規則，新插入的節點一律標記為紅色，根節點必須是黑色，若插入後違反紅黑性質，則透過重新著色與旋轉進行修正，並確保根節點為黑色。

Screenshot of Red-Black Tree (paste below):

<img width="542" height="179" alt="image" src="https://github.com/user-attachments/assets/56d1c14e-3717-4c60-9420-8269e0b4309c" />


- Max Heap
Tool name / URL: https://sercankulcu.github.io/files/data_structures/slides/Bolum_08_Heap.html

Construction / heap-building description (e.g. heapify, insert-and-sift-up): 每個節點的值大於或等於其子節點的值。根節點為最大值。從最後一個非葉節點開始，向上進行調整，對每個節點執行 sift-down，直到整個結構滿足Max Heap 性質。

Screenshot of Max Heap (paste below):

<img width="555" height="331" alt="image" src="https://github.com/user-attachments/assets/5b0fd0a4-0c5d-4c0b-8bf3-28ee07132155" />


- Min Heap
Tool name / URL: https://sercankulcu.github.io/files/data_structures/slides/Bolum_08_Min_Heap.html

Construction / heap-building description: 每個節點的值小於或等於其子節點的值。根節點為最小值。將新元素插入至堆的最底層最左側，若新節點值小於其父節點，則與父節點交換，持續向上比較與交換（sift-up），直到新節點大於等於父節點，或成為根節點。

Screenshot of Min Heap (paste below):

<img width="482" height="277" alt="image" src="https://github.com/user-attachments/assets/dc653b26-be8a-4fd9-9af9-debd0cc4a723" />


##　Section 4. Application Examples
###　Task: For each tree type, choose one application and explain why this tree is suitable.
|Tree Type	|Application Example (name / context) |	Why this tree fits (properties that matter)|
|---|---|---|
|Binary Tree	|運算式樹	|二元樹的每個節點最多有兩個子節點，適合表示二元運算。|
|Complete Binary Tree	|Heap資料結構	|完全二元樹保證每層節點都盡量填滿且靠左排列，便於用陣列表示，節點索引計算簡單，適合堆排序和優先佇列的實作。|
|Binary Search Tree|	字典查詢	|BST 的左子樹節點小於父節點，右子樹節點大於父節點，能快速搜尋。|
|AVL Tree	|即時排行榜|	AVL 樹在插入或刪除後自動平衡，可快速搜尋排名或範圍查詢，適合需要頻繁更新且查詢效率高的場景。|
|Red-Black Tree	|程式語言標準庫的映射結構	|紅黑樹是自平衡 BST，插入與刪除操作成本穩定，適合需要長期維護有序鍵值對的資料結構。|
|Max Heap	|優先佇列	|根節點永遠是最大值，可快速取得最大元素，適合事件排程、任務管理或任何需要快速存取最大元素的場景。|
|Min Heap	|Dijkstra 最短路徑演算法	|根節點為最小值，可快速找到最短距離節點，適合反覆選取最小元素的演算法，節省搜尋最小值的時間。|

## Section 5. Reflection on Tree Family and Performance (Optional but recommended)
### Among BST, AVL, and Red-Black trees, which one would you pick for:
### Mostly search (few updates)? Why?

AVL Tree，因為他是自平衡 BST，搜尋效率穩定，平衡維護的成本幾乎可以忽略，因此它能提供最快速的查找速度。

### Frequent insertions and deletions? Why?

Red-Black Tree，是一種自平衡二元搜尋樹，即使資料頻繁變動，也能維持穩定的搜尋和更新效率。

### If you must store these 20 integers for static search only (no updates), which structure or representation would you prefer (sorted array + binary search, BST, AVL, etc.)? Why?

sorted array + binary search，因為Binary search 時間複雜度是 O(log n)，不需要插入和刪除，使用陣列實作簡單。

## Section 6. AI Usage Log (Required)
### Task: Record every time you ask an AI assistant about this assignment.

|Index	|Date / Time	|AI Service (ChatGPT, Gemini, etc.)	|Your Full Prompt / Question |
|----|---|---|---|
|1 |	1214/22:17	|ChatGPT	|幫我寫general tree, binary tree, complete binary tree, binary search tree, AVL tree, red-black tree, max heap and min heap的定義|
|2	|1214/22:43	|ChatGPT	|幫我把以下轉換製作成表格:General Tree → Binary Tree 和Binary Tree → Complete Binary Tree和Binary Tree → Binary Search Tree和BST → AVL Tree和BST → Red-Black Tree和Binary Tree → Max Heap和Binary Tree → Min Heap|
|3	|1214/23:05|	ChatGPT|	幫我寫general tree, binary tree, complete binary tree, binary search tree, AVL tree, red-black tree, max heap and min heap的應用範例並說明原因|











