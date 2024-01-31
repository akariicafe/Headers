@class SUUIFacebookLikeStatus, SUUIReviewsFacebookView, SUUIClientContext;
@protocol SUUIReviewsFacebookViewControllerDelegate;

@interface SUUIReviewsFacebookViewController : UIViewController {
    SUUIReviewsFacebookView *_facebookView;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (copy, nonatomic) SUUIFacebookLikeStatus *facebookLikeStatus;
@property (weak, nonatomic) id<SUUIReviewsFacebookViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)_changeStatusToUserLiked:(BOOL)a0;
- (void)_reloadFacebookView;
- (void)_toggleLike:(id)a0;

@end
