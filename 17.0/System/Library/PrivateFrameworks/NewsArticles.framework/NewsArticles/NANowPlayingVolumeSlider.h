@class NSString, UIWindowScene;

@interface NANowPlayingVolumeSlider : UIView <MPVolumeControllerDelegate, MPVolumeDisplaying> {
    void /* unknown type, empty encoding */ volumeController;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ volumeCommitTimer;
    void /* unknown type, empty encoding */ slider;
    void /* unknown type, empty encoding */ trackingColor;
    void /* unknown type, empty encoding */ volumeChangeHandler;
}

@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) BOOL onScreenForVolumeDisplay;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)accessibilityIncrement;
- (BOOL)isOnScreenForVolumeDisplay;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
