@interface ZhuGeBasebandArmory : NSObject

+ (BOOL)hasBaseband;
+ (BOOL)isBasebandReady;
+ (long long)getBasebandClass;
+ (id)getProperty:(char[512])a0 inPlane:(char[128])a1 withName:(struct __CFString { } *)a2 withOption:(unsigned int)a3;
+ (id)query:(id)a0 withError:(id *)a1;
+ (BOOL)waitUntilBasebandReady:(int)a0 retryInterval:(int)a1;

@end
