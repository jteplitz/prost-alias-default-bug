fn main() -> Result<(), Box<dyn std::error::Error>> {
    prost_build::compile_protos(&["./src/enum.proto"], &["."])?;
    Ok(())
}
