// Contoh alert selamat datang
alert('Selamat datang...');
var lagi = true;

while(lagi === true) {
    var nama = prompt('masukkan nama: ');
    alert('halo ' + nama);

    lagi = confirm('coba lagi?');
}
alert('terima kasih...');

// Variabel Const 
const namaMobil = ["avanza", "xenia", "alphard"];
namaMobil[0] = "rush";

namaMobil.push("terios");

document.getElementById("carName").innerHTML = namaMobil;

const namaTeman = {nama:"yua", rumah:"jumeneng"};

namaTeman.hobi = "Sepak bola";

document.getElementById("carNama").innerHTML = namaTeman.nama + " " + namaTeman.hobi;

let text1 = "Sekarang hari ";
text1 += "Kamis";

document.getElementById("carJeneng").innerHTML = text1;
