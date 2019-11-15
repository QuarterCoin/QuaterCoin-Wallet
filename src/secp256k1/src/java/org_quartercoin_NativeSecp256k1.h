/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "include/secp256k1.h"
/* Header for class org_quartercoin_NativeSecp256k1 */

#ifndef _Included_org_quartercoin_NativeSecp256k1
#define _Included_org_quartercoin_NativeSecp256k1
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ctx_clone
 * Signature: (J)J
 */
SECP256K1_API jlong JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ctx_1clone
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_context_randomize
 * Signature: (Ljava/nio/ByteBuffer;J)I
 */
SECP256K1_API jint JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1context_1randomize
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_privkey_tweak_add
 * Signature: (Ljava/nio/ByteBuffer;J)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1privkey_1tweak_1add
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_privkey_tweak_mul
 * Signature: (Ljava/nio/ByteBuffer;J)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1privkey_1tweak_1mul
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_pubkey_tweak_add
 * Signature: (Ljava/nio/ByteBuffer;JI)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1pubkey_1tweak_1add
  (JNIEnv *, jclass, jobject, jlong, jint);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_pubkey_tweak_mul
 * Signature: (Ljava/nio/ByteBuffer;JI)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1pubkey_1tweak_1mul
  (JNIEnv *, jclass, jobject, jlong, jint);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_destroy_context
 * Signature: (J)V
 */
SECP256K1_API void JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1destroy_1context
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ecdsa_verify
 * Signature: (Ljava/nio/ByteBuffer;JII)I
 */
SECP256K1_API jint JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ecdsa_1verify
  (JNIEnv *, jclass, jobject, jlong, jint, jint);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ecdsa_sign
 * Signature: (Ljava/nio/ByteBuffer;J)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ecdsa_1sign
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ec_seckey_verify
 * Signature: (Ljava/nio/ByteBuffer;J)I
 */
SECP256K1_API jint JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ec_1seckey_1verify
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ec_pubkey_create
 * Signature: (Ljava/nio/ByteBuffer;J)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ec_1pubkey_1create
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ec_pubkey_parse
 * Signature: (Ljava/nio/ByteBuffer;JI)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ec_1pubkey_1parse
  (JNIEnv *, jclass, jobject, jlong, jint);

/*
 * Class:     org_quartercoin_NativeSecp256k1
 * Method:    secp256k1_ecdh
 * Signature: (Ljava/nio/ByteBuffer;JI)[[B
 */
SECP256K1_API jobjectArray JNICALL Java_org_quartercoin_NativeSecp256k1_secp256k1_1ecdh
  (JNIEnv* env, jclass classObject, jobject byteBufferObject, jlong ctx_l, jint publen);


#ifdef __cplusplus
}
#endif
#endif
