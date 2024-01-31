@class NSString, SFPrivateBrowsingExplanationModuleContentView, SFBannerBackgroundView;

@interface SFPrivateBrowsingExplanationModuleCell : UICollectionViewCell {
    SFBannerBackgroundView *_backgroundView;
    SFPrivateBrowsingExplanationModuleContentView *_explanationView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

- (void)configureUsingBanner:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layoutSubviews;
- (void)_setExplanationView:(id)a0 animated:(BOOL)a1;

@end
