*   Những lưu ý khi lập trình LED
*   1. Chú ý xác định chiều anode (dương) / cathode (âm) trước khi lập trình LED (img/1.jpg)
*   2. Lựa chọn điện trở kéo phù hợp khi lập trình để đạt hiệu năng tốt nhất (đối với nguồn cấp vào là 5Volt)
*   3. Tuyệt đối không được cắm ngược dây (dương / tín hiệu -> âm hoặc ngược lại)
*
*   LED được chia làm 2 loại: LED cắm (DIP) và LED dán (SMD)
*   Chương trình học sẽ học về LED cắm vì dễ dàng tiếp cận hơn cho các bạn
*   LED cũng có nhiều loại có điện áp định mức khác nhau (2 -> 24Volt là những loại LED DC thông dụng nhất)
*   LED sẽ có 2 cách đấu: nối tiếp hoặc song song. Cách đấu nối tiếp (img/2.jpg), cách đấu song song (img/3.jpg)
*   LED thuộc loại hiển thị --> định dạng OUTPUT
*   LED có giá trị 1 / 0 (đối với digital) và đối với analog thì tính theo xung (2^8 - 1 = 256 - 1 = 255 maximum).
*   Cách tính % theo xung đối với analog
*   Ví dụ: 50% xung = 255 * 50 / 100 = 127.5 ~ 128      25% xung = 255 * 25 / 100 = 63.75 ~ 64
*
*   Những hàm cần thiết khi lập trình LED
*   digitalWrite(chân, giá trị bật hoặc tắt);        Đây là 1 hàm thực thi tác vụ bật hoặc tắt LED đi
*   analogWrite(chân, xung);
*   pinMode(chân, OUTPUT);      Cấu hình chân với định dạng OUTPUT
*   delay(độ trễ đơn vị ms);    Thiết lập độ trễ thích hợp cho chương trình
*   Chúng ta cũng có thể khởi tạo biến và gán chân với định dạng số nguyên (int)
*   Cụ thể như sau:     int led = 2;        Tức là biến led được khởi tạo và được gán chân số 2 là chân led
*   digitalWrite(led, 1);   -   digitalWrite(led, 0);        
*   analogWrite(led, 255);   -   digitalWrite(led, 0);
*   Để hiểu rõ hơn về các định dạng khác, hãy xem mục README.md ở mục tổng Arduino