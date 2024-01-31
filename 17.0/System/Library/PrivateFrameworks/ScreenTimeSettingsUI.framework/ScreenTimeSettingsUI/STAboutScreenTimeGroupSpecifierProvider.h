@class NSString, PSSpecifier;

@interface STAboutScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (retain, nonatomic) PSSpecifier *aboutScreenTimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isHidden;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;

@end
