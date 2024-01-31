@class HFCharacteristicEventBuilderItem, HUCharacteristicTriggerServicePickerContentViewController, HFEventTriggerBuilder;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController

@property (readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilder;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long source;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (copy, nonatomic) id /* block */ filter;

+ (BOOL)canPickServicesFromSource:(unsigned long long)a0 home:(id)a1;
+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (unsigned long long)sourceForTriggerBuilder:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)characteristicTriggerBuilder;
- (id)initWithEventBuilderItem:(id)a0 triggerBuilder:(id)a1 mode:(unsigned long long)a2 source:(unsigned long long)a3 delegate:(id)a4;
- (id)initWithInstructionsItem:(id)a0 contentViewController:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
