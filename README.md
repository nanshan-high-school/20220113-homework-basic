# 20220113 上課練習與寒假作業

## 上課練習：Discord 登入系統基礎版（discord-basic.cpp）

請撰寫一個程式，在輸入正確的帳號密碼時顯示歡迎訊息。
如果帳密錯誤，請讓使用者可以重新輸入。

歡迎訊息因為我們還沒有教 **隨機** 怎麼寫，所以可以固定一種歡迎訊息即可。

程式中請使用二維陣列紀錄使用者的帳號，三個欄位分別為：

1. ID
2. 密碼
3. 姓名

在基礎版的登入系統裡，這三種資訊是直接寫在 code 裡的。
意即，請直接預設幾個帳號、密碼、姓名在程式碼中。

![](https://i.imgur.com/TWlCKK4.jpg)

### 輸入說明
輸入預先設定於程式碼中的帳號與密碼組。

### 輸出說明
如果帳密正確，顯示名稱與歡迎詞。
如果帳密錯誤，**請讓使用者可以重新輸入**。

### 帳密正確範例
（假設使用者姓名為小克）

```
帳號：goodjack
密碼：Goodjack-Is-Handsome!

歡迎，小克。我們希望您帶個披薩來。
```

### 帳密錯誤範例

```
帳號：goodjack
密碼：Goodjack-Is-Not-Handsome:(

帳號密碼錯誤，請重新輸入。
```

---

# 寒假作業：Discord 登入系統進階版（discord-pro.cpp）

請撰寫一個程式，具有兩個功能：註冊、登入、修改密碼。
請在程式開始時詢問使用者想要使用哪個功能。

💡 **提示一**
可以用一個 `while(true)` 把整個程式邏輯包起來，就可以一直在結束操作功能後，回到程式的開始。

💡 **提示二**
要思考一下使用者陣列的宣告要放在哪裡

以下針對三個功能做說明。

## 功能說明

### 功能一：註冊

此系統一共可以容納 100 個使用者註冊。
請讓使用者輸入想要的帳號、密碼，儲存到登入系統中。

💡 提示：可以直接宣告一個大小為 100 的陣列

**⚠️ 注意：若有已存在的 ID 就不能註冊。**


程式中請使用二維陣列紀錄使用者的帳號，三個欄位分別為：

1. ID
2. 密碼
3. 姓名

### 功能二：登入

此部分除了登入資訊是從註冊功能來的以外，其餘 **與基礎版相同**。


### 功能三：修改密碼

輸入正確的 ID 與密碼後，讓使用者可以輸入新密碼。
設定完成後，以後都要用新密碼登入。

## 範例

### 1. 程式開始畫面

（冒號後面為使用者輸入內容）

```
歡迎來到 Discord！

1. 註冊
2. 登入
3. 修改密碼

請輸入想要執行的功能：1
```

### 2. 功能一：註冊成功範例

（冒號後面為使用者輸入內容）

```
帳號：goodjack
密碼：Goodjack-Is-Handsome!
姓名：小克

註冊成功！
```

此時重新回到系統開始畫面

### 3. 功能一：註冊失敗範例

（冒號後面為使用者輸入內容）

```
帳號：goodjack

已經有相同的使用者帳號了。
```

此時重新回到系統開始畫面

### 4. 功能二：登入帳密正確範例

（假設使用者姓名為小克，冒號後面為使用者輸入內容）

```
帳號：goodjack
密碼：Goodjack-Is-Handsome!

歡迎，小克。我們希望您帶個披薩來。
```

此時重新回到系統開始畫面

### 5. 功能二：登入帳密錯誤範例

（冒號後面為使用者輸入內容）

```
帳號：goodjack
密碼：Goodjack-Is-Not-Handsome:(

帳號密碼錯誤，請重新輸入。
```

此時重新回到系統開始畫面

### 6. 功能三：修改密碼成功範例

（冒號後面為使用者輸入內容）

```
帳號：goodjack
舊密碼：Goodjack-Is-Handsome!
新密碼：Goodjack-Is-So-Handsome!

修改完成，此後請使用新密碼登入。
```

此時重新回到系統開始畫面

### 7. 功能三：修改密碼失敗範例

```
帳號：goodjack
密碼：Goodjack-Is-Not-Handsome:(

帳號密碼錯誤，請重新輸入。
```

此時重新回到系統開始畫面

---

Pull Request 前請確認以下事項：

* 已閱讀 [作業繳交方式](https://hackmd.io/@nssh/nscsc/%2F%40nssh%2Fsummit-homework)
* 在下方附上 Repl 連結
* 檔案放在自己學號的目錄下
* 標題以「班級座號、學號、姓名」作為開頭
* 其他說明事項可以在下面補充
