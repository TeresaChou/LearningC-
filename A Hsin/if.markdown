## if else 判斷式

if就是給予條件，也就是"如果...就..."，而else就是"否則"。用法如下：

```
if 條件成立:
   就做這件事
else:
   不然就做這件事
```
給予的條件應該是一個bool值，也就是True or False，所以可以是這樣：

   if some_string == 'yes':
   if your_grade >= 60:
   if some_bool:

注意python和其他語言不同，他不使用分號或大括號，而是用換行和tab，也就是排版來判斷程式的段落。因此在寫python的時候，每一條敘述都必須是獨立的一行，排版也必須照規定。以if else為例，在if之後縮排一個tab的程式碼都屬於這個if的範圍。如果要在if裡面使用if，就要繼續進一步的縮排。

```
if 你是男生:
   if 你大於18歲:
      去當兵吧！
   else:
      以後還是要當兵
else:
   這輩子都免役
```

如果我們要把很多if else接在一起，python中有elif (else if)這個字。

```
if 想吃便當:
   就吃便當
elif 想吃麵:
   就吃麵
elif 想吃麵包:
   就吃麵包
else:
   就不要吃了!
```

另外在assign變數的時候，Python還支援一種很簡潔的用法：

```
free_time = video_game if mom_in_good_mood else do_homework
```

這句和下面的程式碼效果是完全一樣的

```
if mom_in_good_mood:
   free_time = video_game
else:
   free_time = do_homework
```

## while 迴圈

while迴圈是非常常見好用的迴圈，他的格式跟if很像：

```
while 條件成立:
   就一直做這件事情
```

迴圈在執行的時候會先檢查條件是否成立，成立才會進入迴圈。每次要進入前都會再檢查一次。透過不同條件的設計，while迴圈可以有不同的用法。donuts.py中示範如何讓while loop執行特定的次數；end.py則示範while loop如何處理不確定次數的情況。

while loop執行的次數也有可能是0次或無限多次。對於下面的while loop，如果使用者一開始就輸入no，就根本不會進入while loop。

```
answer = input('Want a cake?')

while answer == 'yes':
   print('Here you are!')
   answer = input('Do you want some more?')
```

有時候我們需要設計會不斷運作，只有特定情況才停止的程式。我們可以直接這樣寫：
```
while True:
   遊戲不斷在跑
```
但是這樣我們要如何終止程式呢？while有個相對應的功能叫break，不管while loop進行到哪裡，只要遇到break，就會直接被打斷，跳出迴圈。

```
while True:
   遊戲一直跑
   if 有人按了結束:
      break    # 程式就結束了
   遊戲繼續一直跑
```

除了while迴圈以外，還有一個較複雜的for迴圈，我們會留到下一堂課再繼續介紹。其實for迴圈和while迴圈是完全可以互通的，for迴圈能作到的事while也能做到。所以你已經可以應付所有需要迴圈的情況了喔！


