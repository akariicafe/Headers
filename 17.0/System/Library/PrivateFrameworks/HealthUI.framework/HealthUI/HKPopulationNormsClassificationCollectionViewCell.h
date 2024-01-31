@class UILabel, UIColor;

@interface HKPopulationNormsClassificationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *classificationLabel;
@property (nonatomic) BOOL isHighlighted;
@property (copy, nonatomic) UIColor *highlightColor;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupFonts;
- (void)setSoftHighlightState:(BOOL)a0;
- (void)setTitle:(id)a0 classificationIdentifier:(id)a1 highlighted:(BOOL)a2;

@end
