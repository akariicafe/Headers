@class SKInvocationQueueProxy, _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController;
@protocol SKUIServiceComposeReviewViewController, SKComposeReviewDelegate;

@interface SKComposeReviewViewController : UIViewController {
    _UIAsyncInvocation *_cancelRequest;
    NSURL *_compositionURL;
    id /* block */ _prepareBlock;
    SKRemoteComposeReviewViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;
}

@property (weak, nonatomic) id<SKComposeReviewDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:(BOOL)a0 error:(id)a1;
- (void)_didPrepareWithResult:(BOOL)a0 error:(id)a1;
- (void)_tearDownAfterError:(id)a0;
- (id)initWithCompositionURL:(id)a0;
- (void)prepareWithCompletionBlock:(id /* block */)a0;

@end
