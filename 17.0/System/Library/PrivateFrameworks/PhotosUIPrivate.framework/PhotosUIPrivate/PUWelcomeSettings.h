@class NSString;

@interface PUWelcomeSettings : PXSettings <SBSRemoteAlertHandleObserver>

@property (nonatomic) unsigned long long whatsNewBehavior;
@property (nonatomic) unsigned long long cloudPhotoWelcomeBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)parentSettings;
- (void)setDefaultValues;

@end
