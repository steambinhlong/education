int led = 2;        // biến led được khởi tạo với định dạng số nguyên (interger) và được gán chân số 2 làm chân LED

void setup()
{
    pinMode(led, OUTPUT);       // Định dạng chân cho biến led (OUTPUT - định dạng dành cho loại hiển thị)
}

void loop()
{
    /* Thiết lập tác vụ sáng dần - tối dần LED theo độ trễ */
    /* Vòng lặp for được lặp từ giá trị 0 đến 255 tương đương với 0% -> 100% xung ở Arduino */
    for(int i = 0; i <= 255; i++)
    {
        analogWrite(led, i);    // Thực thi tác vụ kích LED theo xung (sáng dần)
        delay(15);              // Thiết lập độ trễ tính theo ms
    }   
    delay(500);
    /* Vòng lặp for được lặp từ giá trị 255 đến 0 tương đương với 100% -> 0% xung ở Arduino */
    for(int i = 255; i >= 0; i--)
    {
        analogWrite(led, i);    // Thực thi tác vụ kích LED theo xung (tối dần)
        delay(15);              // Thiết lập độ trễ tính theo ms
    }   

}

/* 
*   Bài tập dành cho các bạn 
*   Bài tập số 1: Viết chương trình nhấp nháy 1 LED với độ trễ là 150ms
*   Bài tập số 2: Viết chương trình nhấp nháy 3 LED tuần tự nhau với độ trễ là 300ms mỗi LED
*/