@class HFChildServiceControlItem, HUQuickControlCollectionViewController, HFControlItem, HFTemperatureThresholdControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;
@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (readonly, nonatomic) HFTemperatureThresholdControlItem *temperatureControlItem;
@property (readonly, nonatomic) HFChildServiceControlItem *childValvesControlItem;

+ (id)_childValvesPredicate;
+ (id)_primaryStatePredicate;
+ (id)_temperaturePredicate;
+ (id)controlItemPredicate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_controlItemMatchingPredicate:(id)a0;
- (id)childQuickControlContentViewControllers;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)overrideStatusText;

@end
