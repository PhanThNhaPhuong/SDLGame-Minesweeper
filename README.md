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
# Kết luận, hướng phát triển game
