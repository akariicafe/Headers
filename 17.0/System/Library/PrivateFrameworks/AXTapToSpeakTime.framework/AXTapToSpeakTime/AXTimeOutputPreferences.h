@interface AXTimeOutputPreferences : AXSettings

+ (id)sharedInstance;

- (void)setVoiceOverTapticTimeEncoding:(long long)a0;
- (void)setVoiceOverTapticChimesFrequencyEncoding:(long long)a0;
- (long long)tapToSpeakTimeAvailability;
- (id)tapticChimesLocalizedDescription;
- (long long)voiceOverTapticChimesFrequencyEncoding;
- (id)tapticChimesLocalizedTitle;
- (id)tapticChimesSoundsOptions;
- (id)localizedStringForKey:(id)a0;
- (void)setVoiceOverTapticChimesEnabled:(BOOL)a0;
- (void)setTapToSpeakTimeAvailability:(long long)a0;
- (id)localizedStringForTapticChimesFrequencyEncoding:(long long)a0;
- (id)tapticTimeLocalizedDescription;
- (id)localizedStringForTapticTimeEncoding:(long long)a0;
- (id)tapticTimeEncodingOptions;
- (id)tapticTimeLocalizedCurrentMode;
- (id)accessibilityDomainAccessor;
- (id)tapticChimesLocalizedCurrentSounds;
- (void)setVoiceOverTapticTimeMode:(BOOL)a0;
- (void)setVoiceOverTapticChimesSoundType:(long long)a0;
- (id)tapticChimesSoundsLocalizedTitle;
- (BOOL)tapToSpeakTimeEnabled;
- (id)tapToSpeakAvailabilityOptions;
- (id)localizedStringForTapToSpeakTimeAvailability:(long long)a0;
- (long long)voiceOverTapticChimesSoundType;
- (long long)voiceOverTapticTimeEncoding;
- (id)tapticTimeModeLocalizedDescription;
- (id)tapToSpeakTimeLocalizedTitle;
- (BOOL)voiceOverTapticTimeMode;
- (BOOL)_voiceOverIsEnabled;
- (BOOL)voiceOverTapticChimesEnabled;
- (id)tapticChimesLocalizedCurrentFrequency;
- (void)setTapToSpeakTimeEnabled:(BOOL)a0;
- (id)_npsValueForPreferenceKey:(id)a0 expectedClass:(Class)a1;
- (id)tapToSpeakTimeLocalizedDescription;
- (id)_npsValueForPreferenceKey:(id)a0;
- (long long)_npsIntegerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (id)tapticChimesScheduleLocalizedTitle;
- (void)_setNPSValue:(id)a0 preferenceKey:(id)a1;
- (BOOL)_npsBoolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)_voiceOverIsInTripleClick;
- (id)tapticTimeLocalizedTitle;
- (id)tapticChimesFrequencyOptions;
- (id)localizedStringForTapticChimesSoundType:(long long)a0;

@end
