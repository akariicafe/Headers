@class UILabel, NSLayoutConstraint;

@interface CACCorrectionsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)isAccessibilityElement;

@end
