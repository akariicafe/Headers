@class CPSAbridgableLabel, UIImageView, CPTravelEstimates, CPManeuver;

@interface CPSSecondaryManeuverView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) CPTravelEstimates *currentTravelEstimates;
@property (nonatomic) unsigned long long guidanceStyle;
@property (retain, nonatomic) UIImageView *symbolView;
@property (retain, nonatomic) CPSAbridgableLabel *instructionLabel;
@property (nonatomic) double generatedWidth;
@property (readonly, nonatomic) CPManeuver *maneuver;
@property (nonatomic) double generatedHeight;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)horizontalInset;
- (id)accessibilityName:(id)a0;
- (void)generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize { double x0; double x1; })a0 force:(BOOL)a1;
- (id)initWithManeuver:(id)a0;

@end
