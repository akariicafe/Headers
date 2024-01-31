@protocol HKSPSleepFocusModeBridge;

@interface HDSPAppPredictionClient : NSObject <HDSPSleepProactiveBridge>

@property (readonly, nonatomic) id<HKSPSleepFocusModeBridge> sleepFocusModeBridge;

- (void)createSuggestedHomeScreenPageWithCompletion:(id /* block */)a0;
- (id)initWithSleepFocusModeBridge:(id)a0;
- (void).cxx_destruct;

@end
