@class NSURL, NSArray, NSString;

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController>

@property (copy, nonatomic, setter=_setUploadURL:) NSURL *originalURL;
@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *validTypes;
@property (copy, nonatomic, setter=_setProviderIdentifier:) NSString *providerIdentifier;
@property (copy, nonatomic, setter=_setDocumentStorageURL:) NSURL *documentStorageURL;
@property (nonatomic, setter=_setPickerMode:) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setUploadURLWrapper:(id)a0;
- (void)dismissGrantingAccessToURL:(id)a0;
- (void)prepareForDocumentSelectionInMode:(unsigned long long)a0;
- (void)prepareForPresentationInMode:(unsigned long long)a0;

@end
