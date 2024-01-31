@interface AXCapabilityManager : NSObject

+ (id)sharedManager;

- (id)capabilities;
- (BOOL)isAccessibilityCapability:(id)a0;
- (BOOL)isCapabilityAvailable:(id)a0;

@end
