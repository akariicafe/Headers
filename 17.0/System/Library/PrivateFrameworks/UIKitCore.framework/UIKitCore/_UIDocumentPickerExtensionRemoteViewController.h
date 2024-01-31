@class NSString;

@interface _UIDocumentPickerExtensionRemoteViewController : _UIDocumentPickerRemoteViewController <_UIDocumentPickerViewControllerExtensionHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_displayLocationMenu:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_doneButtonPressed;

@end
