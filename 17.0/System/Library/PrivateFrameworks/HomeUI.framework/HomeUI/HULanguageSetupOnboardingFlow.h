@class HMHome, NSString, NSDictionary, NAFuture, UIViewController;
@protocol HUConfigurationViewController;

@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow>

@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) BOOL shouldAbortAllOnboarding;
@property (nonatomic) BOOL forceOnboardingFinishedForErrorRecovery;
@property (nonatomic) unsigned long long languageOnboardingFlowType;
@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) NSString *assistantDeviceIntendedRecognitionLanguage;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *readyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)needsOnboardingForHome:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)_determineNextViewControllerWithPriorResults:(id)a0;
- (id)initWithUsageOptions:(id)a0 home:(id)a1;
- (id)processUserInput:(id)a0;

@end
