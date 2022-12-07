{ pkgs }: {
    deps = [
       pkgs.gcc -g problem05.c
       pkgs../a
       pkgs../a
       pkgs.gcc -g problem08.c
       pkgs.azure-functions-core-tools
       pkgs.azure-functions-core-tools
       pkgs.cowsay
    ];
}