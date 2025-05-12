
# Sudoku Uygulaması

Bu proje, kullanıcıların Sudoku oyununu çözebileceği bir konsol uygulamasıdır. Kullanıcı, zorluk seviyesini seçerek (Kolay, Orta, Zor) Sudoku tahtası üzerinde görevleri tamamlayacak ve kurallara uygun çözüm elde etmeye çalışacaktır.

## Özellikler

- Kolay, orta ve zor seviyelerde Sudoku tahtası oluşturma.
- Kullanıcı, her bir hücreyi kurallara uygun şekilde doldurabilir.
- Sudoku kurallarına göre geçerli olan sayılarla oynanabilir.
- Kullanıcı, yanlış sayılar girerse hata mesajı alacak.
- Oyun bittiğinde, doğru çözüm gösterilecektir.

## Gereksinimler

- .NET Framework 4.7.2 veya daha yüksek sürüm
- Visual Studio veya benzer bir IDE

## Kurulum

1. **Proje dosyasını klonlayın veya indirin:**

   ```bash
   git clone https://github.com/KullaniciAdiniz/Sudoku.git
   ```

2. **Visual Studio ile projeyi açın.**

   - Projeyi Visual Studio veya bir IDE ile açın.
   - `Sudoku.sln` dosyasını açarak projeyi çalıştırabilirsiniz.

3. **Gerekli paketleri yükleyin:**
   
   Uygulama için herhangi bir NuGet paketine ihtiyaç yoktur, ancak `.NET Framework` 4.7.2 yüklü olmalıdır.

4. **Uygulamayı Çalıştırın:**
   - Projeyi çalıştırarak Sudoku tahtasında oyun oynayabilirsiniz.

## Kullanım

1. Uygulama başladığında, kullanıcıya zorluk seviyesi (Kolay, Orta, Zor) sorulacaktır.
2. Seçilen zorluk seviyesine göre Sudoku tahtası oluşturulur ve ekranda gösterilir.
3. Kullanıcı, satır ve sütun bilgisi girerek sayıları yerleştirebilir.
4. Sudoku tahtası tamamen doldurulduğunda, doğru çözüm ekranda gösterilecektir.

### Örnek Kullanım:

1. **Zorluk Seviyesi Seçimi:**
   - Kullanıcı, başlangıçta kolay, orta veya zor zorluk seviyelerinden birini seçer.
   - Seçilen seviyeye göre Sudoku tahtası oluşturulur.

2. **Görev Ekleme ve Sudoku Oynama:**
   - Kullanıcı, her hücreye uygun sayıları yerleştirerek Sudoku'yu çözmeye çalışır.
   - Uygulama, doğru çözüm elde edilene kadar kullanıcıya doğru sayıları girip girmediğini kontrol eder.

**Konsol Çıktısı:**
```
Welcome to the Sudoku Game!

Please select a difficulty level:
1. Easy
2. Medium
3. Hard

Select difficulty (1-3): 1

Sudoku Board (Easy Level):

 5 3 0 | 0 7 0 | 0 0 0
 6 0 0 | 1 9 5 | 0 0 0
 0 9 8 | 0 0 0 | 0 6 0
 ---------------------
 8 0 0 | 0 6 0 | 0 0 3
 4 0 0 | 8 0 3 | 0 0 1
 7 0 0 | 0 2 0 | 0 0 6
 ---------------------
 0 6 0 | 0 0 0 | 2 8 0
 0 0 0 | 4 1 9 | 0 0 5
 0 0 0 | 0 8 0 | 0 7 9

Enter the row (1-9): 1
Enter the column (1-9): 3
Enter the number (1-9): 4

Updated Board:

 5 3 4 | 6 7 0 | 0 0 0
 6 0 0 | 1 9 5 | 0 0 0
 0 9 8 | 0 0 0 | 0 6 0
 ---------------------
 8 0 0 | 0 6 0 | 0 0 3
 4 0 0 | 8 0 3 | 0 0 1
 7 0 0 | 0 2 0 | 0 0 6
 ---------------------
 0 6 0 | 0 0 0 | 2 8 0
 0 0 0 | 4 1 9 | 0 0 5
 0 0 0 | 0 8 0 | 0 7 9

... (Devam eder)
```

## Katkıda Bulunma

Eğer projeye katkı sağlamak isterseniz, aşağıdaki adımları takip edebilirsiniz:

1. Bu projeyi fork edin.
2. Yeni bir feature branch oluşturun.
3. Değişikliklerinizi yapın ve commit edin.
4. Pull request gönderin.

## Lisans

Bu proje **MIT Lisansı** ile lisanslanmıştır. Daha fazla bilgi için [LICENSE](LICENSE) dosyasına bakabilirsiniz.

---

## Ekstra Notlar

- Bu uygulama sadece temel bir Sudoku çözme işlevselliği sunmaktadır. İlerleyen sürümlerde, kullanıcıların Sudoku tahtasını sıfırlama, ipuçları alma gibi özellikler eklenebilir.
