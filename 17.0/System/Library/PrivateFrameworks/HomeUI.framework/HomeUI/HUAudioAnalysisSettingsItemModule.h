@class HMHome, NSString, HFMediaAccessoryItemProvider, HFAccessoryItemProvider, HFItemProvider;

@interface HUAudioAnalysisSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate>

@property (retain, nonatomic) HFItemProvider *audioAnalysisDeviceItemProvider;
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider;
@property (retain, nonatomic) HFItemProvider *soundsItemProvider;
@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_audioAnalysisDeviceItemComparator;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)enableAudioAnalysisSetting:(BOOL)a0 forItem:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;
- (id)updateAudioAnalysisDetectionSettings:(BOOL)a0 forItem:(id)a1;

@end
