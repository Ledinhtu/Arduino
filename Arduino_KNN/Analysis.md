```
+=======================================================+
|                   Data class                          |
|-------------------------------------------------------|
| demension chưa xác định   |   cần propety demension   |
|-------------------------------------------------------|
| mối thuộc tính kiểu float |                           |
|-------------------------------------------------------|
| cấu trúc dữ liệu cho class|                           |
|-------------------------------------------------------|
```
<!-- ``` -->
- Numbers element of Dataset: can be change
                        |
                        +---> [x] Case 1: Link list  --> Soft ?
                        |
                        +---> 

- Data class (KNNNode)
            |
            +---> Property (of class)
            |           |
            |           +---> int demension     Total Demension
            |           |
            |           +---> float value[]     Pointer to Array of Property: alocated when constructor class and freed when decontructor class
            |           |       
            |           +---> KNNNode * _next   Poiter to next element in dataset
            |
            |
            +---> Method
                        |
                        +---> Contructor()      alocated space for array of property
                        |
                        +---> Destructor()      freed pointer of array
                        |
                        +---> getNext()         return pointer to next data or NULL (last dataa)
                        |
                        +---> getValue()
                        |
                        +---> 

- KNNClassifier class
            |
            +---> Property  
            |           |       
            |           +---> 
            |
            |
            +---> Method
<!-- ``` -->