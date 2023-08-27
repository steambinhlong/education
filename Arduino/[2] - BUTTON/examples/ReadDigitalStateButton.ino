int button = 2;         // biến button được khởi tạo với định dạng số nguyên (interger) và được gán chân số 2 làm chân Button
int buttonState = 0;    // biến buttonState được khởi tạo nhằm để gán giá trị trạng thái của nút nhấn
void setup()
{
    Serial.begin(9600);               // Khởi tạo Serial với baud 9600 (chuẩn baud rate cho arduino)
    pinMode(led, INPUT_PULLUP);       // Định dạng chân cho biến led (INPUT_PULLUP - định dạng dành cho loại đọc dữ liệu từ cảm biến & nút nhấn)
}

void loop()
{
    buttonState = digitalRead(button);      //gán giá trị trạng thái của nút nhấn
    Serial.println(buttonState);            // In ra tín hiệu từ nút nhấn
    delay(100);                 // thiết lập độ trễ 100ms
}