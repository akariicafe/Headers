@class NSError, QLItem;

@interface QLErrorItemViewController : QLItemViewController

@property (retain) QLItem *previewItem;
@property (retain, nonatomic) NSError *error;

- (void)loadView;
- (void).cxx_destruct;
- (BOOL)canSwipeToDismiss;
- (id)errorView;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateLabelsWithCurrentErrorIfNeeded;

@end
