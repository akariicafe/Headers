@interface SPIProcessUtils : NSObject

+ (int)getUsageForPid:(int)a0 withOutput:(struct SPIResourceUsage { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1;
+ (id)getProcessNameForPid:(int)a0;
+ (unsigned char)getProcessForPid:(int)a0;

@end
