//
// Created by ear on 16/8/20.
//
#include "com_example_bjhl_testjni_JniTest.h"
#include "android/log.h"

#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL Java_com_example_bjhl_testjni_JniTest_set_11
        (JNIEnv *env, jobject obj, jstring str) {
    const char *string =(*env)->GetStringUTFChars(env,str,0);
    LOGD("%s",string);
    __android_log_print(ANDROID_LOG_ERROR,"MDK","%s","hello word");
    __android_log_print(ANDROID_LOG_ERROR,"MDK","%s",string);
}

JNIEXPORT jstring JNICALL Java_com_example_bjhl_testjni_JniTest_get
        (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env,"hello from JNI");
}
