@class CPSLabeledValueView, CPSTravelEstimatesStringFormatter, NSTimeZone;

@interface CPSRouteEstimatesView : UIView

@property (readonly, nonatomic) CPSLabeledValueView *arrivalTimeView;
@property (readonly, nonatomic) CPSLabeledValueView *distanceRemainingView;
@property (readonly, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter;
@property (nonatomic) unsigned long long timeRemainingColor;
@property (copy, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) CPSLabeledValueView *timeRemainingView;

- (id)initWithStyle:(unsigned long long)a0;
- (void)_updateTextColors;
- (void).cxx_destruct;
- (id)arrivalTimeZone;
- (void)setTripEstimateStyle:(unsigned long long)a0;
- (void)setArrivalTimeZone:(id)a0;
- (void)setCurrentTravelEstimates:(id)a0;

@end
