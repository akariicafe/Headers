@class HFItem, NSString, HFServiceBuilder, HFControlPanelItemProvider, HFValveServiceItem, HUNameItemModule, HFStaticItemProvider, HFStaticItem, HUControlPanelController;

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate>

@property (retain, nonatomic) HFValveServiceItem *sourceValveItem;
@property (retain, nonatomic) HFItem *nameItem;
@property (retain, nonatomic) HUNameItemModule *nameModule;
@property (retain, nonatomic) HFStaticItem *identifyItem;
@property (retain, nonatomic) HUControlPanelController *controlPanelController;
@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFServiceBuilder *serviceBuilder;
@property (readonly, nonatomic) unsigned long long editorMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredSectionSortArray;
+ (id /* block */)sortComparatorForValveEditorSections;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_characteristicTypesForControlPanelItem:(id)a0;
- (id)_characteristicsAffectedByControlItem:(id)a0;
- (void)controlPanelController:(id)a0 didEndPossibleWritesForControlItem:(id)a1;
- (void)controlPanelController:(id)a0 willBeginPossibleWritesForControlItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1 editorMode:(unsigned long long)a2;

@end
