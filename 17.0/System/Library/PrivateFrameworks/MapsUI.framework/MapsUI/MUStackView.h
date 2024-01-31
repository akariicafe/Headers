@class NSArray, UIStackView;

@interface MUStackView : UIView {
    UIStackView *_stackView;
}

@property (nonatomic) long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) double spacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;

- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)addArrangedSubview:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setArrangedSubviews:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)_setupStackView;
- (void)addArrangedSubview:(id)a0 withCustomSpacing:(double)a1;

@end
