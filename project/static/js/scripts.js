// Show spinner when the form is submitted
document
  .getElementById("compareForm")
  .addEventListener("submit", () => {
    document.getElementById("spinner").style.display = "block";
    document.getElementById("nonce").value = Date.now();
  });


// When “New Comparison” is clicked, navigate back to the main form
document
  .getElementById("newComparisonBtn")
  .addEventListener("click", () => {
    window.location.href = "/";
  });


  // On index page load, reset forms
window.addEventListener("DOMContentLoaded", () => {
  const form = document.getElementById("compareForm");
  if (form) {
    form.reset();
  }
});

