@class NSString, WKWebView;
@protocol WKFullScreenViewControllerDelegate;

@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate> {
    BOOL _valid;
    struct WeakObjCPtr<id<WKFullScreenViewControllerDelegate>> { id m_weakReference; } _delegate;
    struct RetainPtr<UILongPressGestureRecognizer> { void *m_ptr; } _touchGestureRecognizer;
    struct RetainPtr<UIView> { void *m_ptr; } _animatingView;
    struct RetainPtr<UIStackView> { void *m_ptr; } _stackView;
    struct RetainPtr<UIStackView> { void *m_ptr; } _banner;
    struct RetainPtr<_WKInsetLabel> { void *m_ptr; } _bannerLabel;
    struct RetainPtr<_WKExtrinsicButton> { void *m_ptr; } _cancelButton;
    struct RetainPtr<_WKExtrinsicButton> { void *m_ptr; } _pipButton;
    struct RetainPtr<UIButton> { void *m_ptr; } _locationButton;
    struct RetainPtr<UILayoutGuide> { void *m_ptr; } _topGuide;
    struct RetainPtr<NSLayoutConstraint> { void *m_ptr; } _topConstraint;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _location;
    struct FullscreenTouchSecheuristic { double m_weight; struct FullscreenTouchSecheuristicParameters { struct Seconds { double m_value; } rampUpSpeed; struct Seconds { double m_value; } rampDownSpeed; double xWeight; double yWeight; double gamma; double gammaCutoff; double requiredScore; } m_parameters; struct CGSize { double width; double height; } m_size; struct Seconds { double m_value; } m_lastTouchTime; struct CGPoint { double x; double y; } m_lastTouchLocation; double m_lastScore; } _secheuristic;
    struct WKFullScreenViewControllerPlaybackSessionModelClient { void /* function */ **_vptr$PlaybackSessionModelClient; struct WeakObjCPtr<WKFullScreenViewController> { id m_weakReference; } m_parent; struct RefPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::RawPtrTraits<WebCore::PlaybackSessionInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::PlaybackSessionInterfaceAVKit>> { struct PlaybackSessionInterfaceAVKit *m_ptr; } m_interface; } _playbackClient;
    double _nonZeroStatusBarHeight;
    struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _supportedOrientations;
}

@property (weak, nonatomic) WKWebView *_webView;
@property (readonly, nonatomic) void *_manager;
@property (readonly, nonatomic) struct RectEdges<float> { struct array<float, 4UL> { float x0[4]; } x0; } _effectiveFullscreenInsets;
@property (weak, nonatomic) id<WKFullScreenViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)invalidate;
- (id).cxx_construct;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void *)_manager;
- (void)setSupportedOrientations:(unsigned long long)a0;
- (void)_touchDetected:(id)a0;
- (void)_cancelAction:(id)a0;
- (id)_createButtonWithExtrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct RectEdges<float> { struct array<float, 4UL> { float x0[4]; } x0; })_effectiveFullscreenInsets;
- (void)_showPhishingAlert;
- (void)_statusBarFrameDidChange:(id)a0;
- (void)_togglePiPAction:(id)a0;
- (void)_updateWebViewFullscreenInsets;
- (void)hideBanner;
- (void)hideUI;
- (void)resetSupportedOrientations;
- (void)setAnimatingViewAlpha:(double)a0;
- (void)showBanner;
- (void)showUI;
- (void)videoControlsManagerDidChange;

@end
