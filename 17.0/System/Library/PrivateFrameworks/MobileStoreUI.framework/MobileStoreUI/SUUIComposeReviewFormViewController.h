@class NSString, SUUIComposeReviewView, SUUIReviewMetadata;
@protocol SUUIComposeReviewFormDelegate;

@interface SUUIComposeReviewFormViewController : SUViewController <SUUIComposeReviewViewDelegate> {
    SUUIComposeReviewView *_composeView;
    SUUIReviewMetadata *_review;
}

@property (weak, nonatomic) id<SUUIComposeReviewFormDelegate> delegate;
@property (readonly, copy, nonatomic) SUUIReviewMetadata *editedReviewMetadata;
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

@end
