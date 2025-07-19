cd build || exit 1
rm -rf ./*
cmake -G "Ninja" ..
ninja
chmod +x cliEngine
./cliEngine