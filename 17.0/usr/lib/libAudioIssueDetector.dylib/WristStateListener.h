@interface WristStateListener : NSObject

+ (id)sharedInstance;

- (void)bypassDetection;
- (BOOL)isWristOn;
- (void)startListen;
- (void)stopListen;

@end
