@class NSString, UICreatePDFActivityItem, QLPreviewController;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate>

@property (retain, nonatomic) QLPreviewController *previewController;
@property (retain, nonatomic) UICreatePDFActivityItem *previewURLItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;

- (void)_cleanup;
- (void)previewControllerDidDismiss:(id)a0;
- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)activityViewController;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)excludedActivityTypesForPreviewController:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;
- (void)_setupQuickLookWithURL:(id)a0 activityItems:(id)a1 isPreview:(BOOL)a2;
- (id)dismissActionsForPreviewController:(id)a0;
- (BOOL)previewController:(id)a0 canEditItem:(id)a1;
- (BOOL)previewController:(id)a0 shouldSaveEditedItem:(id)a1;
- (BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)a0;
- (BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)a0;

@end
