@class HMAccessory, NSSet, HFItemProvider;

@interface HUAudioAnalysisDetectionSettingsModule : HFItemModule {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HFItemProvider *audioDetectionSettingsItemProvider;
@property (readonly, nonatomic) HMAccessory *accessory;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 accessory:(id)a1;

@end
