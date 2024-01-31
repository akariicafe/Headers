@class UIImageView, NSTimer;

@interface CACMicStatusView : UIView

@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer;
@property (nonatomic) long long micStatus;
@property (nonatomic) double micPowerLevel;
@property (nonatomic) BOOL swapPalette;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)imageBundle;
- (void)drawBase;
- (void)stopRecordingAnimation;
- (void)transitionToIdle;
- (void)transitionToListening;
- (void)transitionToRecording;

@end
