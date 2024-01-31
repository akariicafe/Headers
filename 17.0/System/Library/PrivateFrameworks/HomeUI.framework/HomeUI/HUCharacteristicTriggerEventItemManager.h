@class HUTriggerConditionEditorItemModule, HFStaticItemProvider, HUInstructionsItem, HFItem, HFEventTriggerBuilder, HUCharacteristicEventOptionProvider, HFCharacteristicEventBuilderItem;
@protocol HFServiceVendor;

@interface HUCharacteristicTriggerEventItemManager : HFItemManager

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFItem *serviceNameItem;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HUCharacteristicEventOptionProvider *optionProvider;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HFItem<HFServiceVendor> *serviceVendingItem;
@property (retain, nonatomic) HFItem *activeOptionItem;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;

+ (id /* block */)_optionItemComparator;
+ (id)_titleForItemSection:(id)a0;
+ (id)serviceVendorItemForEventBuilderItem:(id)a0 inHome:(id)a1;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 eventBuilderItem:(id)a1 delegate:(id)a2;
- (id)optionItems;

@end
