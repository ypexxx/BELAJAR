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
    return volume
}
const totalVolume = volumeKubus1(7) + volumeKubus2(11);


// arguments pada javascript
function penjumlahan() {
    let jumlah = 0;
    for( let i=0; i<arguments.length; i++) {
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
    return a * rekursif(a-1);
}

// Fungsi ekspression

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
        return function() {
            console.log("angka lebih besar");
        };
    }
    else {
        return function() {
            console.log("angka lebih kecil");
        };
    }
}