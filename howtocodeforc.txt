1️⃣ Install Required Tools
✅ Install MinGW (C Compiler)

Download MinGW-w64 from: https://sourceforge.net/projects/mingw/files/latest/download

Install it (choose posix threads + seh for 64-bit Windows).

During installation, note the install path (e.g., C:\mingw64\bin).

✅ Add MinGW to PATH

Press Win + R, type:

sysdm.cpl


Go to Advanced → Environment Variables.

Under System Variables, find Path, click Edit.

Add:

C:\mingw64\bin


Open Command Prompt (cmd) and test:

gcc --version


If it shows GCC version, ✅ compiler is ready.

2️⃣ Install VS Code

Download from https://code.visualstudio.com/ .

Install with all default options.

Open VS Code and install these extensions:

C/C++ (Microsoft)

Code Runner (optional, for quick run)

C/C++ Compile Run (optional)