@class WBSWebExtensionsController;
@protocol WBSAppReviewPromptPresenting;

@interface WBSAppReviewPromptManager : NSObject {
    WBSWebExtensionsController *_webExtensionsController;
}

@property (weak, nonatomic) id<WBSAppReviewPromptPresenting> presenter;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldPromptForReview;
- (void)_presentIfNeeded;
- (void)didDismissReaderWithScrollPercentage:(double)a0 dateReaderOpened:(id)a1;
- (id)initWithPresenter:(id)a0 extensionsController:(id)a1;

@end
