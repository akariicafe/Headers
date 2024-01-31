@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule

@property (readonly, nonatomic) HFItem *chooseInputsSelectionItem;

+ (id /* block */)_serviceItemComparatorForTelevisionProfile:(id)a0;
+ (id)supportedServiceTypes;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)canToggleConfigurationStateForItem:(id)a0;

@end
