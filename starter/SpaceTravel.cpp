#include <iostream>
#include <jni.h>
#include "SpaceTravel.h"

JNIEXPORT jint JNICALL Java_SpaceTravel_measureDistance
  (JNIEnv *, jobject, jdouble speed, jdouble time){
  return static_cast<jint>(speed * time);
}
