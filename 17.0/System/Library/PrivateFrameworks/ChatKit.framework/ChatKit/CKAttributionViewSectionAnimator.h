@class UICollectionViewLayoutAttributes, CKAttributionCountView, CKAttributionImageView, CKAttributionViewModelObject, UIView, NSIndexPath, CNAvatarView;

@interface CKAttributionViewSectionAnimator : NSObject

@property (readonly, nonatomic) CNAvatarView *avatarView;
@property (readonly, nonatomic) CKAttributionCountView *voteCountLabel;
@property (readonly, nonatomic) CKAttributionImageView *iconView;
@property (readonly, nonatomic) UIView *animationContainerView;
@property (readonly, nonatomic) CKAttributionViewModelObject *modelObject;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *avatarViewAttr;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *voteCountViewAttr;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *iconViewAttr;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateAckIconViewDelayTime:(double)a0;
- (void)_updateAvatarViewDelayTime:(double)a0;
- (void)_updateVoteCountViewDelayTime:(double)a0;
- (void)animateInIconView:(double)a0;
- (id)initWithCollectionView:(id)a0 indexPath:(id)a1 modelObject:(id)a2 animationContainerView:(id)a3;
- (void)setInsertAvatarDelayTime:(double)a0;

@end
