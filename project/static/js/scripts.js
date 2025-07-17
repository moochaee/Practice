// Show spinner when the form is submitted
document
  .getElementById("compareForm")
  .addEventListener("submit", () => {
    document.getElementById("spinner").style.display = "block";
  });

// When “New Comparison” is clicked, navigate back to the main form
document
  .getElementById("newComparisonBtn")
  .addEventListener("click", () => {
    window.location.href = "/";
  });
