@interface DOCBorderedFittingImageView : DOCFittingImageView {
    double _decorationCornerRadius;
}

@property (nonatomic) BOOL addDecoration;
@property (nonatomic) double decorationCornerRadius;

- (void)layoutSubviews;
- (void)initCommon;
- (void)setFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateImage:(id)a0 addDecoration:(BOOL)a1;

@end
