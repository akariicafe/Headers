@class NSString;

@interface WFChooseFromListActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFChooseFromListActionUserInterface, WFChooseImageViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)chooseImageControllerDidCancel:(id)a0;
- (void)chooseImageController:(id)a0 didSelectItems:(id)a1;
- (void)finishWithContent:(id)a0 error:(id)a1;
- (void)showImagesWithPrompt:(id)a0 canSelectAll:(BOOL)a1 canSelectMultiple:(BOOL)a2 inputItems:(id)a3 completionHandler:(id /* block */)a4;

@end
