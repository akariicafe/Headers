@class UILabel, UIActivityIndicatorView;

@interface QLLoadingItemViewController : QLItemViewController {
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)canSwipeToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateLoadingLabel;

@end
