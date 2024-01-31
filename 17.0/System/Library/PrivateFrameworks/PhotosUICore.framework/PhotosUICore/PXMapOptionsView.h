@interface PXMapOptionsView : UIView {
    void /* unknown type, empty encoding */ platterContainerView;
    void /* unknown type, empty encoding */ topPlatterView;
    void /* unknown type, empty encoding */ platterSeparatorView;
    void /* unknown type, empty encoding */ userLocationButton;
    void /* unknown type, empty encoding */ userLocationContainerView;
    void /* unknown type, empty encoding */ mapSettingsButton;
    void /* unknown type, empty encoding */ perspectiveButtonPlatterView;
    void /* unknown type, empty encoding */ perspectiveButtonContainerView;
    void /* unknown type, empty encoding */ perspective2dButton;
    void /* unknown type, empty encoding */ perspective3dButton;
    void /* unknown type, empty encoding */ compassButton;
    void /* unknown type, empty encoding */ perspectiveButtonState;
}

@property (nonatomic) void /* unknown type, empty encoding */ mapStyle;
@property (nonatomic) void /* unknown type, empty encoding */ enableUserTrackingButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMapView:(id)a0;
- (void)didTapMapModeSettingsButton;
- (void)didTapPerspective2DButtonWithSender:(id)a0;
- (void)didTapPerspective3DButtonWithSender:(id)a0;
- (void)setPerspectiveButtonState:(unsigned long long)a0 animated:(BOOL)a1;

@end
