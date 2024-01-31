@class SearchUIHomeScreenAppIconView;

@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell

@property (retain) SearchUIHomeScreenAppIconView *appIconView;

- (long long)_focusItemDeferralMode;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)_disableRasterizeInAnimations;
- (void)updateWithResult:(id)a0;

@end
