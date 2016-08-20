package com.example.bjhl.testjni;

/**
 * Created by ear on 16/8/20.
 */
public class JniTest {
    static {
        System.loadLibrary("jni-test");
    }

    public native  String get();
    public native void set_1(String str_1);
}
