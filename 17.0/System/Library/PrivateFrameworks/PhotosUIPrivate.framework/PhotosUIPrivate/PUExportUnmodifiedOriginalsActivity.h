@class NSString, UIDocumentPickerViewController;

@interface PUExportUnmodifiedOriginalsActivity : PXActivity <UIDocumentPickerDelegate>

@property (retain, nonatomic) UIDocumentPickerViewController *cachedDocumentPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (id)_createDocumentPickerViewControllerForExportedItems:(id)a0;

@end
