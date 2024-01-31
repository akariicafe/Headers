@interface WFEventTracker : NSObject

+ (id)sharedTracker;

- (id)init;
- (void)trackEvent:(id)a0;

@end
