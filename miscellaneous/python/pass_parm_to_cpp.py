import subprocess

def run_cpp_program(arg1, arg2, arg3, arg4):
    try:
        result = subprocess.run(
            ['/<your-path-to-cpp-code>/a.out', arg1, arg2, arg3, arg4],
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True
        )
        print("Output from C++ program:")
        print(result.stdout)
    except subprocess.CalledProcessError as e:
        print("Error running C++ program:")
        print(e.stderr)

if __name__ == "__main__":
    # Example arguments
    insv1 = "Hello"
    insv2 = "World"
    insv3 = "123"
    output_folder = "/output"
    
    run_cpp_program(insv1, insv2, insv3, output_folder)
