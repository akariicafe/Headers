@interface PSUIDevicePasscodeState : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (id)getLogger;
- (BOOL)isPasscodeSet;

@end
