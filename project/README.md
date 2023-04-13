# BUDGET TRACKER
#### Video Demo:  <https://www.youtube.com/watch?v=Qpslj1v28dg>
#### Description: Finance Budget Tracker that helps user input budget amount, the name and cost and edit it.
TODO
# About
## My final project is a budget tracker. You can input your expenses to see what all you are spending and what you have remaining to save.

# App.js
## This updates the value so our budget and expenses can get updated.
## This triggers all the components that are connected to your contacts to re-render and recalculate and display all these values. 

# index.js
## This sets up the app.

# AddExpenseForm.js
## Cost is a string.
## onSubmit function is used to submit values.
## “onChange” function is used to change the name and cost.
## event.preventDefault() is used to stop the page from reloading whenever the button is clicked.
## “<form onSubmit={onSubmit}>”is used for whenever the form gets submitted, it calls this function.
## cost: parseInt(cost) is a string
## “uuidv4” - everytime this function is called, it is going to generate a random id. It is generating a new id.
## We have a form, when we type some stuff and click save, the on submit gets called. 

# Budget.js
## This is used to view the budget.

# EditBudget.js
## This is used to edit the amount the user wants its budget to be.

# ExpenseItem.js
## “TiDelete” is used to delete expenses when a user clicks on the delete icon.

# ExpenseList.js
## We are working with a list, so we are using an array. The array is used to list the expenses.
## We are using a string to list expense type and cost.

# ExpenseTotal.js
## “return (total += item.cost)” is going to add up all the costs for us.
## “}, 0);” is used because we have to specify our starting value, which is 0.

# Remaining.js
## In order to calculate the remaining, we need to take the total of all the expenses and subtract it from the budget.
## Use the reduce function to take all the cost from each of the expenses in the expenses array and add all of them together.
## The reduce function takes a function which gives us the total so far and the current item the function is currently on.
## 0 is an extra parameter that we pass to the reduce function, that indicates the starting of value.
## “Alert alert-danger” displays red when spending over budget.
## “Alert alert-success” gives us green when we are within budget. 
## “const alertType” is a variable that holds a conditional to decide where to display the alert success (green) or alert-danger (red).

# ViewBudget.js
## Is used to view and edit the budget.

# AppContext.js
## “Export const AppReducer” - the reducer is used to update the state based on the action.
## “const intialState” - is used to set the initial state when the app loads.
## “export const AppProvider” - creates the context, the thing our components import and use to get the state.
## const [state,dispatch] - is used to set up the app state. It takes a reducer and an initial state.
