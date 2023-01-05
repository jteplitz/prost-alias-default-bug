# Prost allow_alias and default value bug

Minimal reproduction of a bug between default values and enum aliases in prost.

See src/enum.proto for the protobuf. C++ output from protoc is in `cpp_out` for reference. 

`cargo build` should throw an error during protobuf rust generation.
