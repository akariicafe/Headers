@class NSString, PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier;
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
- (id)stopSharingScreenTimeFooterText;
- (id)stopSharingScreenTimeButtonName;
- (void)confirmStopSharingScreenTime:(id)a0;
- (void)disableManagement:(id)a0;
- (void)disableScreenTime:(id)a0;
- (id)stopSharingScreenTimeConfirmationPrompt;
- (void)updateStopSharingScreenTimeSpecifier;

@end
