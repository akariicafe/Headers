@class PKPassLibrary, UIImageView, PKPayLaterFinancingPlanFundingSource, UILabel;

@interface PKPayLaterFinancingPlanFundingSourceCell : UICollectionViewListCell {
    PKPassLibrary *_passLibrary;
    UIImageView *_imageView;
    struct CGSize { double width; double height; } _iconSize;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;

- (id)init;
- (void)_updateText;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_populateIconForFundingSource;

@end
