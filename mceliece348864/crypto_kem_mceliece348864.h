#ifndef crypto_kem_mceliece348864_H
#define crypto_kem_mceliece348864_H

#include "gf.h"

#define crypto_kem_mceliece348864_ref_PUBLICKEYBYTES 261120
#define crypto_kem_mceliece348864_ref_SECRETKEYBYTES 6452
#define crypto_kem_mceliece348864_ref_CIPHERTEXTBYTES 128
#define crypto_kem_mceliece348864_ref_BYTES 32

 
#ifdef __cplusplus
extern "C" {
#endif
extern int crypto_kem_mceliece348864_ref_keypair(unsigned char *,unsigned char *);
extern int crypto_kem_mceliece348864_ref_enc(unsigned char *,unsigned char *,const unsigned char *);
extern int crypto_kem_mceliece348864_ref_dec(unsigned char *,const unsigned char *,const unsigned char *, gf *L);
#ifdef __cplusplus
}
#endif

#define crypto_kem_mceliece348864_keypair crypto_kem_mceliece348864_ref_keypair
#define crypto_kem_mceliece348864_enc crypto_kem_mceliece348864_ref_enc
#define crypto_kem_mceliece348864_dec crypto_kem_mceliece348864_ref_dec
#define crypto_kem_mceliece348864_PUBLICKEYBYTES crypto_kem_mceliece348864_ref_PUBLICKEYBYTES
#define crypto_kem_mceliece348864_SECRETKEYBYTES crypto_kem_mceliece348864_ref_SECRETKEYBYTES
#define crypto_kem_mceliece348864_BYTES crypto_kem_mceliece348864_ref_BYTES
#define crypto_kem_mceliece348864_CIPHERTEXTBYTES crypto_kem_mceliece348864_ref_CIPHERTEXTBYTES

#endif
