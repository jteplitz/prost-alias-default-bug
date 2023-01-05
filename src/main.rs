pub mod protos {
    include!(concat!(env!("OUT_DIR"), "/test.rs"));
}

fn main() {
    println!("Hello, world!");
}
