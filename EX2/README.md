# 🌱 Smart Plant Watering System (SPWS)

## 📌 What (Dự án này là gì?)
SPWS là một chương trình mô phỏng hệ thống tưới cây thông minh bằng ngôn ngữ **C**.  
Hệ thống có thể hoạt động ở hai chế độ:
- **AUTO**: Tự động tưới cây dựa trên giá trị độ ẩm đất từ cảm biến.
- **MANUAL**: Người dùng điều khiển tưới thông qua nút nhấn.

---

## 📌 Why (Tại sao cần dự án này?)
- Giúp **mô phỏng nguyên lý hệ thống nhúng** trong việc điều khiển bơm nước và LED báo trạng thái.  
- Thực hành **lập trình C có cấu trúc, module hóa, clean code**.  
- Dễ dàng mở rộng thành hệ thống thật bằng cách thay thế phần **ngẫu nhiên (rand)** bằng **GPIO, ADC, và sensor thật**.

---

## 📌 Where (Ứng dụng ở đâu?)
- **Nông nghiệp thông minh (Smart Farming):** Tưới tiêu tự động cho cây trồng.  
- **Nhà thông minh (Smart Home):** Hệ thống tưới cây cảnh trong nhà hoặc sân vườn.  
- **Giáo dục – đào tạo:** Làm ví dụ minh họa cho sinh viên học về **embedded C, hệ thống điều khiển và cảm biến**.

---

## 📌 When (Khi nào nên dùng?)
- Khi cần **demo logic tưới cây tự động** mà chưa có phần cứng.  
- Khi học về **cấu trúc chương trình C module hóa**.  
- Khi cần một **mô hình giả lập nhanh** trước khi triển khai thực tế.

---

## 📌 Who (Ai sử dụng?)
- **Sinh viên, giảng viên** học/làm việc trong lĩnh vực hệ thống nhúng.  
- **Kỹ sư phát triển IoT, nông nghiệp thông minh**.  
- **Người yêu công nghệ** muốn tự xây dựng hệ thống tưới cây DIY.

---

## 📌 How (Làm thế nào?)
### 1. Cấu trúc dự án
- **actuators.h / actuators.c**: Điều khiển bơm, LED, báo cáo trạng thái
- **buttons.h / buttons.c** : Mô phỏng xử lý nút nhấn (chế độ / tưới tay)
- **config.h** : Định nghĩa cấu hình hệ thống, enum, struct
- **sensors.h / sensors.c**: Giả lập đọc dữ liệu cảm biến 
- **watering_logic.h / watering_logic.c**: Logic tưới tự động
- **main.c** : Chương trình chính (luồng xử lý)