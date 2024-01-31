@class UIImageView, UITapGestureRecognizer, HKSelectedRangeLabel;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView

@property (retain, nonatomic) UIImageView *forwardChevronView;
@property (retain, nonatomic) UITapGestureRecognizer *tapOutRecognizer;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) HKSelectedRangeLabel *keyLabel;
@property (readonly, nonatomic) HKSelectedRangeLabel *valueLabel;
@property (copy, nonatomic) id /* block */ tapOutBlock;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_horizontalIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })_compressedKeySize;
- (void)_installForwardChevronView;
- (void)_layoutSubviewsHorizontally;
- (void)_layoutSubviewsVertically;
- (void)_removeForwardChevronView;
- (struct CGSize { double x0; double x1; })_verticalInstrinsicContentSize;
- (void)handleTapOutGesture:(id)a0;

@end
