@class WFImagePickerController, WFContentCollection, WFTakePhotoImmediateModeManager, NSString, NSMutableArray;

@interface WFTakePhotoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface, WFTakePhotoImmediateModeDelegate>

@property (nonatomic) BOOL showPreview;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFContentCollection *outputCollection;
@property (nonatomic) unsigned long long remainingPhotos;
@property (retain, nonatomic) NSMutableArray *outputImages;
@property (nonatomic) long long device;
@property (weak, nonatomic) WFImagePickerController *pickerController;
@property (retain, nonatomic) WFTakePhotoImmediateModeManager *immediateModeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

+ (long long)cameraDeviceFromString:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)prefersModalPresentation;
- (void)addImageDataToOutput:(id)a0;
- (id)initWithUserInterfaceType:(id)a0 attribution:(id)a1;
- (void)manager:(id)a0 didFinishWithPhoto:(id)a1 error:(id)a2;
- (void)managerDidBecomeReady:(id)a0;
- (void)setUpImmediateInterfaceWithAttribution:(id)a0;
- (void)setUpTapInterface;
- (id)setupControllerWithOverlay:(id)a0;
- (void)showWithCameraPreview:(BOOL)a0 photoCount:(unsigned long long)a1 device:(id)a2 shortcutAttribution:(id)a3 completionHandler:(id /* block */)a4;

@end
