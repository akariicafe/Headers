@interface ICVisualAssetImportController : NSObject {
    void /* unknown type, empty encoding */ noteEditorViewController;
    void /* unknown type, empty encoding */ paperImageInsertionController;
    void /* unknown type, empty encoding */ captureController;
    void /* unknown type, empty encoding */ doNotAdvanceInsertionPointAfterInsertingAttachment;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1 forceAddToPaper:(BOOL)a2;
- (id)initWithNoteEditorViewController:(id)a0;
- (void)presentVisualAssetCaptureControllerWithDisableAutorotate:(BOOL)a0;
- (void)presentVisualAssetPickerController;

@end
