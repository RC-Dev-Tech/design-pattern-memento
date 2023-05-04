# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Memento 備忘錄模式  
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
在不破壞封裝的情況下捕獲並存儲對象的內部狀態，以便在以後需要時可以恢復該狀態。

---
<br>

## 使用時機
當需要記錄對象的內部狀態，並且需要在以後的某個時間點恢復狀態時使用。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1APx0dRF6f_GuM0OnkziM2TZ1-QQ6jGaR)
> 圖片來源：[Refactoring.Guru - Memento](https://refactoring.guru/design-patterns/memento)

---
<br>

## 實作成員
* Originator
  * 創建一個包含其當前狀態的Memento對象。
  * 使用Memento對象恢復其狀態。
* Memento
  * 包含Originator對象當前狀態的對象。
  * 提供給Caretaker的API，以便Caretaker可以存儲和恢復Originator的狀態。
* Caretaker
  * 存儲Originator對象的Memento，但不會修改Memento。
  * 可以使用Memento恢復Originator的狀態。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Memento Pattern](https://en.wikipedia.org/wiki/Memento_pattern) <br>
* [Refactoring.Guru - Memento](https://refactoring.guru/design-patterns/memento) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
