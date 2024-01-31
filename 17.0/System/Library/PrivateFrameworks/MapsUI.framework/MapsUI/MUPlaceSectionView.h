@class MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceSectionHeaderView, UILayoutGuide, MUHairlineView, MULinkView;

@interface MUPlaceSectionView : UIView <MUActivityObserving> {
    MUPlaceSectionHeaderView *_headerView;
    UILayoutGuide *_contentLayoutGuide;
    MUHairlineView *_hairlineView;
    MULinkView *_footerView;
    BOOL _alwaysHideSeparators;
}

@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *headerViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *footerViewModel;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1;
+ (id)cardShadowSectionViewForContentView:(id)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2 alwaysInsetContentView:(BOOL)a3;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)configureWithSectionController:(id)a0;
- (void)_updateForContentSizeChange;
- (void)attachViewToContentView:(id)a0;
- (void)hideBottomSeperator;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1;
- (id)initWithStyle:(long long)a0 alwaysHideSeparators:(BOOL)a1 sectionHeaderViewModel:(id)a2 sectionFooterViewModel:(id)a3;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1;
- (id)initWithStyle:(long long)a0 sectionHeaderViewModel:(id)a1 sectionFooterViewModel:(id)a2;
- (void)setHeaderAXIdentifierWithBaseString:(id)a0;

@end
