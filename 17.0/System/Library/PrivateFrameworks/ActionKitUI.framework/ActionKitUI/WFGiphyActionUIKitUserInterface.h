@class NSString;

@interface WFGiphyActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithContent:(id)a0 error:(id)a1;
- (void)giphyViewController:(id)a0 didSelectObjects:(id)a1;
- (void)giphyViewControllerDidCancel:(id)a0;
- (void)showWithQuery:(id)a0 selectMultiple:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
