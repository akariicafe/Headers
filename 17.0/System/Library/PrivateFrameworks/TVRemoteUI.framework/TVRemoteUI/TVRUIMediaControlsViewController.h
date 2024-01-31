@class NSArray, NSString, TVRUICaptionsButton, TVRUIChannelButton, TVRUIButton;
@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIMediaControlsViewController : UIViewController <TVRUIRemoteViewProvider>

@property (retain, nonatomic) TVRUIButton *skipForwardButton;
@property (retain, nonatomic) TVRUIButton *skipBackwardButton;
@property (retain, nonatomic) TVRUICaptionsButton *captionsButton;
@property (retain, nonatomic) TVRUIButton *guideButton;
@property (retain, nonatomic) TVRUIChannelButton *channelButton;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (retain, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL wantsFastForwardButton;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonActionsDelegate;
@property (nonatomic, getter=isShowingSkipControls) BOOL showSkipControls;
@property (nonatomic, getter=isShowingCaptionControl) BOOL showCaptionControl;
@property (nonatomic, getter=isShowingChannelGuideButtons) BOOL showChannelGuideButtons;
@property (readonly, nonatomic) BOOL isChannelButtonExpanded;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)_updateViewState;
- (void)_buttonReleased:(id)a0;
- (void)_createButtons;
- (void)_captionsTapped:(id)a0;
- (id)_channelUpButtonView;
- (void)_fastForwardTapped:(id)a0;
- (void)_sendButtonPressed:(long long)a0;
- (void)_sendButtonReleased:(long long)a0;
- (void)_sendButtonTapped:(long long)a0;
- (void)_skipBackwardLongPress:(id)a0;
- (void)_skipBackwardTapped:(id)a0;
- (void)_skipForwardLongPress:(id)a0;
- (void)_skipForwardTapped:(id)a0;
- (void)collapseChannelButton;
- (void)updateCaptionState:(BOOL)a0;
- (void)updatePlaybackRate:(id)a0;

@end
