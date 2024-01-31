@class HUQuickControlRingSliderViewProfile, HFRangeControlItem, NSString, HUQuickControlRingSliderView;

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate>

@property (readonly, nonatomic) HFRangeControlItem *controlItem;
@property (readonly, nonatomic) HUQuickControlRingSliderViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_getHeaterCoolerThresholdControlItemStateString:(out id *)a0 temperatureString:(out id *)a1 withRangeControlItemValue:(id)a2;
- (void)_getTemperatureThresholdControlItemStateString:(out id *)a0 temperatureString:(out id *)a1 withRangeControlItemValue:(id)a2;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)interactionCoordinator:(id)a0 viewValueDidChange:(id)a1;
- (void)invalidateViewProfile;
- (void)modelValueDidChange;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (void)updateMainStatusStringWithValue:(id)a0;
- (void)updateSupplementaryValue;

@end
