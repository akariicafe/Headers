@interface ABPKTime : NSObject

+ (double)machAbsoluteTimeToSeconds:(unsigned long long)a0;
+ (double)CMTimeToSeconds:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (unsigned long long)nowAsMachAbsoluteTime;
+ (double)nowInSeconds;

@end
