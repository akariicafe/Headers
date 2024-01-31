@class UIColor, PXPeopleBadgeViewConfiguration, UIImageSymbolConfiguration, UIButton;
@protocol PXPeopleBadgeViewDelegate;

@interface PXPeopleBadgeView : UIView <PXGReusableView>

@property (readonly, nonatomic) UIButton *legacyFavoriteButton;
@property (readonly, nonatomic) UIButton *legacyFavoriteBackground;
@property (readonly, nonatomic) UIButton *legacyUnfavoriteButton;
@property (readonly, nonatomic) UIButton *checkmarkView;
@property (readonly, nonatomic) UIButton *checkmarkCircle;
@property (readonly, nonatomic) UIButton *favoriteButton;
@property (readonly, nonatomic) UIButton *unfavoriteButton;
@property (readonly, nonatomic) UIColor *currentTintColor;
@property (readonly, nonatomic) UIImageSymbolConfiguration *smallConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *largeConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *favoriteConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *unfavoriteConfiguration;
@property (readonly, nonatomic) UIImageSymbolConfiguration *checkmarkConfiguration;
@property (weak, nonatomic) id<PXPeopleBadgeViewDelegate> badgeViewDelegate;
@property (copy, nonatomic) PXPeopleBadgeViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_currentTintColor;
- (void)favoriteTapped:(id)a0;
- (id)_checkmarkConfiguration;
- (void)_createCheckmarkBadgeWithDisplayScale:(double)a0;
- (void)_createFavoriteBadgeWithDisplayScale:(double)a0;
- (id)_createHeartBadgeWithDisplayScale:(double)a0 isFavorite:(BOOL)a1;
- (void)_createLegacyDisabledFavoriteBadgeWithDisplayScale:(double)a0;
- (void)_createLegacyDisabledUnfavoriteBadgeWithDisplayScale:(double)a0;
- (void)_createLegacyEnabledFavoriteBadgeWithDisplayScale:(double)a0;
- (void)_createLegacyEnabledUnfavoriteBadgeWithDisplayScale:(double)a0;
- (void)_createUnfavoriteBadgeWithDisplayScale:(double)a0;
- (id)_favoriteConfiguration;
- (void)_hideAllViews;
- (id)_largeConfiguration;
- (id)_smallConfiguration;
- (id)_unfavoriteConfiguration;
- (void)unfavoriteTapped:(id)a0;

@end
