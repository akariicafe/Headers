@class DOCTagRenderingRequest, NSArray, UIColor;

@interface DOCChainedTagsView : UIView

@property (retain, nonatomic) DOCTagRenderingRequest *renderingRequest;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic) unsigned long long spacing;
@property (nonatomic) double tagDimension;
@property (nonatomic) struct CGPoint { double x; double y; } alignmentOffset;
@property (retain, nonatomic) UIColor *selectionOutlineColor;

- (id)init;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)doc_commonInit;
- (void)_reloadRenderingRequest;
- (void)setknockOutBorderWidth:(double)a0;

@end
