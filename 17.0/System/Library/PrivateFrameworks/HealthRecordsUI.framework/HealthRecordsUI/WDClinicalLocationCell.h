@class UIStackView, NSString, WDBrandLogoView, WDClinicalSourcesDataProvider, UILabel;
@protocol HKClinicalBrandable;

@interface WDClinicalLocationCell : UITableViewCell

@property (class, readonly, copy, nonatomic) NSString *defaultReuseIdentifier;

@property (readonly, nonatomic) id<HKClinicalBrandable> brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) UIStackView *stackView;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateForCurrentSizeCategory;
- (void)_setupSubviews;
- (void)_setUpConstraints;
- (void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
- (void)_updateContentWithBrandable:(id)a0 dataProvider:(id)a1;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)setBrandable:(id)a0 dataProvider:(id)a1;
- (void)willDisplay;

@end
