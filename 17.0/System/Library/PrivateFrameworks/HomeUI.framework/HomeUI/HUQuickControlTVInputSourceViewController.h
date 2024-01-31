@class HFTVInputControlItem;

@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFTVInputControlItem *controlItem;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (id)_filterInputValues:(id)a0;
- (BOOL)_shouldWriteInputValue:(id)a0;
- (id)_toPickerViewItems:(id)a0;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
