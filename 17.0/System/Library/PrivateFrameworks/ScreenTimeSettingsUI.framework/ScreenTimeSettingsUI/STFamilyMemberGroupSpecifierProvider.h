@class NSString, UIViewController;

@interface STFamilyMemberGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (weak) UIViewController *rootViewController;
@property (nonatomic) BOOL presentedAsModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)a0 presentedAsModal:(BOOL)a1;
+ (id)providerWithCoordinator:(id)a0 rootViewController:(id)a1;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (id)familySpecifiers;
- (void)imageDidUpdate:(id)a0;
- (id)createSpecifierForUser:(id)a0 shouldWarn:(BOOL)a1;
- (void)showChildOnboardingFlow:(id)a0;
- (void)showChildOnboardingOrChildRootViewController:(id)a0;
- (void)showChildRootViewController:(id)a0;
- (id)totalChildUsageTime:(id)a0;

@end
