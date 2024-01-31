@class STUIStatusBarSensorActivityView;

@interface STUIStatusBarSensorActivityItem : STUIStatusBarItem

@property (retain, nonatomic) STUIStatusBarSensorActivityView *sensorActivityIndicator;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (void)_create_sensorActivityIndicator;

@end
