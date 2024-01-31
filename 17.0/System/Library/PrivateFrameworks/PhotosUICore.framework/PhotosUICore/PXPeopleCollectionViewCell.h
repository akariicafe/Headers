@class NSUUID, NSString, UIImageView, UIImage, UILabel, UIView, PXPeopleBadgeView;
@protocol PXPeopleCollectionViewCellDelegate;

@interface PXPeopleCollectionViewCell : UICollectionViewCell <PXPeopleBadgeViewDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unitRect;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *highlightOverlayView;
@property (readonly, nonatomic) PXPeopleBadgeView *badgeView;
@property (readonly, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double textAlpha;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic) unsigned long long selectionStyle;
@property (weak, nonatomic) id<PXPeopleCollectionViewCellDelegate> peopleCellDelegate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL ppt_fullImageLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)focusEffect;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)toggleFavorite:(id)a0;
- (struct CGPoint { double x0; double x1; })_computeCircumferenceMultipliersForAngle:(double)a0;
- (void)_updateBadgeViewState;
- (void)_updateFocusRingForced:(BOOL)a0;
- (void)_updateSelection;
- (void)_updateTitleAndFavoriteBadgeForLayoutChange;
- (void)favoriteTappedForBadgeView:(id)a0;
- (void)setImage:(id)a0 normalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)unfavoriteTappedForBadgeView:(id)a0;

@end
