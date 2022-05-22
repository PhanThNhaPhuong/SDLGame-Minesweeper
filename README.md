# SDLGame-Minesweeper
 - Phan Thị Nhã Phương - 21020379
 - Bài tập lớn của lớp lập trình nâng cao 2022I_INT2215_1
# Cách cài đặt game
 - Cài đặt Visual Studio Code version 1.66.2
 
     ![image](https://user-images.githubusercontent.com/100477812/169704602-f3089e14-abaf-4eb0-a379-b8e62099f053.png)
     
 - Tải game ở https://github.com/PhanThNhaPhuong/SDLGame-Minesweeper, nhấn vào mục Code, chọn Download Zip
 
     ![image](https://user-images.githubusercontent.com/100477812/169705008-e2da7e67-4ee0-4348-81da-3d9b0cfa80b4.png)
     
 - Sau khi tải về và giải nén, mở VSCode tới file vừa giải nén.
 - Mở Makefile và thay bằng dòng lệnh: g++ -Iinclude -Iinclude/sdl -Iinclude/headers -Llib -o Main src/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
 - Mở Terminal, chọn Command Prompt 
 
      ![image](https://user-images.githubusercontent.com/100477812/169705337-d08b2f72-011c-4923-b730-f2cad666ec25.png)
     
 - Gõ dòng lệnh mingw32-make -f Makefile
 - Chương trình biên dịch thành công thì file game sẽ có tên là main.exe và nằm trong file chúng ta đã tải về
 
      ![image](https://user-images.githubusercontent.com/100477812/169705595-8f93d994-74d7-42a2-ae0d-cb92264501f7.png)

# Luật chơi và các tính năng
- Game Minesweeper gồm 3 mức độ chơi :
    + Easy : 9x9 và 10 ô mìn
    + Medium :16x16 và 40 ô mìn
    + Hard : 20x20 và 80 ô mìn
 - Các quả mìn được rải ngẫu nhiên sau mỗi lần chơi
 - Sân mìn gồm : Các chữ số hiển thị số mìn xung quanh ô đó, các ô trống không có mìn, và các ô có mìn
 - Click chuột trái để mở 1 ô mìn, click chuột phải để đặt cờ. Nếu bạn click chuột trái vào ô có mìn, bạn thua. Nếu bạn dò được tất cả vị trí mìn, bạn thắng
 - Sau khi bạn thắng hoặc thua, nhấn "s" để chơi lại, nhấn ESC để quay trở lại Menu
 - Các âm thanh sống động tùy theo các thao tác của người chơi
 - Bộ đếm thời gian chơi theo đơn vị giây
# Kết luận, hướng phát triển game
 - Hướng phát triển game :
   + Nâng cấp giao diện cho đẹp mắt hơn
   + Nâng cấp độ khó của game : Tạo thêm nhiều level khó hơn để người chơi không nhàm chán
   + Nâng cấp các chức năng khác của game : Tạo ra nút bật, tắt, điều chỉnh âm thanh; Tạm dừng game; Nghe các bài hát trong lúc chơi;...
  - Kết luận và bài học rút ra :
    + Việc tự học rất quan trọng, phải luôn học hỏi, tìm tòi những kiến thức mới từ nhiều nguồn khác nhau
    + Chăm chỉ là chìa khóa để tiến bộ 
    + Sử dụng kỹ thuật hướng đối tượng sẽ giúp việc quản lí trở nên dễ dàng hơn 
    + Code của bạn luôn có hướng để phát triển thêm
