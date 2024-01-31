@class NSString, PSSpecifier;

@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver>

@property (retain, nonatomic) PSSpecifier *signInSpecifier;
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
- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)signInControllerDidCancel:(id)a0;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSignInController:(id)a0;

@end
