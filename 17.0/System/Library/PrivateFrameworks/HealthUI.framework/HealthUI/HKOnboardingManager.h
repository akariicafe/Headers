@class UINavigationController, HKDateCache, HKHealthStore, NSArray, HKOnboardingSequence, NSMutableDictionary, NSString;
@protocol HKOnboardingManagerDataSource, HKOnboardingManagerDelegate;

@interface HKOnboardingManager : NSObject <UINavigationControllerDelegate, HKOnboardingPageViewControllerDelegate>

@property (nonatomic) long long onboardingType;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) HKOnboardingSequence *currentSequence;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) unsigned long long currentPageIndex;
@property (nonatomic) unsigned long long presentedPagesCount;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) BOOL firstTimeOnboarding;
@property (weak, nonatomic) id<HKOnboardingManagerDataSource> dataSource;
@property (weak, nonatomic) id<HKOnboardingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)stepToNextState;
- (void)_didStepBackward;
- (void)dismissOnboarding;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3;
- (id)initWithOnboardingType:(long long)a0 isFirstTimeOnboarding:(BOOL)a1 healthStore:(id)a2 dateCache:(id)a3 navigationController:(id)a4;
- (void)onboardingCancelled;
- (id)onboardingNavigationController;
- (void)pushPageAnimated:(BOOL)a0;
- (void)stepForward;
- (void)stepToNextPage;
- (long long)upgradingFromAlgorithmVersionForOnboardingType:(long long)a0;
- (id)viewControllerForPage:(id)a0;

@end
