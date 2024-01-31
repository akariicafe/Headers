@class HFEventTriggerBuilder, HFEventBuilderItem;
@protocol HUEventUIFlowPresentationController, HUEventUIFlowDelegate;

@interface HUEventUIFlow : NSObject

@property (retain, nonatomic) HFEventBuilderItem *eventBuilderItem;
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) HFEventBuilderItem *originalEventBuilderItem;
@property (nonatomic) unsigned long long eventType;
@property (weak, nonatomic) id<HUEventUIFlowDelegate> delegate;
@property (weak, nonatomic) id<HUEventUIFlowPresentationController> presentationController;
@property (nonatomic) BOOL isPresentedModally;

- (void).cxx_destruct;
- (id)_characteristicSelectionStepForEventType:(unsigned long long)a0;
- (id)_createViewControllerWithClass:(Class)a0 step:(id)a1;
- (id)_emptyConfigurationInitialStep;
- (id)_initialEventBuilderItemForType:(unsigned long long)a0;
- (id)_initialStepForEventType:(unsigned long long)a0;
- (void)_presentViewControllerForStep:(id)a0;
- (id)_stepFolowingStep:(id)a0;
- (id)_summaryStepForEventType:(unsigned long long)a0;
- (void)_updateEventTypeFromBuilder;
- (Class)_viewControllerClassForStep:(id)a0;
- (id)_viewControllerForStep:(id)a0;
- (id)buildInitialViewController;
- (BOOL)characteristicEditorAllowChangingCharacteristic:(id)a0;
- (void)characteristicEditorDidSelectToChangeCharacteristic:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 eventBuilderItem:(id)a1;
- (BOOL)isFlowCompleteAfterStep:(id)a0;
- (BOOL)shouldSaveEventBuildersToTriggerBuilderForStep:(id)a0;
- (BOOL)shouldShowDoneButtonForStep:(id)a0;
- (BOOL)shouldShowNextButtonForStep:(id)a0;
- (void)viewController:(id)a0 didCancelStepWithIdentifier:(id)a1;
- (void)viewController:(id)a0 didFinishStepWithIdentifier:(id)a1;
- (void)viewController:(id)a0 didSelectEventType:(unsigned long long)a1;
- (unsigned long long)viewController:(id)a0 servicePickerSourceForStep:(id)a1;

@end
