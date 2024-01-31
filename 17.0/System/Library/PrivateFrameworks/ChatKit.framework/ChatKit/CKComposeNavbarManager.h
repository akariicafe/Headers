@class CKComposeNavbarManagerContentView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIView, UIButton;

@interface CKComposeNavbarManager : NSObject

@property (retain, nonatomic) CKComposeNavbarManagerContentView *composeContentView;
@property (retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;
@property (retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIView *customStatusBackgroundView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;
- (void)_setupDefaultNavbarCanvasViewControllerForBusinessChat:(BOOL)a0;
- (void)commitTransitionAnimationWithConversation:(id)a0 shouldShowBackButtonView:(BOOL)a1;
- (id)initForBusinessChat:(BOOL)a0;
- (void)setCanvasViewControllerDelegate:(id)a0;
- (void)updateContentsForConversation:(id)a0;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;

@end
