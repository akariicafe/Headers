@class UILabel;

@interface AAUIPaneHeaderView : AAUIOBHeaderView

@property (retain, nonatomic) UILabel *detailLabel;

- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setTitleText:(id)a0;
- (void)setDetailText:(id)a0;
- (void)layoutSubviews;
- (double)innerHeaderMaxY;

@end
