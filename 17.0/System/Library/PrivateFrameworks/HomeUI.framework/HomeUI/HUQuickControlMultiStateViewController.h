@class HFMultiStateControlItem;

@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isCharacteristicTypeRotationDirection;
- (BOOL)_shouldUseWheelPickerView;
- (BOOL)_useOverrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)modelValueDidChange;
- (id)overrideStatusText;

@end
