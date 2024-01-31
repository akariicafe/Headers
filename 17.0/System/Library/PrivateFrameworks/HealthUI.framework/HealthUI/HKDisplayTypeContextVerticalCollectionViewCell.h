@class UIStackView, NSLayoutConstraint, HKUIMetricColors, UILabel, HKDisplayTypeContextItem, UIButton;
@protocol HKDisplayTypeContextVerticalCollectionViewCellDelegate;

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueAndUnitLabel;
@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) HKUIMetricColors *currentMetricColors;
@property (retain, nonatomic) NSLayoutConstraint *minTitleWidthConstraint;
@property (weak, nonatomic) id<HKDisplayTypeContextVerticalCollectionViewCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)_titleAttributes;
- (void)infoButtonTapped:(id)a0;
- (void)_updateUI:(BOOL)a0;
- (id)_stackViewWithArrangedSubviews:(id)a0;
- (id)_attributedTitleWithAccessoryForContextItem:(id)a0 selected:(BOOL)a1;
- (id)_attributedValueAndUnitForContextItem:(id)a0 selected:(BOOL)a1;
- (id)_backgroundViewWithColor:(id)a0 userInteractive:(BOOL)a1;
- (void)_configureForContextItem:(id)a0;
- (void)_configureForTraitCollection:(id)a0;
- (id)_generateInfoButton;
- (id)_labelWithFont:(id)a0 allowsMultiline:(BOOL)a1 supportsDyanmicType:(BOOL)a2 layoutPriority:(float)a3;
- (void)_setLabel:(id)a0 allowsMultiline:(BOOL)a1 textAlignment:(long long)a2 layoutPriority:(float)a3;
- (id)_unitStringForContextItem:(id)a0 isUnitStringIncludedInValueString:(BOOL)a1;
- (void)_updateLabelsMultilineAndAlignmentForContentSizeCategoryAndUIDirection;
- (long long)_widthDesignationFromTraitCollection:(id)a0;
- (void)updateWithContextItem:(id)a0 mode:(long long)a1;

@end
