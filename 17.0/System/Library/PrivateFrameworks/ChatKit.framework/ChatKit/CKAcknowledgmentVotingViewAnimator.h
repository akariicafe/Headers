@class NSArray, UIView;
@protocol CKAcknowledgmentVotingViewAnimatorDelegate;

@interface CKAcknowledgmentVotingViewAnimator : NSObject

@property (retain, nonatomic) UIView *animationContainerView;
@property (copy, nonatomic) NSArray *sectionAnimators;
@property (copy, nonatomic) NSArray *animatorModelItems;
@property (weak, nonatomic) id<CKAcknowledgmentVotingViewAnimatorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0 animatorModelItems:(id)a1 acknowledgmentTypes:(id)a2;
- (void)startAnimationWithDelay:(double)a0;

@end
