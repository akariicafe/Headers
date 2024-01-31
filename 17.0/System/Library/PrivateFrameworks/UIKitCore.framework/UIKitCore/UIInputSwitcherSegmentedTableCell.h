@class UIInputSwitcherSegmentControl;

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell

@property (readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl;

+ (struct CGSize { double x0; double x1; })preferredSizeWithSegmentCount:(unsigned long long)a0;

- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setUsesDarkTheme:(BOOL)a0;

@end
