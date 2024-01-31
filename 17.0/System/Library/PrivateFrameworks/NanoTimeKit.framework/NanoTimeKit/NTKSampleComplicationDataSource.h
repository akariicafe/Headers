@class CLKComplicationTemplate;

@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate *_complicationTemplate;
}

+ (BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(long long)a0;
+ (BOOL)_shouldUseFallbackImagesForDevice:(id)a0;
+ (BOOL)acceptsClassicComplicationType:(unsigned long long)a0 withFamily:(long long)a1;
+ (BOOL)acceptsComplicationType:(unsigned long long)a0 withFamily:(long long)a1 forDevice:(id)a2;

- (void)dealloc;
- (void)_localeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_city;
- (id)_alarmTemplate;
- (id)_astronomyTemplateFromVista:(unsigned long long)a0;
- (id)_batteryTemplate;
- (id)_breathingTemplate;
- (id)_currentEntryModel;
- (id)_fullColorImageProviderWithSystemImageName:(id)a0 tintColor:(id)a1 fallbackImageName:(id)a2;
- (id)_heartrateTemplate;
- (id)_imageProviderWithSystemImageName:(id)a0 overridePointSize:(id)a1 tintColor:(id)a2 fallbackImageName:(id)a3;
- (id)_moonPhaseTemplate;
- (id)_musicTemplate;
- (id)_newsTemplate;
- (id)_nowPlayingTemplate;
- (id)_podcastsTemplate;
- (id)_radioTemplate;
- (id)_reminderTemplate;
- (id)_siriTemplate;
- (id)_solarTemplate;
- (id)_stopwatchTemplate;
- (id)_worldClockTemplate;
- (id)currentSwitcherTemplate;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (Class)richComplicationDisplayViewClassForDevice:(id)a0;
- (id)sampleTemplate;
- (BOOL)supportsFlowerImages;

@end
