fn main() {
    let num1: i8 = 17;
    let num2: i8 = 17;
    let result = add(num1, num2);
    println!("The result is {}", result);
}

fn add(num1: i8, num2: i8) -> i8 {
    println!("Hello World");
    num1 + num2
}
