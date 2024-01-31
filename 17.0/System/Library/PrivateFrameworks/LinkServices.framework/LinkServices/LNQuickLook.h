@class NSArray, NSMutableDictionary, NSString, QLPreviewController, UIViewController;

@interface LNQuickLook : NSObject <QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableDictionary *editedPreviewItems;
@property (retain, nonatomic) QLPreviewController *previewController;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting;
@property (nonatomic) long long editingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewControllerDidDismiss:(id)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void)finishWithError:(id)a0;
- (void)previewController:(id)a0 didSaveEditedCopyOfPreviewItem:(id)a1 atURL:(id)a2;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (id)editedItems;
- (void)presentOverViewController:(id)a0 completionHandler:(id /* block */)a1;

@end
