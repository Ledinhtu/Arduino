
> __Linear Regression__ là một thuật toán _Supervised learning_, có tên khác là _Linear Fitting_ (trong thống kê) hoặc _Linear Least Square_.

## 1. Giới thiệu

- Kí hiệu toán học:
    - _Số vô hướng_: chữ cái không in đậm, có thể viết hoa.
    - __vector__: chữ cái thường in đậm.
    - ___MA TRẬN___: chữ viết hoa in đậm.

....

## 2. Đặc điểm của thuật toán K-NN

- Đơn giản, dễ triển khai, không yêu cầu bất kỳ giả định nào về phân phối dữ liệu cơ bản, it nhạy cảm với nhiễu, được sử dụng rộng rãi cho cả bài toán _classification_ và _regression_.

- Là phương pháp học có giám sát, phi tham số, đưa ra dự đoán dựa trên sự giống nhau của các điểm dữ liệu trong một tập dữ liệu nhất định.

- Thuật toán K-NN hoạt động bằng cách tìm K dữ liệu lân cận gần nhất với điểm dữ liệu cần dự đoán dựa trên thước đo khoảng cách (ví dụ Euclide...). 

- Nhóm hoặc giá trị của điểm dữ liệu sau đó được xác định bằng mức trung bình của K điểm lân cận. 

- Cho phép thuật toán thích ứng với các mẫu dữ liệu khác nhau và đưa ra dự đoán dựa trên cấu trúc cục bộ của dữ liệu.

- Các phương pháp đo khoảng cách dùng trong thuật toán K-NN:
    - __Euclidean Distance__:
    $$ distance(x, X_i) = \sqrt{\sum_{j=1}^d (x_i - (X_i)_j)^2}$$  

    - __Manhattan Distance__:
    $$ distance(x, y) = \sum_{i=1}^n |x_i - y_i|$$  

    - __Minkowski Distance__:
    $$ distance(x, y) = (\sum_{i=1}^n ((x_i - y_j)^p)^(1/P))$$ 

