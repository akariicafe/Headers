@class UIView;

@interface ConversationKit.LocalParticipantControlsView : UIView {
    void /* unknown type, empty encoding */ videoMessageControls;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoMessageViewModel;
    void /* unknown type, empty encoding */ callAgainHUDView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinnerView;
    void /* unknown type, empty encoding */ hasInitializedShutterButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shutterButton;
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsLayoutGuide;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ effectsSelected;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ cinematicFramingIsEnabled;
    void /* unknown type, empty encoding */ reactionEffectGestureIsEnabled;
    void /* unknown type, empty encoding */ studioLightIsEnabled;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ _videoMessagingState;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ timerSink;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ effectsButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cameraBlurButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cinematicFramingButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ collapseButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rotateButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cameraFlipButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ reactionEffectGestureButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ studioLightButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ videoPauseButton;
@property (nonatomic, retain) UIView *shutterButton;

- (void)close;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)showCallDetails;
- (void)callBack;
- (void)handleCameraBlurTapped;
- (void)handleCameraFlipTapped;
- (void)handleCinematicFramingTapped;
- (void)handleCollapseButtonTapped;
- (void)handleEffectsTapped;
- (void)handleReactionEffectGestureTapped;
- (void)handleRotateButtonTapped;
- (void)handleShutterButtonTapped;
- (void)handleStudioLightTapped;
- (void)handleVideoMessageButtonTapped;

@end
