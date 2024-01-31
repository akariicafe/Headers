@class UISlider, UILabel;
@protocol WFTriggerPercentageSliderCellDelegate;

@interface WFTriggerPercentageSliderCell : UITableViewCell

@property (readonly, nonatomic) UISlider *slider;
@property (readonly, nonatomic) UILabel *label;
@property (nonatomic) double stepValue;
@property (nonatomic) double sliderValue;
@property (weak, nonatomic) id<WFTriggerPercentageSliderCellDelegate> delegate;

- (void)sliderValueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithInitialValue:(double)a0 maximumValue:(double)a1 minimumValue:(double)a2 stepValue:(double)a3;
- (double)roundValue:(double)a0 toNearestStep:(double)a1;

@end
