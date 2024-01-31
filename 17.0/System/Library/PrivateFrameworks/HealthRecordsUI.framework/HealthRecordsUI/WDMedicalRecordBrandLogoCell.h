@class WDBrandLogoView, UIImageView, WDMedicalRecordBrandView, WDClinicalSourcesDataProvider;
@protocol HKClinicalBrandable;

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) UIImageView *disclosureChevronView;
@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) WDMedicalRecordBrandView *brandView;
@property (readonly, nonatomic) id<HKClinicalBrandable> brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property (nonatomic) double logoSize;
@property (nonatomic, getter=showsDisclosureChevron) BOOL showDisclosureChevron;

- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)setUpConstraints;
- (id)_contentViewMarginsGuide;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;

@end
