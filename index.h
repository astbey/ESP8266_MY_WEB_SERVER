
const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="tr" style="background-color:white">
<head>
<title>Abdulsamet TUTUŞ</title>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
ul {
    list-style-type: none;
    margin: 0;
    padding: 0;
    overflow: hidden;
    background-color: #333333;//menu arkası
}

li {
    float: left;
}
le {
    float: right;
}

li a {
    display: block;
    color: white;
    text-align: center;
    padding: 16px;
    text-decoration: none;
}
le c {
    display: block;
    color: white;
    text-align: center;
    padding: 16px;
    text-decoration: none;
}

li a:hover {
    background-color: #111111;//menu seçimi
}
le c:hover {
    background-color: #222222;//menu seçimi
}
</style>
</head>
<body>




<ul>
  <li><a href="javascript:void(0)" onclick="changeMenu('home')">Anasayfa</a></li>
  <li><a href="javascript:void(0)" onclick="changeMenu('news')">Haberler</a></li>
  <li><a href="javascript:void(0)" onclick="changeMenu('contact')">Bağlantı</a></li>
  <li><a href="javascript:void(0)" onclick="changeMenu('about')">Hakkımda</a></li>
<li><a href="javascript:void(0)" onclick="changeMenu('referance')">Referans</a></li>
 
</ul>
<style>
* {
    box-sizing: border-box;
}

body {
    font-family: Arial, Helvetica, sans-serif;
}

/* www kısmı */
header {
    background-color: #999;
    padding: 30px;
    text-align: center;
    font-size: 35px;
    color: white;
}

/* yanmenu  */
nav {
    float: left;
    width: 20%;
    height: 900px; /* only for demonstration, should be removed */
    background: #555;
    padding: 25px;
}

/* Style the list inside the menu */
nav ul {
    list-style-type: none;
    padding: 0;
}

article {
    float: left;
    padding: 20px;
    width: 80%;
    background-color: #f1f1f1;
    height: 900px; /* orta yazıların olugu yer */
}

/* Clear floats after the columns */
section:after {
    content: "";
    display: table;
    clear: both;
}

/* Style the footer */
footer {
    background-color: #777;
    padding: 10px;
    text-align: center;
    color: white;
}
foote {
    background-color: #777;
    padding: 0px;
    text-align: center;
    color: white;
}


/* Responsive layout - makes the two columns/boxes stack on top of each other instead of next to each other, on small screens */
@media (max-width: 600px) {
    nav, article {
        width: 100%;
        height: auto;
    }
}






