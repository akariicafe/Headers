@interface HDAudioAnalyticsSettingsPreferences : NSObject

- (BOOL)_hasPairedWatchWithNoiseApp;
- (id)headphonePreferences;
- (id)headphonePreferencesForActivePairedWatch;
- (id)headphonePreferencesForLocalDevice;
- (id)noisePreferences;

@end
