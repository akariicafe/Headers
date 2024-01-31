@class SKUIReviewMetadata, NSString, SKUIComposeReviewView, SKUIBarButtonItemSubmitWithAnimation;
@protocol SKUIComposeReviewFormDelegate;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {
    SKUIBarButtonItemSubmitWithAnimation *_submitNavButton;
    SKUIComposeReviewView *_composeView;
    SKUIReviewMetadata *_review;
}

@property (weak, nonatomic) id<SKUIComposeReviewFormDelegate> delegate;
@property (readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)setRating:(float)a0;
- (void)_submit;
- (void)composeReviewViewValidityChanged:(id)a0;
- (id)initWithReviewMetadata:(id)a0;
- (void)showSendAnimationInNavigationBarWithCompletion:(id /* block */)a0;

@end