- Lựa chọn giá trị `K` cho K_NN:
    - Giá trị `K` nên chọn dựa trên dữ liệu đầu vào.
    - Nếu dữ liệu đầu vào có nhiều nhiễu và ngoại lệ thì nên chon `K` lớn.
    - Nên chọn giá trị `K` _lẻ_ để thuận tiện cho phân loại.
    - Sử dụng phương pháp [Cross-validation](https://www.geeksforgeeks.org/cross-validation-machine-learning/) để lựa chọn `K` dựa trên dataset đã cho.

- `ground truth`: nhãn/label/đầu ra thực sự của các điểm trong test data.

## Hoạt động của thuật toán K-NN

- Thuật toán K-Nearest Neighbors (K-NN) hoạt động theo nguyên tắc tương tự, trong đó nó dự đoán nhãn hoặc giá trị của điểm dữ liệu mới bằng cách xem xét nhãn hoặc giá trị của `K` lân cận gần nhất của nó trong tập dữ liệu huấn luyện.

- Các bước hoạt động của thuật toán K-NN:
    - __STEP 1__: Lựa chọn giá trị tối ưu cho `K`
    - __STEP 2__: Tính toán khoảng cách
    - __STEP 3__: Tìm các điểm lân cận gần nhất.
    - __STEP 4__: Đánh giá cho _Classification_ hoặc lấy trung bình cho _Regression_

## Ưu điểm của thuật toán KNN

- _Dễ triển khai_: vì mức độ phức tạp không cao.
- _Dễ thích ứng_: K-NN lưu trữ tất cả dữ liệu trong bộ nhớ, khi có dữ liệu mẫu mới được thêm vào thì thuật toán sẽ tự điều chỉnh theo dữ liệu ấy cho dự đoán trong tương lai.
- _Ít siêu tham số_: K-NN chỉ yêu cầu 2 tham số là `K` và phương pháp đo khoảng cách.

## Nhược điểm của thuật toán KNN

- _Không thể mở rộng quy mô_: yêu cầu khả năng tính toán và lưu trữ dữ liệu lớn, tiêu tốn nhiều thời gian và tài nguyên.

- _"Curse of Dimensionality"_: Có một thuật ngữ gọi là hiện tượng đạt đỉnh (_peaking phenomenon_), theo đó thuật toán KNN bị ảnh hưởng bởi ["Curse of Dimensionality"]() khiến nó gặp khó khăn trong việc phân loại các điểm dữ liệu một cách chính xác khi dữ liệu có quá nhiều chiều.

- _Dễ bị Overfitting_: cùng với "Curse of Dimensionality", K-NN cũng dễ bi Overfitting.

## Model evaluation

### Confusion matrix

```
+===================================================+
|               |           Predicted Class         |
|---------------+-----------+-----------+-----------|
|               |           |   Yes     |   No      |
|               |-----------+-----------+-----------|
| Actual Class  |   Yes     |   a       |   b       |
|               |-----------+-----------+-----------|
|               |   No      |   c       |   d       |
+===================================================+
```
- Các thành phần trong _confusion matrix_:
    - __a__: TP (true positive) – mẫu mang nhãn __dương__ được phân lớp đúng vào lớp __dương__.
    - __b__: FN (false negative) – mẫu mang nhãn __dương__ bị phân lớp sai vào lớp __âm__.
    - __c__: FP (false positive) – mẫu mang nhãn __âm__ bị phân lớp sai vào lớp __dương__.
    - __d__: TN (true negative) – mẫu mang nhãn __âm__ được phân lớp đúng vào lớp __âm__.

- Độ chính xác (_Accuracy_)
$$ Acc(M) = (a+d)/(a+b+c+d) $$

- Tỉ lệ lỗi (_Error rate_)
$$ Error_rate(M) = 1 - Acc(M) $$

- Precision (_p_)
$$ Precision(p) = a/(a+c) $$

- Sensitivity/Recall
$$ Sensitivity/Recall(r, se) = a/(a+b) $$

- F-measure
$$ F-measure(f) = 2rp/(r+p) = 2a/(2a+b+c) $$

- Support(su)
$$ Support(su) = (a+b)/n (\% population) $$

- Base Rate(br)
$$ Base Rate(br) = (a+c)/n (\% population) $$

....

### Confident Interval

### Gain and Lift Chart

### Kolmogorov-Smirnov Chart


### Chi Square


### Đường cong Receiver Operating Characteristic (ROC)


### Gini Coefficient


### Root Mean Square Error (RMSE)

RMSE = căn của trung bình cộng của bình phương các sai số

<!-- ----------------------------------------------------------------------------------------------------------------- -->

## Curse of Dimensionality

- Khi thêm một _dimension_ vào dataset, thể tích không gian tăng theo cấp số nhân khiến dữ liệu trở nên thưa thớt (_sparse_)_ hơn ( cùng một số số lượng điểm thì đặt trong hộp 3D sẽ thưa thớt hơn so với đường thẳng ).

- Nó dẫn đến các vấn đề sau:
    - __Sự thưa thớt dữ liệu__: hầu hết không gian high-dimensional trống rỗng khiến việc phân cụm (_clustering_) và phân loại (_classification_) trở nên khó khăn.
    - __Tiêu tốn nhiều thời gian và tài nguyên cho tính toán hơn__.
    - __Overfitting__: Càng nhiều chiều, model càng dễ trở nên phức tạp quá mức, fitting với với noise hơn làm giảm khả năng khái quát hóa của model đối với data mới.
    - __Mất đi khoảng cách ý nghĩa__: Càng nhiều chiều, sự khác biệt về khoảng cách giữa các điểm dữ liệu có xu hướng trở nên không đáng kể, khiến cho các thước đo như khoảng cách Euclide trở nên ít ý nghĩa hơn.
    - __Suy thoái hiệu suất__: Các thuật toán, đặc biệt là các thuật toán dựa vào phép đo khoảng cách như K-NN giảm hiệu suất đáng kể.
    - __Khó trực quan__: Dữ liệu nhiều chiều khó trực quan hóa, khiến việc phân tích dữ liệu trở nên khó khăn hơn.

- Tuy nhiên khi số _dimension_ tăng quá _threshold_, độ phức tạp trong tính toán có xu hướng giảm nhanh vì model bị bối rối khi có quá nhiều thông tin.

- Giải pháp __"dimensionality reduction"__

- Các thành phần của dimensionality reduction:
    - _Lựa chọn đặc tính_ (Feature selection): tìm một tập hợp con của tập hợp các biến hoặc đặc điểm ban đầu để có được một tập hợp con nhỏ hơn có thể được sử dụng để mô hình hóa vấn đề, thường gồm 3 cách:
        - 1. Filter
        - 2. Wrapper
        - 3. Embedded

    - _Trích xuất tính năng_ (Feature extraction): 

- Một số phương pháp "Dimensionality Reduction":
    - _Principal Component Analysis (PCA)_: biến đổi các biến ban đầu thành một tập hợp các biến mới, là sự kết hợp tuyến tính của các biến ban đầu.
    - _Linear Discriminant Analysis (LDA)_: xác định các thuộc tính có sự khác biệt lớn nhất giữa các lớp, hữu ích trong phân loại.
    - _t-Distributed Stochastic Neighbor Embedding (t-SNE)_: một kỹ thuật giảm kích thước phi tuyến tính, đặc biệt hữu ích để hiển thị các tập dữ liệu nhiều chiều.
    - _Autoencoders_: sử dụng neural network để nén đầu vào thành biểu diễn nhỏ hơn mà từ đó nó có thể khôi phục.



## Cross Validation in Machine Learning

- _Xác thực chéo_ (Cross-Validation) là một kỹ thuật được sử dụng trong machine learning để đánh giá hiệu suất của một mô hình trên dữ liệu chưa được huấn luyện.

- Nó liên quan đến việc chia dữ liệu có sẵn thành nhiều phần hoặc tập hợp con, sử dụng một trong các phần này làm bộ xác thực còn các phần còn lại được sử dụng để huấn luyện. 

- Quá trình này được lặp lại nhiều lần, mỗi lần sử dụng một phần gấp khác nhau làm bộ xác thực. 

- Cuối cùng, kết quả từ mỗi bước xác thực được tính trung bình để tạo ra ước tính chắc chắn hơn về hiệu suất của mô hình.

- Cross-Validation là một bước quan trọng trong quy trình học máy và giúp đảm bảo rằng mô hình được chọn để triển khai là mạnh mẽ và khái quát hóa tốt cho dữ liệu mới.

- Có một số kỹ thuật cross-validation như __k-fold cross validation__, __leave-one-out cross validation__, và __Holdout validation__, __Stratified Cross-Validation__
- Việc lựa chon kỹ thuật phụ thuộc vào số chiều và tính chất của data cũng như các yêu cầu cụ thể của bài toán mô hình hóa.

### 1. Holdout Validation

- Sử dụng 50% dataset cho huấn luyện và 50% còn lại cho kiểm thử model.

- Hạn chế chính của kỹ thuật này là trong 50% dataset giữ lại để kiểm thử model có thể phần lớn thông tin quan trọng, tức là kỹ thuật này có độ lệch cao (_high-bias_)

### 2. LOOCV (Leave One Out Cross Validation)

- Chỉ để lại 1 điểm dữ liệu cho kiểm thử và sử dụng phần còn lại cho huấn luyện; sau đó lặp lại với 1 điểm khác cho kiểm thử.

- Ưu điểm: low bias.

- Nhược điểm: dấn dến _higher variation_ - trong trường hợp điểm kiểm thử là ngoại lệ, mất nhiều thời gian cho huấn luyện và kiểm thử.

### 3. Stratified Cross-Validation

- Một kỹ thuật được sử dụng trong học máy để đảm bảo rằng mỗi bước của quá trình xác thực chéo duy trì sự phân bổ lớp giống như toàn bộ dataset. 

- Điều này đặc biệt quan trọng khi xử lý các tập dataset mất cân bằng, trong đó một số lớp nhất định có thể được trình bày chưa đầy đủ.

- Trong ký thuật này:
    - Dataset được chia thành k phần trong khi vẫn duy trì tỷ lệ các lớp trong mỗi lần.
    - Trong mỗi lần lặp, một phần được sử dụng để kiểm thử và các phần còn lại được sử dụng để huấn luyện.
    - Quá trình này được lặp lại k lần, với mỗi lần gấp đóng vai trò là tập kiểm thử một lần.

- Stratified Cross-Validation là điều cần thiết khi xử lý các vấn đề phân loại trong đó việc duy trì sự cân bằng phân phối lớp là rất quan trọng để mô hình có thể khái quát hóa tốt các dữ liệu không nhìn thấy được.

### 4. K-Fold Cross Validation

- Chia tập dữ liệu thành k số tập con (được gọi là fold), sau đó thực hiện huấn luyện trên tất cả các tập con nhưng để lại một (k-1) tập con để đánh giá mô hình được huấn luyện. 
- Lặp lại k lần với một tập hợp con khác nhau dành riêng cho mục đích kiểm thử mỗi lần.
- K thường bằng 10.
