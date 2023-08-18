int led = 2;        // biến led được khởi tạo với định dạng số nguyên (interger) và được gán chân số 2 làm chân LED

void setup()
{
    pinMode(led, OUTPUT);       // Định dạng chân cho biến led (OUTPUT - định dạng dành cho loại hiển thị)
}

void loop()
{
    /* Thiết lập tác vụ nhấp nháy LED theo độ trễ */
    digitalWrite(led, 1);       // bật LED
    delay(250);                 // thiết lập độ trễ 250ms
    digitalWrite(led, 1);       // tắt LED
    delay(250);                 // thiết lập độ trễ 250ms
}

/* 
*   Bài tập dành cho các bạn 
*   Bài tập số 1: Viết chương trình nhấp nháy 1 LED với độ trễ là 150ms
*   Bài tập số 2: Viết chương trình nhấp nháy 3 LED tuần tự nhau với độ trễ là 300ms mỗi LED
*/