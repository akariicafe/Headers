@class HUQuickControlValveToggleView, HFControlItem;
@protocol HFPrimaryStateWriter;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController

@property (readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *controlItem;
@property (retain, nonatomic) HUQuickControlValveToggleView *controlView;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
