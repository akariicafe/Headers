@class NSBundle, MPButton, MPVolumeController, MTVisualStylingProvider, MTMaterialView;

@interface MediaControlsRelativeVolumeStepper : UIView

@property (retain, nonatomic) MTMaterialView *increaseBackground;
@property (retain, nonatomic) MTMaterialView *decreaseBackground;
@property (retain, nonatomic) MPButton *increaseButton;
@property (retain, nonatomic) MPButton *decreaseButton;
@property (retain, nonatomic) NSBundle *mediaControlsBundle;
@property (retain, nonatomic) MPVolumeController *volumeController;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (void)decreaseButtonHoldReleased:(id)a0;
- (void)increaseTouchUpInside:(id)a0;
- (void)increaseButtonHoldReleased:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)decreaseButtonHoldBegan:(id)a0;
- (void)increaseButtonHoldBegan:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)decreaseTouchUpInside:(id)a0;

@end
