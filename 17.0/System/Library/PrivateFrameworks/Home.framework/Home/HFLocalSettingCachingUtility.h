@class NSMutableDictionary, NSUserDefaults;

@interface HFLocalSettingCachingUtility : NSObject

@property (retain, nonatomic) NSMutableDictionary *settingCache;
@property (retain, nonatomic) NSUserDefaults *defaults;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_getValueForSetting:(id)a0;
- (id)_getWelcomeBannerDismissedKey:(id)a0;
- (void)_setValueForSetting:(id)a0 settingValue:(id)a1;
- (BOOL)getWelcomeBannerDismissedLocalCachedValue:(id)a0;
- (void)setWelcomeBannerDismissedLocalCachedValue:(BOOL)a0 home:(id)a1;

@end
