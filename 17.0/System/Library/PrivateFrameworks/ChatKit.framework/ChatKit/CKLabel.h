@class UIImageView, NSSet;

@interface CKLabel : UILabel

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (nonatomic) BOOL shouldHaveRotatedTitleIconImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textRectForAccessoryImageView;
@property (nonatomic) long long titleIconImageType;
@property (retain, nonatomic) NSSet *titleIconImageTypesSupportingRotation;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isLTR;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_rotateTitleIconImageView;
- (BOOL)hasAccessoryImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectToDrawTextInForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShouldHaveRotatedTitleIconImage:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeOfAccessoryImageView;
- (BOOL)titleIconImageTypeSupportsRotation:(long long)a0;

@end
