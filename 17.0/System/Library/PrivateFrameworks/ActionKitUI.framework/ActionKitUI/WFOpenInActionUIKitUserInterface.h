@class NSString, UIDocumentInteractionController;

@interface WFOpenInActionUIKitUserInterface : WFActionUserInterface <UIDocumentInteractionControllerDelegate, WFOpenInActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UIDocumentInteractionController *documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)a0;
- (id)excludedActivityTypesForDocumentInteractionController:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithFile:(id)a0 contentManaged:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
