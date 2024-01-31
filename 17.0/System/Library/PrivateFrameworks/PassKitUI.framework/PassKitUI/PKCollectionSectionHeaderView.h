@class NSString, UIFont, UILabel;

@interface PKCollectionSectionHeaderView : UICollectionViewListCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIFont *primaryFont;
@property (copy, nonatomic) UIFont *secondaryFont;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_resetFont;

@end
