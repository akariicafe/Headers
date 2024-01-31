@protocol TITrialManager;

@interface TITrialManagerProxy : NSObject

@property (class, readonly) id<TITrialManager> sharedManager;

+ (void)setSharedManager:(id)a0;

@end
