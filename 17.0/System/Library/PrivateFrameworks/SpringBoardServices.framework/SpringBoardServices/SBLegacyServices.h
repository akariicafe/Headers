@interface SBLegacyServices : NSObject

+ (void)_configure;
+ (id)workloop;
+ (void)setFunction:(void *)a0 forSymbol:(const char *)a1;
+ (void)start;
+ (void)checkInPorts;

@end
