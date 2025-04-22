const form = document.getElementById('expense-form');
const descriptionInput = document.getElementById('description');
const amountInput = document.getElementById('amount');
const expenseList = document.getElementById('expense-list');
const totalDisplay = document.getElementById('total');

let total = 0;

form.addEventListener('submit', function (e) {
  e.preventDefault();

  const description = descriptionInput.value;
  const amount = parseFloat(amountInput.value);

  if (!description || !amount) return;

  addExpense(description, amount);
  updateTotal(amount);

  descriptionInput.value = '';
  amountInput.value = '';
});

function addExpense(description, amount) {
  const li = document.createElement('li');
  li.textContent = `${description}: KES ${amount}`;
  expenseList.appendChild(li);
}

function updateTotal(amount) {
  total += amount;
  totalDisplay.textContent = total.toFixed(2);
}
