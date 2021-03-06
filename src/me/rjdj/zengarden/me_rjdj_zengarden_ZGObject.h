/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class me_rjdj_zengarden_ZGObject */

#ifndef _Included_me_rjdj_zengarden_ZGObject
#define _Included_me_rjdj_zengarden_ZGObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     me_rjdj_zengarden_ZGObject
 * Method:    remove
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_me_rjdj_zengarden_ZGObject_remove
  (JNIEnv *, jobject, jlong);

/*
 * Class:     me_rjdj_zengarden_ZGObject
 * Method:    sendMessage
 * Signature: (ILme/rjdj/zengarden/Message;J)V
 */
JNIEXPORT void JNICALL Java_me_rjdj_zengarden_ZGObject_sendMessage
  (JNIEnv *, jobject, jint, jobject, jlong);

/*
 * Class:     me_rjdj_zengarden_ZGObject
 * Method:    getIncomingConnections
 * Signature: (IJ)[Lme/rjdj/zengarden/ConnectionPair;
 */
JNIEXPORT jobjectArray JNICALL Java_me_rjdj_zengarden_ZGObject_getIncomingConnections
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     me_rjdj_zengarden_ZGObject
 * Method:    getOutgoingConnections
 * Signature: (IJ)[Lme/rjdj/zengarden/ConnectionPair;
 */
JNIEXPORT jobjectArray JNICALL Java_me_rjdj_zengarden_ZGObject_getOutgoingConnections
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     me_rjdj_zengarden_ZGObject
 * Method:    toString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_me_rjdj_zengarden_ZGObject_toString
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
