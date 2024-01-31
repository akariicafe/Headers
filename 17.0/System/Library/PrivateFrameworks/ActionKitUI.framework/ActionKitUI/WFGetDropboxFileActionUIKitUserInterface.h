@class NSString;

@interface WFGetDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFGetDropboxFileActionUserInterface, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithResults:(id)a0 error:(id)a1;
- (id)selectedStorageServiceForName:(id)a0;
- (void)showWithServiceName:(id)a0 directoryPath:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
