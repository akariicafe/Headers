@class NSString, UIScrollView, SKUIComposeReviewNicknameView, SKUIBarButtonItemSubmitWithAnimation;
@protocol SKUIComposeReviewNicknameDelegate;

@interface SKUIComposeReviewNicknameViewController : SUViewController <SKUIComposeReviewNicknameDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIComposeReviewNicknameView *nicknameView;
@property (retain, nonatomic) SKUIBarButtonItemSubmitWithAnimation *submitButton;
@property (weak, nonatomic) id<SKUIComposeReviewNicknameDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)viewDidLoad;
- (void)_setupScrollView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_submit;
- (void)_setupBarButtonItems;
- (void)_setupNicknameView;
- (void)_updateConfirmState;
- (void)showSendAnimationInNavigationBarWithCompletion:(id /* block */)a0;

@end
