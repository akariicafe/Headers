@class NSString;

@interface OKDynamicPushBehavior : UIPushBehavior <OKSettingsSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)init;
- (void)dealloc;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;

@end
