@interface SwiftUI.FileImportExportBridge : NSObject <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ presentationState;
    void /* unknown type, empty encoding */ presentedPicker;
}

- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
