/* ELEMENTS */
const pills = document.querySelectorAll(".pill");
const indicator = document.querySelector(".pill-indicator");
const highlightText = document.querySelector(".hero h1 span");

let typingTimeout;

/* PURE TYPING EFFECT (NO GLITCH) */
function typeText(text) {
  clearTimeout(typingTimeout);
  highlightText.innerText = "";

  let i = 0;

  function type() {
    if (i < text.length) {
      highlightText.innerText += text.charAt(i);
      i++;
      typingTimeout = setTimeout(type, 65);
    }
  }

  type();
}

/* PILL INTERACTION */
pills.forEach((pill, index) => {
  pill.addEventListener("click", () => {
    // Active pill state
    pills.forEach(p => p.classList.remove("active"));
    pill.classList.add("active");

    // Slide indicator
    indicator.style.transform = `translateX(${index * 100}%)`;

    // Typing text change
    if (pill.innerText.toLowerCase().includes("system")) {
      typeText("{SYSTEM  DESIGN}");
    } else {
      typeText("{CODING}");
    }
  });
});

/* HAMBURGER MENU */
const hamburger = document.getElementById("hamburger");
const navLinks = document.getElementById("navLinks");

hamburger.addEventListener("click", () => {
  navLinks.classList.toggle("active");
  hamburger.classList.toggle("active");
});