@import url(https://fonts.googleapis.com/css?family=Raleway:400,700);

img {
  width: 20%;
  float: left;
  margin: 1.66%;
}



@media screen and (max-width: 720px) {
    img {
      width: 40%;
    }
}

/*@media screen and (max-width: 640px) {
    img {
      width: 35%;
    }
}*/

@media screen and (max-width: 480px) {
    img {
      width: 80%;
    }
}

/*@media screen and (max-width: 320px) {
    img {
      width: 90%;
    }
}*/
</style>
</head>
<body style="margin:0px">



<header>
<ul>
  <h2>Abdulsamet TUTUŞ</h2>
  </ul>
</header>

<section>
  <nav>
    <ul>
      <li><a href="#">Emrolduğun gibi dosdoğru ol...     </a></li>
    
    </ul>
    
    </br>
   <ul>
      <li><a href="#">Aslanlar kendi hikayelerini yazmadıkça, avcıların palavralarını dinlemeye mahkumdur.</a></li>
    
    </ul>
   </br>
   <ul>
      <li><a href="#">Bayrakları bayrak yapan üstündeki kandır. Toprak uğrunda ölen varsa VATANDIR.</a></li>
      
    </ul>
  </br>
  <ul>
      <li><a href="#">Ye's öyle bir bataktır ki,</br>Düşersen boğulursun</br>Azmine sarıl sımsıkı</br>Bak ne olursun</br>Mehmet Akif Ersoy</a></li>
    
    </ul>
  </nav>
  
  
  
  
  <article id="home">
  <foote style="text-align:left" >
<ul >

  <le><c href="javascript:void(0)" onclick="changeMenu('12')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('3')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('2')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('1')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('12')"><<</c></le>
 

  <p ><b><big>&emsp;ANASAYFA </big></b></p>
</ul>
</foote>
    <h1>VİZYONUM</h1>
    <p>Türkiye Cumhuriyeti geçmişi ve geleceği ile diğer dünya ülkelerinden farklıdır. Bunun nedeni ise geçmişte ve bu gün olduğu gibi kıymetli olmasıdır. Bunu defalarca kanıtladık gereken yerde gerekli şekilde de kanıtlamaya hazırız.</p>
    <p>Bu kadar değerli ve diğer ülkelerden ayıran özelliğin kesinlikle bizim kültürümüz ve sahiplik duygumuzdan kaynaklandığı kanaatindeyim.</p>
    <p>Bende bu topraklardan var olan bir varlık olmam neticesinde vatan sevgisi bir başkadır bende, işte bu yüzden çıktığımız yolda bizde bilgimizle bu ülkenin bayraktarlığını yapacak ve bize yüklenen bu yükü seve seve çekeceğiz</p>
    <p>"HERŞEY BÜYÜK GÜZEL TÜRKİYE İÇİN"</p>
    </br>
    <h1>MİSYONUM</h1>
    <p>Öncelikle "HERŞEYİN EN İYİSİ" düşüncesiyle çıktığım yolda en iyisi için gece gündüz demeden çalışıyorum. Bu gün hedefe yakınım yarın daha da yakın olacağım belki ulaşamayağım ama ne gerkiyorsa yapacağım..</p>
     <p>Elektronik ve yazılım teknolojisinde dünyada geniş kapsamlı bir büyüme var. Bu güne kadar geç kalan bizler bir gün belki daha ilerde olacağız bu da çalışmakla olacaktır.</p>

   
</article >  




  <article style="display:none"  id="home1">
  <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('12')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('3')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('2')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('1')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('12')"><<</c></le>
 

  <p ><b><big>&emsp;ANASAYFA </big></b></p>
</ul>
</foote>
    <h1>VİZYONUM1</h1>
</article> 




</article >  
  <article style="display:none"  id="home2">
  <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('12')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('3')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('2')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('1')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('12')"><<</c></le>
 

  <p ><b><big>&emsp;ANASAYFA </big></b></p>
</ul>
</foote>
    <h1>VİZYONUM2</h1>
</article> 

 


 <article style="display:none" id="news">
 
  <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('13')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('6')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('5')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('4')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('13')"><<</c></le>
 

  <p ><b><big>&emsp;HABERLER </big></b></p>
</ul>
</foote>

  <h1>ESP8266 nodeMCU LUA v3</h1>
    <p>Şu anda kullanmakta olduğunuz web sitesi ESP8266 nodeMCU LUA v3 tabanlı WEB SERVER özelliği kullanılarak gerçekleştirilimiştir.</p>
    <p>"HERKESE BİR SERVER" sloganıyla başlatığım bu proje ile kullanmakta olduğumuz  ESP8266 nodeMCU LUA v3 kartı ile neler yapılabileceği ile ilgili çalışmamızın bir parçasıdır.</p>
    <p>Gelecekte hayatımıza girecek olan şu an ENDÜSTRİ 4.0 olarak adlandırdığımız mekanizmanın IOT sistemlerinin temellerinin bu kartla atılabileceği kanısıyla çalışmalarımız devam etmektedir.</p>
    <p>Bizi takipte kalın...</p>
    </br>
    
    <h1>ATtinny 85 LEARN BORD</h1>
    <p>Atmel firması tarafından üretilen ve Digispark geliştirici firması tarafından Digisump kartı üretilen bort için öğrenme projesi kapsamında yürütüğümüz çalışmalar tüm hızıyla devam etmektedir. Learn bord bir çok kısmı hazır olup prototip için gün saymaktayız.</p>
    <p>Daha önce robotistan tarafından üretilip ve adı tinlab olan ürünün desteklemesi ve isim benzerliğinden dolayı ismi TİNYlab olan projemizin prototip kısmı bittikten sonra piyasaya girmek için çeşitli çalımalar yürüteceğiz.</p>
    <p>Bizi takipte kalın...</p>
    
    </br>
    <h1>YERLİ GELİŞTİRME KARTI</h1>
    <p>Ülkemizde son dönemlerde dış güçler tarafından uygulanan ambargolar bizi kötü etkilediyse de biraz sirkilip kendimize gelme imkanı sağlamıştır. Yabancı menşei ürünün olduğu ülkemizde zor durumda kalmamak iiçin yerli üretime destek arttı.  </p>
    <p>Bende bu konuya kayıtsız kalamadım ve neden ülkemizin bir geliştirme kartı olmasın fikriyle yola çıkarak ATMEL firması tarafından üretilen yonga için geliştirme kartı yapmaya karar verdim konu halen AR-GE aşamasında olmasına rağmen ziyadesinden  fazla destek umut verici.</p>
    <p>önümüzdeki günlerde gelişmelerden haberdar olursunuz</p>
    <p>Bizi takipte kalın...</p>
 </article>
  
 <article style="display:none" id="news1">
 
  <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('13')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('6')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('5')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('4')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('13')"><<</c></le>
 

  <p ><b><big>&emsp;HABERLER </big></b></p>
</ul>
</foote>

  <h1>ESP8266 nodeMCU LUA v3 2</h1>
    
 </article>
  

   <article style="display:none" id="news2">
 
  <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('13')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('6')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('5')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('4')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('13')"><<</c></le>
 

  <p ><b><big>&emsp;HABERLER </big></b></p>
</ul>
</foote>

  <h1>ESP8266 nodeMCU LUA v3 3</h1>
    
 </article>
  

  
  
  
  <article style="display:none" id="contact">
  
   <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('15')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('7')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('15')"><<</c></le>
 

  <p ><b><big>&emsp;BAĞLANTI</big></b></p>
</ul>
</foote>

  </br></br></br></br></br> </br></br></br></br></br>
  <h5 style="text-align:center";>Elektrik & Elektronik Mühendisi</h5>
  <h1 style="text-align:center";>Abdulsamet TUTUŞ</h1>
  </br></br></br></br></br></br></br></br></br></br>
  <p style="text-align:center";>Yıldız Teknik Üniversitesi Davutpaşa yerleşkesi Teknopark C108 Esenler/İSTANBUL </p>
  <p style="text-align:center";>+90(551) 189 21 75</p>
  <p style="text-align:center";>abdulsamettutus@gmail.com</p>
  <p style="text-align:center";>www.abdulsamettutus.com</p>
  </article>
  
  

  
  <article style="display:none" id="about">
  
   <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('16')">>></c></le>
  
  <le><c href="javascript:void(0)" onclick="changeMenu('8')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('16')"><<</c></le>
 

  <p ><b><big>&emsp;HAKKIMDA </big></b></p>
</ul>
</foote>

  </br></br></br>
    <h1  style="text-align:center";>ÖZGEÇMİŞİM</h1>
  </br></br>
  <p style="text-align:center";>10.15.1992 yılında Şanlıurfa ilimizin Suruç ilçesi Karahöyük köyünde dünyaya geldim. Kısa bir süre sonra Suruç ilçesine taşındık. Çocukluk yıllarım Suruç ilçesinde yaz ayları ise köyümde geçti.</p>
  <p style="text-align:center";>ilk ve orta öğrenimimin bir kısmını Suruç ilçesinde FSM ilkokulunda geçirdim daha sonra 2005 yılında Gaziantep iline taşınamamız nedeniyle orta öğrenimin kalan kısmını Aydınlar ilkokulu ve Zekeriye KONUKOĞLU ilk okulunda aldım.</p>
<p style="text-align:center";>Lise eğitimini Hacı Sani KONUKOĞLU lisesinde aldktan sonra 2012 yılında Osmaniye Korkut Ata üniversitesi Elektrik Elektronik Mühendisliğni kazandım. Buradaki eğitimimi 2017 yılında tamamladım. </p>
<p style="text-align:center";>Çalışma hayatını elektronik kart tasarımı ve elektronik yazılım geliştirme uzmanı olarak sürdürmekteyim...</p>


  </article>
  

  
   <article style="display:none" id="referance">
   
    <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('14')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('11')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('10')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('9')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('14')"><<</c></le>
 

  <p ><b><big> &emsp; REFERANS </big></b></p>
</ul>
</foote>

    <!-- Massimo Margagnoni -->
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41845924_2043689848995199_8263546794382721024_n.jpg?_nc_cat=0&oh=04447aa6ecb138e56ca0436812f38b04&oe=5C228DF3">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41748674_2043689928995191_4961364517452775424_o.jpg?_nc_cat=0&oh=8e344c6946e425540ccbd37177c77ccb&oe=5C36682C">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41699767_2043690022328515_6227419931697217536_n.jpg?_nc_cat=0&oh=26fa95a2a35815a39fd0990b3d522f9f&oe=5C192817">

    <!-- Giuseppe Milo -->
    <img src="https://disk.yandex.com.tr/client/disk?display=normal&groupBy=none&order=1&sort=name&view=tile&wasAsideAnimated=false&typeClustering=geo&action=null&idAlbum=undefined&idApp=client&dialog=slider&idDialog=%2Fdisk%2FASD.jpg">
    <img src="http://c2.staticflickr.com/6/5814/20700286354_762c19bd3b_b.jpg">
    <img src="http://c2.staticflickr.com/6/5647/21137202535_404bf25729_b.jpg">

    <!-- GörlitzPhotography -->
    <img src="http://c2.staticflickr.com/6/5588/14991687545_5c8e1a2e86_b.jpg">
    <img src="http://c2.staticflickr.com/4/3888/14878097108_5997041006_b.jpg">



  </article>
  
   <article style="display:none" id="referance1">
   
    <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('14')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('11')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('10')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('9')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('14')"><<</c></le>
 

  <p ><b><big> &emsp; REFERANS </big></b></p>
</ul>
</foote>

    <!-- Massimo Margagnoni -->
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41845924_2043689848995199_8263546794382721024_n.jpg?_nc_cat=0&oh=04447aa6ecb138e56ca0436812f38b04&oe=5C228DF3">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41748674_2043689928995191_4961364517452775424_o.jpg?_nc_cat=0&oh=8e344c6946e425540ccbd37177c77ccb&oe=5C36682C">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41699767_2043690022328515_6227419931697217536_n.jpg?_nc_cat=0&oh=26fa95a2a35815a39fd0990b3d522f9f&oe=5C192817">

    <!-- Giuseppe Milo -->
    <img src="https://disk.yandex.com.tr/client/disk?display=normal&groupBy=none&order=1&sort=name&view=tile&wasAsideAnimated=false&typeClustering=geo&action=null&idAlbum=undefined&idApp=client&dialog=slider&idDialog=%2Fdisk%2FASD.jpg">
    <img src="http://c2.staticflickr.com/6/5814/20700286354_762c19bd3b_b.jpg">
    <img src="http://c2.staticflickr.com/6/5647/21137202535_404bf25729_b.jpg">

  


  </article>
 <article style="display:none" id="referance2">
   
    <foote style="text-align:left" >
<ul >

 <le><c href="javascript:void(0)" onclick="changeMenu('14')">>></c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('11')">3</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('10')">2</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('9')">1</c></le>
  <le><c href="javascript:void(0)" onclick="changeMenu('14')"><<</c></le>
 

  <p ><b><big> &emsp; REFERANS </big></b></p>
</ul>
</foote>

    <!-- Massimo Margagnoni -->
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41845924_2043689848995199_8263546794382721024_n.jpg?_nc_cat=0&oh=04447aa6ecb138e56ca0436812f38b04&oe=5C228DF3">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41748674_2043689928995191_4961364517452775424_o.jpg?_nc_cat=0&oh=8e344c6946e425540ccbd37177c77ccb&oe=5C36682C">
    <img src="https://scontent-frt3-1.xx.fbcdn.net/v/t1.0-9/41699767_2043690022328515_6227419931697217536_n.jpg?_nc_cat=0&oh=26fa95a2a35815a39fd0990b3d522f9f&oe=5C192817">

  

    



  </article>
  
</section>

<footer style="text-align:right">

  <ul>
 

  <p>sofAST &emsp;</p>
</ul>
</footer>

<script type="text/javascript">
function changeMenu(menu)
{
  document.getElementById('home').style.display='none';
  document.getElementById('news').style.display='none';
  document.getElementById('contact').style.display='none';
  document.getElementById('about').style.display='none';
  document.getElementById('referance').style.display='none';
  document.getElementById('home1').style.display='none';
  document.getElementById('home2').style.display='none';
  document.getElementById('news1').style.display='none';
  document.getElementById('news2').style.display='none';
  document.getElementById('referance1').style.display='none';
  document.getElementById('referance2').style.display='none';
  
console.log('ss')
   if(menu == 'home')
   {
  document.getElementById('home').style.display='block';

   } 
   else if(menu =='news'){
  document.getElementById('news').style.display='block';
   }
    else if(menu =='contact'){
  document.getElementById('contact').style.display='block';
   }
    else if(menu =='about'){
  document.getElementById('about').style.display='block';
   }
    else if(menu =='referance'){
  document.getElementById('referance').style.display='block';
   }
   else if(menu =='1'){
  document.getElementById('home').style.display='block';
   }
    else if(menu =='2'){
  document.getElementById('home1').style.display='block';
   }
   else if(menu =='3'){
  document.getElementById('home2').style.display='block';
  }
   else if(menu =='4'){
  document.getElementById('news').style.display='block';
   }
    else if(menu =='5'){
  document.getElementById('news1').style.display='block';
   }
       else if(menu =='6'){
  document.getElementById('news2').style.display='block';
   }
    else if(menu =='7'){
  document.getElementById('contact').style.display='block';
   }
    else if(menu =='8'){
  document.getElementById('about').style.display='block';
   }
    else if(menu =='9'){
  document.getElementById('referance').style.display='block';
   }
    else if(menu =='10'){
  document.getElementById('referance1').style.display='block';
   }
    else if(menu =='11'){
  document.getElementById('referance2').style.display='block';
   }
    else if(menu =='12'){
  document.getElementById('home').style.display='block';
   }
    else if(menu =='13'){
  document.getElementById('news').style.display='block';
   }
    else if(menu =='14'){
  document.getElementById('referance').style.display='block';
  }
  else if(menu =='15'){
  document.getElementById('contact').style.display='block';
   }
   else if(menu =='16'){
  document.getElementById('about').style.display='block';
  }
   else{}
}
</script>




</body>
</html>
)=====";
