@class DOMNode, NSString, NSArray, UIDocumentMenuViewController, NSObject, UIViewController, UIWebDocumentView, UIImagePickerController, UIPopoverController;
@protocol WebOpenPanelResultListener, UIWebFileUploadPanelDelegate;

@interface UIWebFileUploadPanel : UIViewController <UIDocumentPickerDelegate, UIDocumentMenuDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {
    UIDocumentMenuViewController *_documentMenuController;
    UIImagePickerController *_imagePicker;
    UIViewController *_presentationViewController;
    UIPopoverController *_presentationPopover;
    struct CGPoint { double x; double y; } _interactionPoint;
    DOMNode *_interactionElement;
}

@property (copy, nonatomic) NSArray *mimeTypes;
@property (nonatomic) UIWebDocumentView *documentView;
@property (retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener;
@property (nonatomic) BOOL allowMultipleFiles;
@property (nonatomic) BOOL isUsingCamera;
@property (nonatomic) long long mediaCaptureType;
@property (nonatomic) id<UIWebFileUploadPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)_cancel;
- (void)dealloc;
- (void)present;
- (void)_showPhotoPickerWithSourceType:(long long)a0;
- (id)_displayStringForPhotos:(unsigned long long)a0 videos:(unsigned long long)a1;
- (id)_mediaTypesForPickerSourceType:(long long)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (id)_UTIsForMIMETypes;
- (void)_adjustMediaCaptureType;
- (id)_cameraButtonLabel;
- (void)_chooseFilename:(id)a0 displayString:(id)a1 iconImage:(id)a2;
- (void)_chooseFilenames:(id)a0 displayString:(id)a1 iconImage:(id)a2;
- (void)_dismissDisplayAnimated:(BOOL)a0;
- (void)_dispatchDidDismiss;
- (id)_documentPickerMenuMediaTypes;
- (id)_photoPickerWithSourceType:(long long)a0;
- (void)_presentForCurrentInterfaceIdiom:(id)a0;
- (void)_presentFullscreenViewController:(id)a0 animated:(BOOL)a1;
- (void)_presentPopoverWithContentViewController:(id)a0 animated:(BOOL)a1;
- (void)_processMediaInfoDictionaries:(id)a0 atIndex:(unsigned long long)a1 processedResults:(id)a2 processedImageCount:(unsigned long long)a3 processedVideoCount:(unsigned long long)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
- (void)_processMediaInfoDictionaries:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (void)_showDocumentPickerMenu;
- (BOOL)_string:(id)a0 hasPrefixCaseInsensitive:(id)a1;
- (void)_uploadItemForImageData:(id)a0 imageName:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)_uploadItemFromMediaInfo:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)documentMenu:(id)a0 didPickDocumentPicker:(id)a1;
- (void)documentMenuWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentAtURL:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (id)initWithResultListener:(id)a0 configuration:(id)a1 documentView:(id)a2;
- (void)popoverControllerDidDismissPopover:(id)a0;

@end
