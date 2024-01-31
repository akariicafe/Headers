@interface BRCDumper : NSObject

- (void)write:(const char *)a0;
- (void)reset;
- (void)changeAttributes:(int)a0;
- (void)changeBgColor:(int)a0;
- (void)changeFgColor:(int)a0;
- (void)startAttributes:(int)a0;
- (void)startBgColor:(int)a0;
- (void)startBgColor:(int)a0 attr:(int)a1;
- (void)startFgColor:(int)a0;
- (void)startFgColor:(int)a0 attr:(int)a1;
- (void)startFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (id)startStringForFgColor:(int)a0 bgColor:(int)a1 attr:(int)a2;
- (id)stringForReset;

@end
