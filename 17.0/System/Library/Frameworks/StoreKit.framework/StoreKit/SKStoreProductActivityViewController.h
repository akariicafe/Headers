@class SKInvocationQueueProxy, _UIAsyncInvocation, NSDictionary, NSString, SKRemoteProductActivityViewController;
@protocol SKStoreProductActivityViewControllerDelegate, SKUIServiceProductActivityViewController;

@interface SKStoreProductActivityViewController : UIViewController {
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    NSString *_logKey;
}

@property (weak, nonatomic) id<SKStoreProductActivityViewControllerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_viewTapped:(id)a0;
- (void)_didFinishWithResult:(unsigned long long)a0 error:(id)a1;

@end
