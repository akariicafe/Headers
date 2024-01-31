@class NSString;

@interface _UIDocumentViewControllerPickerDelegate : NSObject <UIDocumentPickerDelegate> {
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateForPicker:(id)a0 completionHandler:(id /* block */)a1;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_attachToPicker:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;

@end
