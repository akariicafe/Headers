@class NSString, TRIClient;

@interface SBHTrialClientManager : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (retain, nonatomic) NSString *homeScreenNamespace;

- (id)init;
- (void).cxx_destruct;
- (void)immediatelyFetchSpringBoardHomeNamespace;
- (BOOL)widgetDiscoverabilityGoSwitchEnabled;

@end
