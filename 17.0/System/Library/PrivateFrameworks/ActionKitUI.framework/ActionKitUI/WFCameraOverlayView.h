@class WFVolumeButtonManager, WFCameraFlashButton, UIImagePickerController, WFCameraShutterButton, UIView, UILabel, UIButton;

@interface WFCameraOverlayView : UIView

@property (weak, nonatomic) WFCameraFlashButton *flashButton;
@property (weak, nonatomic) UIView *flashView;
@property (weak, nonatomic) UIButton *flipButton;
@property (weak, nonatomic) UILabel *photosLabel;
@property (retain, nonatomic) WFVolumeButtonManager *volumeButtonManager;
@property (weak, nonatomic) UIImagePickerController *pickerController;
@property (weak, nonatomic) WFCameraShutterButton *shutterButton;
@property (nonatomic) long long takenPhotos;
@property (nonatomic) long long totalPhotos;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cancelPressed;
- (void)flashValueChanged;
- (void)flipPressed;
- (void)shutterPressed;
- (void)updateButtons;
- (void)updateFlipButton;
- (void)updatePhotosLabel;

@end
