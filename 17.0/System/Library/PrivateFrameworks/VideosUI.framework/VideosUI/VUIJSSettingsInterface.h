@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (BOOL)sportsScoreSpoilersAllowed;
- (BOOL)privateModeEnabled;
- (id)consentedBrands;
- (id)deniedBrands;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (id)appSettingsByChannelID;
- (void)forceUpdateWithCallback:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (void)updateFeaturesConfiguration:(id)a0;
- (id)wlkOverrides;

@end
