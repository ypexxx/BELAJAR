// contoh bentuk function
function penjumlahan() {
  let tambah;
  a = 5;
  b = 10;
  tambah = a + b;
  return tambah;
}

// menjumlahkan volume 2 kubus
function volumeKubus1(s) {
  let volume;
  volume = s ** 3;
  return volume;
}
function volumeKubus2(s) {
  let volume;
  volume = s ** 3;
  return volume;
}
const totalVolume = volumeKubus1(7) + volumeKubus2(11);

// arguments pada javascript
function penjumlahan() {
  let jumlah = 0;
  for (let i = 0; i < arguments.length; i++) {
    jumlah += arguments[i];
  }
  return jumlah;
}

// refactoring
function penjumlahan2(a, b, c) {
  return a * b + c;
}

// rekursif
function rekursif(a) {
  if (a === 0) {
    return 1;
  }
  return a * rekursif(a - 1);
}

// Fungsi ekspression
const fungsiExpressions = function (a) {
  return a * a;
};
const expressions2 = Function("a", "b", "return a * b");

// Function sebagai argument function lain
function duaKali(dua) {
  dua();
  dua();
}

function lemparDadu() {
  const hasil = Math.floor(Math.random() * 6) + 1;
  console.log(hasil);
}

// Function mengembalikan nilai function
function functionMengembalikanfunction() {
  const angkaRandom = Math.random();
  if (angkaRandom > 0.5) {
    return function () {
      console.log("angka lebih besar");
    };
  } else {
    return function () {
      console.log("angka lebih kecil");
    };
  }
}

// Object
const myObject = {
  firstName: "yuafiq",
  lastName: "Alfin",
  fullName: function () {
    return this.firstName + " " + this.lastName;
  },
};

// Javascript call()
const person = {
  fullName: function (alamat, kota) {
    return this.firstName + " " + this.lastName + " ," + alamat + " ," + kota;
  },
};
const person1 = {
  firstName: "Yuafiq",
  lastName: "Alfin",
  hobi: "Basket",
};
const person2 = {
  firstName: "Satria",
  lastName: "Hadi",
};

// Object mutable
const objectMutable = {
  namaDepan: "Yuafiq",
  namaBelakang: "Alfin",
  alamat: "Sleman",
  namaAlamat: function () {
    return this.namaDepan + " " + this.alamat;
  },
};
const x = objectMutable;
objectMutable.kota = "Yogyakarta";
x.alamat = "Magelang";
console.log(
  "nama saya " +
    objectMutable.namaDepan +
    ", alamat saya " +
    " " +
    objectMutable.alamat +
    objectMutable.namaAlamat() +
    " " +
    objectMutable.kota
);

// for...in loop
for (let b in objectMutable) {
  console.log(objectMutable[b]);
}

// JS Object and Array
const dataDiri = {
  nama: "Yuafiq Alfin",
  kendaraan: [
    { jenis: "motor", merek: ["vario", "beat", "supra"] },
    { jenis: "mobil", merek: ["avanza", "fortuner", "pajero"] },
    { jenis: "pesawat", merek: ["garuda", "citilink", "lion"] },
  ],
};
let aa = "";
function printDataDiri () {
  for (let c in dataDiri.kendaraan) {
    aa += "<h2>" + dataDiri.kendaraan[c].jenis + "</h2>";
    for (let d in dataDiri.kendaraan[c].merek) {
      aa += dataDiri.kendaraan[c].merek[d] + "<br>";
    }
  }
};
console.log(printDataDiri());

// object literal
const mahasiswa = {
  nama : "Yuafiq Alfin",
  NIM : "23.11.5596",
  data : function() {
    return "nama anda adalah" + this.nama + "dan nim anda" + this.NIM;
  }
}

// object function declaration
function objectFunction(nama, NIM) {
  let objectMHS = {};
  objectMHS.nama = nama;
  objectMHS.NIM = NIM;
  objectMHS.data = function() {
    return "nama anda " + this.nama + " nim anda " + this.NIM
  };
  return objectMHS.data();
}
const agus = objectFunction("agus", 6464);

//constructor function 
function construct(nama, umur) {
  this.nama = nama;
  this.umur = umur;
  this.data = function() {
    return this.nama + this.umur;
  }
  return this.data();
}
let dika = construct("dika", 20);

// object.create()
const methodMahasiswa = {
  makan : function(porsi) {
    this.energi += porsi;
    console.log("Halo" + this.nama + "selamat makan");
  },
  main : function(jam) {
    this.energi -= jam;
    console.log("Halo" + this.nama + "selamat bermain");
  },
  tidur : function(jam) {
    this.energi += jam * 2;
    console.log("Halo" + this.nama + "selamat tidur");
  }
};

function Mhs(nama, energi) {
  let mahasiswa = Object.create(methodMahasiswa);
  mahasiswa.nama = nama;
  mahasiswa.energi = energi;

  return mahasiswa;
}
let yuapik = Mhs("Yuafiq Alfin", 20);
let budi = Mhs("Budi", 10);

// prototype
function tabungan(nama, totalTabungan) {
  this.nama = nama;
  this.totalTabungan = totalTabungan;
}
tabungan.prototype.menabung = function(uang) {
  this.totalTabungan += uang;
  console.log("total tabungan = " + this.totalTabungan);
}
let ypex = new tabungan("yuafiq", 1000);

// class
class tabungan2 {
  constructor(nama, totalTabungan) {
    this.nama = nama;
    this.totalTabungan = totalTabungan;
  }

  menabung(uang) {
    this.totalTabungan += uang;
    console.log("total tabungan = " + this.totalTabungan);
  }
}

// closure
function ucapkanSalam(waktu) {
  return function(nama) {
    console.log("selamat datang " + nama + " dan selamat " + waktu + " semoga harimu menyenangkan");
  }
}
let selamatPagi = ucapkanSalam('pagi');
let selamatSiang = ucapkanSalam('siang');
let selamatMalam = ucapkanSalam('malam');
selamatPagi("user a");
selamatSiang("user b");
selamatMalam("user c");

let add = (function() {
  let counter = 0;
  return function() {
    return ++counter;
  }
})();
console.log(add());
console.log(add());
console.log(add());