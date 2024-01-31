@class UIImageView, UIView;

@interface SFAccountIconSharingBadgeImageCoordinator : NSObject {
    UIImageView *_iconImageView;
    UIView *_parentView;
    UIImageView *_badgeImageView;
    BOOL _showsBadge;
    double _badgeDiameter;
    UIView *_badgeMaskView;
}

- (void)reset;
- (void)setShowsBadge:(BOOL)a0;
- (void).cxx_destruct;
- (id)_badgeImage;
- (double)_badgeMaskDiameter;
- (void)_createBadgeImageViewIfNecessary;
- (double)_iconImageViewHeight;
- (void)_layOutBadgeImageViewIfNecessary;
- (void)containerDidLayoutSubviews;
- (id)initWithIconImageView:(id)a0 iconDiameter:(double)a1 parentView:(id)a2;

@end
