@class CAPackage, NSString, NSArray, CAStateController, CALayer, UIView, NSMutableArray;

@interface CKTipKitOnboardingCollectionViewCell : UICollectionViewCell <CNAvatarViewDelegate>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) NSArray *recommendedPinningConversations;
@property (retain, nonatomic) CAPackage *package;
@property (retain, nonatomic) CALayer *packageLayer;
@property (retain, nonatomic) CAStateController *stateController;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIView *micaView;
@property (retain, nonatomic) NSArray *layerNames;
@property (retain, nonatomic) NSMutableArray *avatarViews;
@property (retain, nonatomic) UIView *tipUIView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)didUpdateContentForAvatarView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimations;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)startAnimations;
- (void)willDisplayCell;
- (void)didEndDisplaying;
- (void)resetViews;
- (void)setTipUIView:(id)a0 withRecommendedPinningConversations:(id)a1;
- (void)stepThroughOnboardingTipAnimationForLayer:(id)a0;
- (void)updateTipAnimationIfNeeded;

@end
