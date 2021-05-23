#ifndef OQS_UTIL_H
#define OQS_UTIL_H

#include "includes.h"
#include "sshkey.h"

// OQS-TODO: Replace these macros with the functions below
///// OQS_TEMPLATE_FRAGMENT_DEFINE_KEY_CASE_MACROS_START
#define CASE_KEY_OQS \
	case KEY_OQS_DEFAULT: \
	case KEY_FALCON_512: \
	case KEY_DILITHIUM_3: \
	case KEY_PICNIC_L3_FS: \
	case KEY_SPHINCS_HARAKA_192F_ROBUST

#define CASE_KEY_RSA_HYBRID \
	case KEY_RSA3072_OQS_DEFAULT: \
	case KEY_RSA3072_FALCON_512

#define CASE_KEY_ECDSA_HYBRID \
	case KEY_ECDSA_NISTP256_OQS_DEFAULT: \
	case KEY_ECDSA_NISTP256_FALCON_512: \
	case KEY_ECDSA_NISTP384_DILITHIUM_3: \
	case KEY_ECDSA_NISTP384_PICNIC_L3_FS: \
	case KEY_ECDSA_NISTP384_SPHINCS_HARAKA_192F_ROBUST
///// OQS_TEMPLATE_FRAGMENT_DEFINE_KEY_CASE_MACROS_END

#define CASE_KEY_HYBRID \
	CASE_KEY_RSA_HYBRID: \
	CASE_KEY_ECDSA_HYBRID

int oqs_utils_is_rsa_hybrid(int keytype);
int oqs_utils_is_ecdsa_hybrid(int keytype);
int oqs_utils_is_hybrid(int keytype);

#endif /* OQS_UTIL_H */
