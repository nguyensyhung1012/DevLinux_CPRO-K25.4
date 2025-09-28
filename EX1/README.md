# ⚠️ C Demonstration Program: Stack Overflow, Memory Leak, and Out-of-Memory

## 📌 What (Chương trình này là gì?)
Đây là một chương trình viết bằng **C** để mô phỏng ba loại lỗi phổ biến trong quản lý bộ nhớ:
1. **Stack Overflow**: Gọi đệ quy vô hạn đến khi tràn ngăn xếp.
2. **Memory Leak**: Cấp phát bộ nhớ liên tục mà không giải phóng.
3. **Out of Memory**: Thử cấp phát một khối bộ nhớ cực lớn, dẫn đến hết bộ nhớ.

---

## 📌 Why (Tại sao cần chương trình này?)
- Giúp **sinh viên và lập trình viên** hiểu rõ hơn về cách bộ nhớ hoạt động trong C.  
- Minh họa các lỗi **nghiêm trọng nhưng thường gặp** trong phát triển phần mềm nhúng và hệ thống.  
- Dùng làm **bài tập demo** để rèn luyện thói quen viết code an toàn hơn.

---

## 📌 Where (Ứng dụng ở đâu?)
- **Trong lớp học/laboratory**: dạy về quản lý bộ nhớ và lỗi runtime.  
- **Trong tài liệu training**: minh họa hậu quả của việc quản lý bộ nhớ sai.  
- **Trong môi trường dev/test**: để kiểm chứng công cụ phân tích bộ nhớ (valgrind, sanitizers...).

---

## 📌 When (Khi nào nên dùng?)
- Khi học môn **C programming, Operating System, hoặc Embedded Systems**.  
- Khi cần **minh họa trực quan** cho lỗi memory leak, stack overflow, hoặc out-of-memory.  
- Khi dùng để kiểm tra **trình phân tích lỗi (debugger, sanitizer)**.

---

## 📌 Who (Ai nên sử dụng?)
- **Sinh viên CNTT/Kỹ thuật máy tính** học về C và quản lý bộ nhớ.  
- **Giảng viên** muốn có ví dụ trực quan cho bài giảng.  
- **Lập trình viên mới** để hiểu rõ hơn về lỗi bộ nhớ.  

⚠️ **Không nên chạy trong môi trường production** vì chương trình cố tình gây crash và tiêu tốn tài nguyên.

---

## 📌 How (Làm thế nào?)
### 1. Cấu trúc file
- ** memory_lab.c** : Chương trình chính ( luồng xử lý )