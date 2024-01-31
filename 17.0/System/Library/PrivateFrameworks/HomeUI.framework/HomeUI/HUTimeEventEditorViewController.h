@class HFItem, NSString, NSArray, HFEventBuilder, NSDateComponents, HUGridLayoutOptions, HUTimeEventEditorItemManager, HFEventTriggerBuilder, HUEventUIFlow;
@protocol HFTimeEventBuilder;

@interface HUTimeEventEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate, HUEventUIFlowViewController>

@property (retain, nonatomic) HUTimeEventEditorItemManager *itemManager;
@property (retain, nonatomic) HFItem *selectedDateOptionItem;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *timeEvent;
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) NSDateComponents *selectedFireTimeComponents;
@property (retain, nonatomic) NSArray *selectedRecurrences;
@property (retain, nonatomic) NSDateComponents *selectedSignificantEventOffset;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUEventUIFlow *flow;
@property (retain, nonatomic) NSString *stepIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_doneButtonPressed:(id)a0;
- (void)_nextButtonPressed:(id)a0;
- (id)_localizedRecurrenceDescription;
- (BOOL)_canCommitTriggerBuilder;
- (BOOL)_canContinue;
- (void)_changeFireTime:(id)a0;
- (id)_commitTriggerBuilder;
- (id)_instructionsSectionIDs;
- (id)_selectedSignificantEvent;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)conditionEditorModuleController:(id)a0 dismissDetailViewController:(id)a1;
- (void)conditionEditorModuleController:(id)a0 presentDetailViewController:(id)a1;
- (void)datePickerCell:(id)a0 didSelectDate:(id)a1;
- (void)dayOfWeekPickerCell:(id)a0 didChangeSelectedRecurrences:(id)a1;
- (id)initWithFlow:(id)a0 stepIdentifier:(id)a1;
- (id)initWithTimeEvent:(id)a0 triggerBuilder:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (void)timerTriggerOffsetEditor:(id)a0 didFinishWithOffset:(id)a1;
- (void)timerTriggerOffsetEditorDidCancel:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
