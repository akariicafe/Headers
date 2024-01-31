@class NSString, UIView, TVRUITouchpadView, TVRUIDirectionalControlView;
@protocol _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider, TVRUITouchProcessor, TVRUITouchpadDelegate;

@interface TVRUITouchpadViewController : UIViewController <_TVRUIEventDelegate, UIPointerInteractionDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) TVRUITouchpadView *touchpadView;
@property (retain, nonatomic) TVRUIDirectionalControlView *directionalControlView;
@property (retain, nonatomic) id<TVRUIDevice> remoteDevice;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (nonatomic) long long touchpadMode;
@property (retain, nonatomic) id<TVRUITouchProcessor> touchProcessor;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<_TVRUIEventDelegate> eventDelegate;
@property (weak, nonatomic) id<TVRUITouchpadDelegate> touchDelegate;
@property (nonatomic, getter=isShowingControls) BOOL showControls;
@property (nonatomic, getter=areMediaControlsVisible) BOOL mediaControlsAreVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enabled;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)setDevice:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_updateViewState;
- (void)_darkenSystemColorsChanged:(id)a0;
- (void)_setupDirectionalArrowView;
- (void)_setupTouchpadView;
- (void)_simpleRemoteGesturesEnabled:(id)a0;
- (void)_toggleControlScale;
- (void)_transitionToAppropriateView;
- (void)_transitionToDirectionalControlView;
- (void)_transitionToTouchpadView;
- (void)transitonToViewForDeviceType:(long long)a0;

@end
