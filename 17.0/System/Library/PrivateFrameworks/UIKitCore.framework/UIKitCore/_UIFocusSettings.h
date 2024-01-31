@class _UIFocusHaloSettings, _UIFocusDeferralSettings;

@interface _UIFocusSettings : PTSettings

@property (retain, nonatomic) _UIFocusDeferralSettings *deferralSettings;
@property (retain, nonatomic) _UIFocusHaloSettings *haloSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
