@class NSArray, NSMutableDictionary, NSString;

@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface>

@property (retain, nonatomic) NSArray *previewItems;
@property (retain, nonatomic) NSMutableDictionary *editedPreviewItems;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)previewControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void)finishWithError:(id)a0;
- (void)previewController:(id)a0 didSaveEditedCopyOfPreviewItem:(id)a1 atURL:(id)a2;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (id)editedItems;
- (void)showWithPreviewItems:(id)a0 completionHandler:(id /* block */)a1;

@end
