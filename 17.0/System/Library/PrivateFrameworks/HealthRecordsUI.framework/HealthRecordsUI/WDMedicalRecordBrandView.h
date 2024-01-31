@class UIStackView, WDBrandLogoView, WDClinicalSourcesDataProvider, UIView, UILabel;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordBrandView : UIView

@property (readonly, nonatomic) id<HKClinicalBrandable> brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIView *logoAlignedContentView;
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView;
@property (readonly, nonatomic) UILabel *brandTitleLabel;
@property (readonly, nonatomic) UILabel *brandSubtitleLabel;
@property (readonly, nonatomic) UILabel *brandDetailLabel;
@property (nonatomic) double logoSize;

- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelVisibility;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)_setupSubviews;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;

@end
