@interface WaterStateInterface : NSObject

+ (id)sharedInstance;

- (void)disconnect;
- (void)connect;
- (BOOL)isWaterStateON;

@end
