#cmake -DCMAKE_BUILD_TYPE=Debug  -DGRAPHENE_EGENESIS_JSON=/mnt/bts/genesis-test.json .
cmake -DCMAKE_BUILD_TYPE=Debug   .
#cmake -DCMAKE_BUILD_TYPE=Release  -DGRAPHENE_EGENESIS_JSON=/mnt/bts/genesis-test.json .
#cmake -DCMAKE_BUILD_TYPE=Release   .

N_CPU=$(cat /proc/cpuinfo | grep -c  '^processor')

make -j${N_CPU}
