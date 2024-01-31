@class NSArray;

@interface HUILiveListenLevelIndicator : UIView

@property (class, readonly, nonatomic) double controlWidth;

@property (retain, nonatomic) NSArray *levelIndicators;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateLevel:(double)a0;

@end
