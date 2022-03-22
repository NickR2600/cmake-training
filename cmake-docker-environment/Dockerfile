FROM conanio/gcc7:1.40.4

USER root

RUN apt-get -qq update \
    && apt-get -qq install -y --no-install-recommends \
       tree \
       graphviz \
       vim \
       nano \
       less \
       g++-arm-linux-gnueabihf \
       cmake

USER conan

RUN conan profile new default --detect
RUN conan profile update settings.compiler.libcxx=libstdc++11 default

WORKDIR /home/conan/cmake-training/lab-files
