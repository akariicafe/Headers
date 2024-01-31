@class NSString, PKContinuousButton;

@interface PKApplyPrimaryActionCell : UICollectionViewCell {
    PKContinuousButton *_button;
    BOOL _isTemplateLayout;
}

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL loading;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
