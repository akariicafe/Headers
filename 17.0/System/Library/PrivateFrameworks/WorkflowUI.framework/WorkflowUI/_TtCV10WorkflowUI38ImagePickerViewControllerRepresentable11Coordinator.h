@interface _TtCV10WorkflowUI38ImagePickerViewControllerRepresentable11Coordinator : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ dismiss;
    void /* unknown type, empty encoding */ _imageData;
}

- (id)init;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
