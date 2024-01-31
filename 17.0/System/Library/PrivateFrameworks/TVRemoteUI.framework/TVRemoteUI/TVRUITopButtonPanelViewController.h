@class TVRUIButton, NSArray, NSString;
@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUITopButtonPanelViewController : UIViewController <TVRUIRemoteViewProvider>

@property (retain, nonatomic) id<TVRUIDevice> device;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) TVRUIButton *muteButton;
@property (retain, nonatomic) TVRUIButton *guideButton;
@property (retain, nonatomic) TVRUIButton *powerButton;
@property (retain, nonatomic) NSArray *buttons;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)setVolumeControlAvailable:(BOOL)a0;
- (void)_updateViewState;
- (void)_buttonReleased:(id)a0;
- (void)_updateButtonsShapes;

@end
