# ATM-Hesap-Sistemi

Bu C dilinde yazılmış basit bir ATM hesap sistemi örneğidir. Bu program, kullanıcının bakiye sorgulama ve para yatırma işlemlerini gerçekleştirmesine olanak tanır. Ayrıca, kullanıcı 'E', 'e', 'q' veya 'Q' tuşlarına basarak sistemden çıkabilir.

## Kullanım

Programı çalıştırdığınızda, bir menü görüntülenir ve kullanıcı istediği işlemi seçebilir. Menü şu seçenekleri içerir:

1. Bakiye Sorgula
2. Para Yatır
E. Çıkış

Her seçenek, kullanıcıya belirli bir işlem yapma yeteneği sağlar.

## Yapı ve Fonksiyonlar

- `struct ATMHesap`: ATM hesabını temsil eden yapı.
- `menuGoster()`: Kullanıcıya menüyü gösteren fonksiyon.
- `bakiyeSorgula()`: Mevcut bakiyeyi gösteren fonksiyon.
- `paraYatir()`: Para yatırma işlemini gerçekleştiren fonksiyon.

