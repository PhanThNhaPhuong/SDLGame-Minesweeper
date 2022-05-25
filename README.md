# SDLGame-Minesweeper
 - Phan Thị Nhã Phương - 21020379
 - Bài tập lớn của lớp lập trình nâng cao 2022I_INT2215_1
# Cách cài đặt game
 - Cài đặt Visual Studio Code version 1.66.2
 
     ![image](https://user-images.githubusercontent.com/100477812/169704602-f3089e14-abaf-4eb0-a379-b8e62099f053.png)
     
 - Tải game ở https://github.com/PhanThNhaPhuong/SDLGame-Minesweeper, nhấn vào mục Code, chọn Download Zip. Sau khi tải về và giải nén, mở VSCode tới file vừa giải nén. Hoặc Clone repo về máy tính cá nhân bằng lệnh git clone https://github.com/PhanThNhaPhuong/SDLGame-Minesweeper.git
     ![image](https://user-images.githubusercontent.com/100477812/169705008-e2da7e67-4ee0-4348-81da-3d9b0cfa80b4.png)
     
 - Mở Makefile và thay bằng dòng lệnh: g++ -Iinclude -Iinclude/sdl -Iinclude/headers -Llib -o Main src/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
 - Mở Terminal, chọn Command Prompt 
 
      ![image](https://user-images.githubusercontent.com/100477812/169705337-d08b2f72-011c-4923-b730-f2cad666ec25.png)
     
 - Gõ dòng lệnh mingw32-make -f Makefile
 - Chương trình biên dịch thành công thì file game sẽ có tên là main.exe và nằm trong file chúng ta đã tải về
 
      ![image](https://user-images.githubusercontent.com/100477812/169705595-8f93d994-74d7-42a2-ae0d-cb92264501f7.png)

# Mô tả chung về trò chơi 
- Game Minesweeper gồm 3 mức độ chơi :
    + Easy : 9x9 và 10 ô mìn
    + Medium :16x16 và 40 ô mìn
    + Hard : 20x20 và 80 ô mìn
 - Các ô mìn được rải ngẫu nhiên sau mỗi lần chơi
 - Sân mìn gồm : Các chữ số hiển thị số mìn xung quanh ô đó, các ô trống không chứa mìn, và các ô mìn
 - Nhiệm vụ của người chơi là đi tìm vị trí của tất cả các ô mìn và đặt cờ vào đó, đồng thời mở được tất cả các ô khác không chứa mìn
 - Click chuột trái để mở 1 ô, click chuột phải để đặt cờ hoặc xóa cờ. Nếu bạn click chuột trái vào ô chứa mìn, bạn thua. Nếu bạn dò được tất cả các vị trí mìn và mở được tất cả các ô khác, bạn thắng
 - Sau khi bạn thắng hoặc thua, nhấn "s" để chơi lại, nhấn ESC để quay trở lại Menu
 # Các chức năng đã cài đặt
 - Menu hiển thị lựa chọn New Game hoặc Exit
 - Show Game Mode hiển thị 3 lựa chọn mức độ chơi
 - Sân mìn để người chơi tương tác
 - Các thao tác với chuột : 
   + Click chuột trái để mở một ô
   + click chuột phải để đặt cờ hoặc xóa cờ ở một ô.
 - Các thao tác với bàn phím : 
   + Nhấn ESC để back lại Menu
   + Sau khi bạn thua hoặc thắng, nhấn "s" để chơi lại 
 - Các âm thanh sống động tùy theo các thao tác của người chơi
   + Âm thanh CLick menu 
   + Âm thanh mở một ô
   + Âm thanh đặt cờ 
   + Âm thanh xóa cờ
   + Âm thanh bom nổ khi bạn thua
   + Nhạc nền khi bạn thắng
 - Bộ đếm thời gian chơi theo đơn vị giây
   + Đếm thời gian trong lúc chơi
   + Hiển thị thời gian chơi sau khi 1 ván game kết thúc (người chơi thắng hoặc thua)
 - Video mô tả : https://youtu.be/g_3Hd3VJbeM
# Các kĩ thuật lập trình đã sử dụng
 - thư viện SDL2, SDL2_image, SDL2_ttf, SDL2_mixer:
      + Xử lí các hình ảnh, icon
      + Xử lí thao tác từ chuột và bàn phím
      + Kĩ thuật render chữ, đổi màu chữ
      + Xử lí âm thanh
      + Tạo các phông chữ, render chữ
 - Các kĩ thuật lập trình
    + Kỹ thuật lập trình hướng đối tượng : Trò chơi được chia thành nhiều đối tượng khác nhau để dễ dàng quản lý và sử dụng
    + Kĩ thuật chia tách file : Các Class được khai báo trong các file .h và việc định nghĩa chi tiết các phương thức của class được đưa vào trong các file .cpp
    + Con trỏ : Lưu các lựa chọn trong Menu, Game Mode
    + Mảng : lưu các option trên menu và trên game mode
    + Vector : lưu trữ và tạo các sân mìn
    + Vòng lặp : While, for trong logic game,...
    + Enum : Lưu các biến trò chơi như BLANK, COVER,... 
  - Kỹ thuật clean code.
# Kết luận, hướng phát triển game
 - Hướng phát triển game :
   + Cải tiến về đồ họa và âm thanh của game cho sinh động và hấp dẫn hơn 
   + Nâng cấp độ khó của game : Tạo thêm nhiều level khó hơn để người chơi không nhàm chán
   + Nâng cấp các chức năng khác của game : Tạo ra nút bật, tắt, điều chỉnh âm thanh; Tạm dừng game; Nghe và chuyển các bài hát trong lúc chơi;...
   + Tạo chế độ chơi cho phép người chơi chọn kích thước sân mìn, số ô mìn mà mình mong muốn (tất nhiên phải trong một giới hạn cho phép nào đấy)
  - Kết luận và bài học rút ra :
    + Việc tự học rất quan trọng, phải luôn học hỏi, tìm tòi những kiến thức mới từ nhiều nguồn khác nhau
    + Chăm chỉ là chìa khóa để tiến bộ 
    + Trước khi viết chương trình, phải xây dựng được các bước, các đối tượng trong chương trình để việc quản lí và viết chương trình dễ dàng hơn
    + Sử dụng kỹ thuật hướng đối tượng sẽ giúp việc quản lí trở nên dễ dàng hơn 
    + Code của bạn luôn có hướng để phát triển thêm
