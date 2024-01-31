@class NSString, UIWindowScene;

@interface SeymourUI.VolumeSlider : UIView <MPVolumeControllerDelegate, MPVolumeDisplaying> {
    void /* unknown type, empty encoding */ onVolumeChanged;
    void /* unknown type, empty encoding */ sliderView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ styleProvider;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ isTracking;
    void /* unknown type, empty encoding */ route;
    void /* unknown type, empty encoding */ volumeCommitTimer;
    void /* unknown type, empty encoding */ volumeController;
}

@property (nonatomic, readonly) BOOL onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (BOOL)isOnScreenForVolumeDisplay;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
