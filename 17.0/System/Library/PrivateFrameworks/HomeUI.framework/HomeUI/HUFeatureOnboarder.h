@class NSString, UINavigationController, NSMutableDictionary, NSDictionary, NSMutableArray, UIViewController, HUFeatureOnboardingConfigurator, NAFuture;
@protocol HUConfigurationViewController;

@interface HUFeatureOnboarder : NSObject <HUFeatureOnboardingConfiguratorDelegate>

@property (retain, nonatomic) HUFeatureOnboardingConfigurator *configurator;
@property (retain, nonatomic) NSMutableDictionary *userInputResults;
@property (retain, nonatomic) NSDictionary *initialUsageOptions;
@property (retain, nonatomic) NAFuture *completionFuture;
@property (retain, nonatomic) NSMutableArray *allRemainingFlowGroups;
@property (retain, nonatomic) UINavigationController *navController;
@property (weak) UIViewController<HUConfigurationViewController> *_currentViewControllerForTests;
@property (nonatomic) BOOL hasPerformedPostProcessing;
@property (nonatomic) BOOL restart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_findNextAppropriateFlowByRemovingFlow:(id)a0 currentOnboardingFlowClass:(Class)a1 usageOptions:(id)a2;
- (void)_skipAnyFlowsNoLongerRequired;
- (id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)a0 usageOptions:(id)a1;
- (void)configuratorDidFinish:(id)a0;
- (void)configuratorDidUpdateViewController:(id)a0;
- (id)getNextViewControllerForOnboardingInput:(id)a0 currentOnboardingFlowClass:(Class)a1;
- (id)getPostProcessingFlowsForResults:(id)a0;
- (id)initWithFeatures:(id)a0 usageOptions:(id)a1;
- (id)initWithGroupedFeatures:(id)a0 usageOptions:(id)a1;
- (void)restartCurrentOnboarding;
- (void)startOnboardingWithPresentingViewController:(id)a0 usageOptions:(id)a1;

@end
