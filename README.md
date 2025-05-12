
# Sudoku Uygulaması

Bu proje, kullanıcıların Sudoku çözmelerini sağlayan bir uygulamadır. Kullanıcılar, kolay, orta ve zor seviyelerde Sudoku tahtalarıyla karşılaşacak ve her seviyede verilen hücrelere sayılar ekleyerek, kurallara uygun şekilde Sudoku'yu çözmeye çalışacaklardır.

## Özellikler

- Kolay, orta ve zor seviyelerde Sudoku tahtası oluşturma.
- Kullanıcı, herhangi bir gün için görev ekleyebilir.
- Kullanıcı her bir gün için tek tek görev girebilir ve takvim dinamik olarak güncellenir.
- Eğer bir gün için görev girilmemişse, o gün "No Task" olarak görünür.
- Sudoku kurallarına göre geçerli olan sayılarla oynanabilir.

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
   - Projeyi çalıştırarak uygulamanın konsol ekranında Sudoku tahtasında oyun oynayabilirsiniz.

## Kullanım

1. Uygulama başladığında, kullanıcıya zorluk seviyesi (Kolay, Orta, Zor) sorulacaktır.
2. Seçilen zorluk seviyesine göre Sudoku tahtası oluşturulur ve ekranda gösterilir.
3. Kullanıcı, satır ve sütun bilgisi girerek sayıları yerleştirebilir.
4. Sudoku tahtası tamamen doldurulduğunda, doğru çözüm ekranda gösterilecektir.

### Örnek Kullanım:

```bash
Please enter task for Monday: 
Task 1
Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday
----------------------------------------------------------------------
  Task 1  |   No Task   |    No Task    |   No Task    |   No Task  |   No Task    |  No Task   |

Which day would you like to assign a task to?
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
8. Exit
Select a day (1-8): 2
Please enter task for Tuesday: 
Task 2

Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday
----------------------------------------------------------------------
  Task 1  |   Task 2   |    No Task    |   No Task    |   No Task  |   No Task    |  No Task   |

...
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
