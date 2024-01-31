@class NSLayoutConstraint, HKGradient, HKGradientView;

@interface WDMedicalRecordCategoryMinimizedSectionHeaderCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) HKGradientView *backgroundGradientView;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) HKGradient *gradient;

+ (id)_titleLabelFont;
+ (double)_pillBackgroundViewHeightConstraint;

- (void)traitCollectionDidChange:(id)a0;
- (double)_cornerRadius;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;

@end
