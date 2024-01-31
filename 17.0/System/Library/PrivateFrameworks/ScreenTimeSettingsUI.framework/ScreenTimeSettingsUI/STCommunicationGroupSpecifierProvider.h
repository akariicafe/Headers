@class NSString, PSSpecifier;

@interface STCommunicationGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (retain, nonatomic) PSSpecifier *communicationLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *communicationSafetySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (id)_communicationLimitsDetailText;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (id)_communicationSafetyDetailText;
- (void)_communicationSafetyDidChange;
- (void)_isRemoteUserDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_resetCommunicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)a0;
- (void)_userTypeDidChange:(unsigned long long)a0;
- (void)showCommunicationSafetyViewController:(id)a0;
- (BOOL)showDemoModeAlertIfNeeded;

@end
