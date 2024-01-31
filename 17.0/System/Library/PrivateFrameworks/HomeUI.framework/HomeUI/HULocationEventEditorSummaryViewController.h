@class NSString, HUTriggerConditionEditorItemModuleController, HULocationEventEditorSummaryItemManager, HUEventUIFlow, HUPresenceUserPickerItemModuleController;

@interface HULocationEventEditorSummaryViewController : HUItemTableViewController <HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUEventUIFlowViewController>

@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly, nonatomic) HULocationEventEditorSummaryItemManager *itemManager;
@property (readonly, nonatomic) HUPresenceUserPickerItemModuleController *userPickerModuleController;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLocationEventBuilderForHome:(id)a0 eventType:(unsigned long long)a1;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)a0;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)presenceUserPickerItemModuleController:(id)a0 presentViewController:(id)a1;
- (void)regionEditor:(id)a0 didFinishWithRegion:(id)a1;
- (void)regionEditorDidCancel:(id)a0;
- (void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
