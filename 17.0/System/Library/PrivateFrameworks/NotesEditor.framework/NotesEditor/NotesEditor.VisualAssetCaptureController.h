@interface NotesEditor.VisualAssetCaptureController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ note;
}

- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
