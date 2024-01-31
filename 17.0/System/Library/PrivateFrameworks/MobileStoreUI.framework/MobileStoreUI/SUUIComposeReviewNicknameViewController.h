@class UIScrollView, SUUIComposeReviewNicknameView, NSString;
@protocol SUUIComposeReviewNicknameDelegate;

@interface SUUIComposeReviewNicknameViewController : SUViewController <SUUIComposeReviewNicknameDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) SUUIComposeReviewNicknameView *nicknameView;
@property (weak, nonatomic) id<SUUIComposeReviewNicknameDelegate> delegate;
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

@end
