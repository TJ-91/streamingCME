#ifndef crypto_kem_H
#define crypto_kem_H

#include "crypto_kem_mceliece348864.h"
#include "gf.h"

#define crypto_kem_keypair crypto_kem_mceliece348864_keypair
#define crypto_kem_enc crypto_kem_mceliece348864_enc
#define crypto_kem_dec crypto_kem_mceliece348864_dec
#define crypto_kem_PUBLICKEYBYTES crypto_kem_mceliece348864_PUBLICKEYBYTES
#define crypto_kem_SECRETKEYBYTES crypto_kem_mceliece348864_SECRETKEYBYTES
#define crypto_kem_BYTES crypto_kem_mceliece348864_BYTES
#define crypto_kem_CIPHERTEXTBYTES crypto_kem_mceliece348864_CIPHERTEXTBYTES
#define crypto_kem_PRIMITIVE "mceliece348864"

#endif
