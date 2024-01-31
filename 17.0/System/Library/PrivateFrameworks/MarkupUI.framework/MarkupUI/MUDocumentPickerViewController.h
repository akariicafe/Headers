@class NSString;

@interface MUDocumentPickerViewController : UIDocumentPickerViewController <UIAdaptivePresentationControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;

@end
