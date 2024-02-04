# DragonsBane

The mini-quest "Dragon's Bane" is supposed to reuse the results from mini-quest
I "Here Be Dragons". Concepts such as classes and objects should be used for
implementing the mini-quest. This mini-quest is implemented in C++ and was
compiled in VS Code. See the [`guide`](doc/lprog_mini-quest-2_dragons-bane.pdf)
for more information about the mini-quest.

Only the common part of the mini-quest is implemented in C++, just as in the
Java version. The videos available for the Java version are the following ones:

- Package separation ([video](https://www.youtube.com/watch?v=ob-8gabEB_M))
- New Game Logic ([video](https://www.youtube.com/watch?v=GcybhYNrOo8))
- Dragon movement and multiple dragons
  ([video](https://www.youtube.com/watch?v=TfEQHLTe3_E))

The YouTube video for the Java version is also valid for C++. You should have
the following considerations in C++:

- Namespaces:
  - Consider equivalent to packages in Java
  - Separate different namespaces in different folders insider `src/` and
    `include/`
- Classes: usually, separate different classes in different `cpp/h` files

## Usage

### CmakeLists

```sh
# create build dir
$ mkdir build
# cmake
$ cmake ..
# build
$ make
# run
$ ./dragonsbane
```

### Tasks on CLion (Windows and Linux)

1. Launch CLion
2. `File | Open`
3. Navigate to the Project Directory and select `CMakeLists.txt`
4. `Open as Project`
3. Build `DragonsBane`
    - `Build | Build 'DragonsBane'`  (`Ctrl+F9`)
3. Run `DragonsBane`
    - `Run | Run 'DragonsBane'` (`Shift+F10`)
    -  With Debug: `Run | Debug 'DragonsBane'` (`Shift+F9`)

### Tasks on VS Code

1. Open `src/main.cpp`
2. Build `DragonsBane.exe`
   - VS Code > Terminal > Run Build Task (`Ctrl+Shift+B`)
3. Run `DragonsBane.exe`
   - VS Code > Run > Start debugging (`F5`)
   - OR VS Code > Run > Run without debugging (`Ctrl+F5`)

## Support

Please contact Luís C. Santos (luis.c.santos@inesctec.pt) if you have any questions.


