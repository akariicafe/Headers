@class UIFont, UIImageView, MUBrowseCategoryItem, UILabel, NSLayoutConstraint;

@interface MUBrowseCategoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *highlightedImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint;
@property (retain, nonatomic) MUBrowseCategoryItem *browseItem;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) UIFont *preferredTitleLabelFont;

+ (id)reuseIdentifier;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setTitleLabelTextColor:(id)a0;

@end
