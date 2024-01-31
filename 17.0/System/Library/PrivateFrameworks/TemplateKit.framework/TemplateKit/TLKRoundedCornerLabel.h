@class TLKLabel, UIView;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void)tlk_updateForAppearance:(id)a0;
- (id)initWithProminence:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)allowsVibrancy;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (void)updateFont;

@end
