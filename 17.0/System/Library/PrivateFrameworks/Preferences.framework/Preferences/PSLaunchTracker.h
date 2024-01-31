@interface PSLaunchTracker : NSObject

@property (readonly, nonatomic) BOOL launchHasCompleted;

+ (id)sharedInstance;

- (void)setLaunchHasCompleted;

@end
