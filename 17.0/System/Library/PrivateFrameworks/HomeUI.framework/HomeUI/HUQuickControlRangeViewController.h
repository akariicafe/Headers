@class HUQuickControlSliderViewProfile, HFRangeControlItem;

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFRangeControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlSliderViewProfile *viewProfile;

+ (Class)controlItemClass;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
