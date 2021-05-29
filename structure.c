#include <stdio.h>
#include <string.h>

struct Host
{
    int id;
    char hostname[20];
    char version[10];
};

void print_host(struct Host host);
void print_host_by_address(struct Host *host);

int main(int argc, char const *argv[])
{
    struct Host fedora;
    struct Host centos;

    strcpy(fedora.hostname, "fedora_test");
    strcpy(fedora.version, "34");
    fedora.id = 1;

    strcpy(centos.hostname, "centos_test");
    strcpy(centos.version, "9");
    centos.id = 1;

    print_host(fedora);
    print_host_by_address(&centos);
    return 0;
}

void print_host(struct Host host)
{
    printf("host id: %d \n", host.id);
    printf("host hostname: %s \n", host.hostname);
    printf("host version: %s \n", host.version);
}

void print_host_by_address(struct Host *host)
{
    printf("host id: %d \n", host->id);
    printf("host hostname: %s \n", host->hostname);
    printf("host version: %s \n", host->version);
}