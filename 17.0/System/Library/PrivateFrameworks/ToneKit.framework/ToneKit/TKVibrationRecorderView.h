@class NSLayoutConstraint, NSString, UIToolbar, UILabel, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface;
@protocol NSCopying, TKVibrationRecorderStyleProvider, TKVibrationRecorderViewDelegate;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {
    id<TKVibrationRecorderStyleProvider> _styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_bottomLineToolbar;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_bottomLineToolbarBottomConstraint;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    BOOL _isReplayModeEnabled;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    BOOL _isAnimatingProgress;
    id<NSCopying> _displayLinkManagerObserverToken;
}

@property (weak, nonatomic) id<TKVibrationRecorderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (void)_updateProgress:(id)a0;
- (void)_enterWaitingModeWithAnimation:(BOOL)a0 enablePlayButton:(BOOL)a1;
- (void)_exitWaitingModeWithAnimation:(BOOL)a0;
- (void)_handleLeftButtonTapped:(id)a0;
- (void)_handleRightButtonTapped:(id)a0;
- (void)_handleScreenPeripheryInsetsDidChangeNotification:(id)a0;
- (void)_setLeftButtonIdentifier:(int)a0 enabled:(BOOL)a1 rightButtonIdentifier:(int)a2 enabled:(BOOL)a3 animated:(BOOL)a4;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)a0;
- (void)_updateBottomLineToolbarForPeripheryInsetsChange;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)a0;
- (void)exitRecordingModeWithPlayButtonEnabled:(BOOL)a0;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)a0;
- (void)startAnimatingProgress;
- (void)stopAnimatingProgress;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)a0;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)a0;
- (void)vibrationRecorderTouchSurface:(id)a0 didExitRecordingModeWithContextObject:(id)a1;
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)a0;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)a0;

@end
