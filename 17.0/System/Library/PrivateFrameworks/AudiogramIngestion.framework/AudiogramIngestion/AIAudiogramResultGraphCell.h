@class HKAudiogramSample, HKAudiogramChartViewController;

@interface AIAudiogramResultGraphCell : UITableViewCell

@property (retain, nonatomic) HKAudiogramChartViewController *audiogramChart;
@property (retain, nonatomic) HKAudiogramSample *audiogram;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isAccessibilityElement;

@end
