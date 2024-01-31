@class NSURL, NSString, SKComposeReviewViewController;

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate> {
    SKComposeReviewViewController *_remoteViewController;
}

@property (readonly, nonatomic) NSURL *compositionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)initWithCompositionURL:(id)a0;
- (void)prepareWithCompletionBlock:(id /* block */)a0;
- (void)reviewComposeViewControllerDidFinish:(id)a0;
- (void)_showRemoteView;
- (id)copyScriptViewController;

@end
