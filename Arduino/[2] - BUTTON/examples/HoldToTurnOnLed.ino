int led = 3;                            // biến led được khởi tạo với định dạng số nguyên (interger) và được gán chân số 3 làm chân LED
int button = 2;                         // biến button được khởi tạo với định dạng số nguyên (interger) và được gán chân số 2 làm chân Button
int buttonState = 0;                    // biến buttonState được khởi tạo nhằm để gán giá trị trạng thái của nút nhấn
void setup()
{
    Serial.begin(9600);                 // Khởi tạo Serial với baud 9600 (chuẩn baud rate cho arduino)
    pinMode(led, OUTPUT);               // Định dạng chân cho biến led (OUTPUT - định dạng dành cho loại hiển thị)
    pinMode(button, INPUT_PULLUP);      // Định dạng chân cho biến led (INPUT_PULLUP - định dạng dành cho loại đọc dữ liệu từ cảm biến & nút nhấn)
}

void loop()
{
    buttonState = digitalRead(button);      // Gán giá trị trạng thái của nút nhấn
    if(buttonState == 1)                    // Nếu nút được nhấn
    {
        digitalWrite(led, 1);               // Đèn sáng
    }
    else                                    // trường hợp còn lại
    {
        digitalWrite(led, 0);               // Đèn tắt
    }
}

/* 
*   Bài tập dành cho các bạn 
*   Bài tập số 1: Viết chương trình nhấn nút 1 lần -> sáng đèn. Nhấn nút 2 lần -> tắt đèn 
*/