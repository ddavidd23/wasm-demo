# C++ WebAssembly Demo

## Build

```bash
emcc main.cpp -o main.js -s EXPORTED_FUNCTIONS="['_f', '_increment']"
```

## Run

```bash
python3 -m http.server 8080
```

Open http://localhost:8080
