@protocol MUPhotoOptionsMenuButtonDelegate;

@interface MUPhotoOptionsMenuButton : UIButton

@property (weak, nonatomic) id<MUPhotoOptionsMenuButtonDelegate> delegate;

+ (BOOL)_supportsCamera;
+ (unsigned long long)_numberOfSupportedSourceTypes;
+ (BOOL)_supportsPhotoLibrary;
+ (id)buttonWithDelegate:(id)a0;
+ (id)menuForPhotoOptionsMenuButtonWithCameraCompletion:(id /* block */)a0 libraryCompletion:(id /* block */)a1;
+ (id)menuForPhotoOptionsMenuButtonWithTitle:(id)a0 symbol:(id)a1 cameraCompletion:(id /* block */)a2 libraryCompletion:(id /* block */)a3;
+ (long long)preferredEntryPoint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_captureUserAction:(int)a0;
- (void)_didSelectAddFromLibrary;
- (void)_didSelectTakePhoto;
- (void)_didTapOnMenuButton;
- (void)_setActionMenu;
- (void)_setTouchEvent;

@end
