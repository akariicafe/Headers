@class HFStaticItemProvider, NSString, NSMutableOrderedSet, NSMutableSet, HFStaticItem, HFTransformItemProvider;

@interface HUSiriTriggerPhraseSettingDetailsItemManager : HFItemManager <HFMediaAccessoryCommonSettingsDelegate>

@property (retain, nonatomic) HFStaticItemProvider *siriTriggerPhraseSelectionItemProvider;
@property (retain, nonatomic) HFStaticItem *hsOrJSItem;
@property (retain, nonatomic) HFStaticItem *hsItem;
@property (retain, nonatomic) HFTransformItemProvider *siriDeviceItemProvider;
@property (retain, nonatomic) HFTransformItemProvider *siriOtherDeviceItemProvider;
@property (retain, nonatomic) NSMutableOrderedSet *unsupportedMediaAccessories;
@property (retain, nonatomic) NSMutableSet *unsupportedLanguageCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)home;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithSourceItem:(id)a0 delegate:(id)a1;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;
- (id)updateSiriTriggerPhrase:(id)a0;

@end
