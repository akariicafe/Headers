@class HUCharacteristicEventOptionItem, NSString, HUTriggerConditionEditorItemModuleController, HFEventTriggerBuilder, HUCharacteristicTriggerEventItemManager, HFCharacteristicEventBuilderItem;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate>

@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) HUCharacteristicTriggerEventItemManager *itemManager;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_cancel:(id)a0;
- (BOOL)_canCommitTriggerBuilder;
- (BOOL)_canContinue;
- (id)_commitTriggerBuilder;
- (void)_showActionEditor:(id)a0;
- (void)_showSummary:(id)a0;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (void)_validateNextButton;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (id)initWithCharacteristicEventBuilderItem:(id)a0 triggerBuilder:(id)a1 mode:(unsigned long long)a2 delegate:(id)a3;
- (void)itemManagerDidUpdate:(id)a0;
- (long long)numberOfValuesForPickerViewCell:(id)a0;
- (id)pickerViewCell:(id)a0 attributedTitleForValueAtIndex:(long long)a1;
- (BOOL)pickerViewCell:(id)a0 canSelectValueAtIndex:(long long)a1;
- (void)pickerViewCell:(id)a0 didSelectValueAtIndex:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)visibleTriggerValuesForItem:(id)a0;

@end
