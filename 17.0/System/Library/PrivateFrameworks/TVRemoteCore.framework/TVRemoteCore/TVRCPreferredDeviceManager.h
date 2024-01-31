@interface TVRCPreferredDeviceManager : NSObject

+ (id)sharedInstance;

- (void)setPreferredDevice:(id)a0;
- (id)preferredDeviceIdentifier;
- (double)preferredDeviceSearchTimeout;

@end
