#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], ttl[120], alamat[80], hobby[39];
    int nim, no_hp, kelas;

    printf("Nama                 :");
    fgets(name, sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Nim                  :");
    scanf("%d", &nim);
    printf("Kelas Paralel        :");
    scanf("%d", &kelas);
    getchar();
    printf("Tempat/Tanggal Lahir :");
    fgets(ttl, sizeof(ttl),stdin);
    ttl[strcspn(ttl, "\n")] = '\0';
    printf("Alamat               :");
    fgets(alamat, sizeof(alamat),stdin);
    alamat[strcspn(alamat, "\n")] = '\0';
    printf("Hobby                :");
    fgets(hobby, sizeof(hobby),stdin);
    hobby[strcspn(hobby, "\n")] = '\0';
    printf("No. HP               :");
    scanf("%d", &no_hp);

    printf("\nNama                :%s", name);
    printf("\nNim                 :%d", nim);
    printf("\nKelas Paralel       :%d", kelas);
    printf("\nTempat/Tanggal Lahir:%s", ttl);
    printf("\nAlamat              :%s", alamat);
    printf("\nHobby               :%s", hobby);
    printf("\nNo.HP               :%d", no_hp);
    
    return 0;
}