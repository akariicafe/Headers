@class QLPreviewContext;

@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate> {
    QLPreviewContext *_context;
    id /* block */ _completionBlock;
}

- (void)invalidate;
- (void)loadView;
- (void).cxx_destruct;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (BOOL)canSwipeToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (id)passwordView;

@end
