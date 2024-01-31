@interface Trace : NSObject

+ (void)post:(unsigned int)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;
+ (void)postEnd:(unsigned int)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;
+ (void)postStart:(unsigned int)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;

@end
