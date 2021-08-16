const body = document.body
const card = document.querySelector('.card')

body.onscroll = () => {
    if (window.scrollY !== 0) {
        card.classList.add('active')
        body.classList.add('active')
    }
    else {
        card.classList.remove('active')
        body.classList.remove('active')
    }
}