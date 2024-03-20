// Toggle Class active
const navbarNav = document.querySelector ('.navbar-nav');

// Ketika hamburger menu di klik
document.querySelector ('#menu'). onclick = () => {
    navbarNav.classList.toggle ('active');
};

// Menghilangkan menu nav pada tablet
const hamburger = document.querySelector('#menu');

document.addEventListener('click' , function (e) {
    if (!hamburger.contains(e.target) && !navbarNav.contains(e.target)) {
        navbarNav.classList.remove('active');
    }
});