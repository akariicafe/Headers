@class NSArray;

@interface MagnifierSupport.DetectionModeView : UIView {
    void /* unknown type, empty encoding */ navBarDelegate;
    void /* unknown type, empty encoding */ arDelegate;
    void /* unknown type, empty encoding */ kRecordButtonSize;
    void /* unknown type, empty encoding */ kRecordButtonMargin;
    void /* unknown type, empty encoding */ kTapToRadarButtonMargin;
    void /* unknown type, empty encoding */ kTapToRadarButtonSize;
    void /* unknown type, empty encoding */ kRestartButtonSize;
    void /* unknown type, empty encoding */ kDebugButtonsBottom;
    void /* unknown type, empty encoding */ kSafeAreaBottom;
    void /* unknown type, empty encoding */ _recordButton;
    void /* unknown type, empty encoding */ _tapToRadarButton;
    void /* unknown type, empty encoding */ _restartButton;
    void /* unknown type, empty encoding */ edgeInsets;
    void /* unknown type, empty encoding */ _rotationSubscription;
    void /* unknown type, empty encoding */ buttonColumn;
    void /* unknown type, empty encoding */ landscapeButtonColumn;
    void /* unknown type, empty encoding */ buttonMap;
    void /* unknown type, empty encoding */ landscapeButtonMap;
    void /* unknown type, empty encoding */ captionLabel;
    void /* unknown type, empty encoding */ landscapeCaptionView;
    void /* unknown type, empty encoding */ landscapeCaptionLabel;
    void /* unknown type, empty encoding */ detectionLabel;
    void /* unknown type, empty encoding */ detectionMarqueeLabel;
    void /* unknown type, empty encoding */ kDetectionFont;
    void /* unknown type, empty encoding */ detectionControls;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityPerformMagicTap;
- (id)_accessibilitySupplementaryFooterViews;
- (void)toggleDetection;
- (void)didTapRecordButton:(id)a0;
- (void)didTapRestartButton:(id)a0;
- (void)didTapTapToRadarButton:(id)a0;
- (void)pauseSpeech;
- (void)toggleButtonColumnDisplay;

@end
