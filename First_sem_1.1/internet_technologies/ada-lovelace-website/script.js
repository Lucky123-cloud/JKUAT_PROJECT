document.getElementById('questionForm').addEventListener('submit', function (e) {
    e.preventDefault();
    const name = document.getElementById('name').value;
    const question = document.getElementById('question').value;
    const response = document.getElementById('response');
  
    response.innerHTML = `
      <h3>Thank you, ${name}!</h3>
      <p>Your question: "${question}" has been recorded.</p>
    `;
  });