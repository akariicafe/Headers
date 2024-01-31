@interface PaperKit.ToolPickerController : NSObject <AXSSImageDescriptionViewControllerDelegate, UIPopoverPresentationControllerDelegate, _UIStickerPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ stickerPickerVC;
    void /* unknown type, empty encoding */ imageDescriptionVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textToolListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shapeButtonListViewController;
}

- (void)imageDescriptionViewControllerDidCancel:(id)a0;
- (void)imageDescriptionViewControllerDidDismiss:(id)a0;
- (void)imageDescriptionViewControllerDidSave:(id)a0;
- (id)init;
- (void)dealloc;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)insertStickerFromItemProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)toolPickerWillShowNotification:(id)a0;
- (void)toolPickerDidHideNotification:(id)a0;

@end
