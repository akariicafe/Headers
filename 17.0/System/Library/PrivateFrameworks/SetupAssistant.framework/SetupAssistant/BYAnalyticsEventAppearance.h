@class BYPreferencesController;

@interface BYAnalyticsEventAppearance : NSObject

@property (retain) BYPreferencesController *buddyPreferencesExcludedFromBackup;

- (void).cxx_destruct;
- (id)_eventPayload;
- (id)_eventPayloadFromPreferences;
- (void)didChooseAppearanceModeName:(id)a0 forDisposition:(unsigned long long)a1;
- (void)didChooseToSetUpForChild:(BOOL)a0;
- (id)initWithAnalyticsManager:(id)a0 buddyPreferencesExcludedFromBackup:(id)a1;

@end
