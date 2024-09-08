# Meal Billing System

This **Meal Billing System** is designed for H&S Restaurant to automate the process of billing customers, tracking meal orders, and generating daily sales reports. The system is written in **C++** and provides a user-friendly interface to handle various tasks such as meal ordering, billing, and feedback collection.

## Features
- **Order Placement**: Easily place orders by entering meal codes (case insensitive).
- **Order Modification**: Modify or delete meals from the order.
- **Delivery Option**: Apply a delivery fee when the customer opts for delivery.
- **Billing**: The system calculates the total price, including SST (Service and Sales Tax).
- **Payment**: Customers can pay via cash or card.
- **Feedback Collection**: After the order, customers can rate their experience and leave comments.
- **Daily Sales Report**: Generates a daily report including total sales, customer feedback, and comments.

## How to Run

### Prerequisites
- C++ compiler (GCC, MinGW, Visual Studio, etc.)
- Basic knowledge of CLI (Command-Line Interface)

### Running the Program

1. **Clone or Download the Repository**:
   - Clone the repository:
     ```bash
     git clone <repository_url>
     ```
   - Or download the source files.

2. **Compile the Program**:
   - Using g++ or any other C++ compiler, run:
     ```bash
     g++ -o MealBillingSystem main.cpp
     ```

3. **Run the Executable**:
   - After compiling, run the program:
     ```bash
     ./MealBillingSystem
     ```

4. **Follow the Instructions**:
   - Enter meal codes to place orders (e.g., `N` for noodles, `M` for meat).
   - To delete a meal, enter `X` when prompted.
   - Choose between cash (`C`) or card (`D`) for payment.
   - After payment, you can provide feedback by rating your experience.

### Example Commands:
- **Placing an order**: Enter the meal code (e.g., `N`, `C`, `M`, `H`, `F`).
- **Modifying an order**: Enter `X` to modify the meal list.
- **Payment**: Select `S` for cash or `R` for card.

### Customize Meals and Prices:
- You can modify the available meals and their prices by editing the relevant arrays and variables in the source code before compiling.

## Daily Report
At the end of the day, the system generates a daily sales report, which includes:
- Total sales
- Customer feedback
- Customer comments

---
 
**Author**: Elisha Tiong Pei Pei 
**Date**: 21/9/2023
