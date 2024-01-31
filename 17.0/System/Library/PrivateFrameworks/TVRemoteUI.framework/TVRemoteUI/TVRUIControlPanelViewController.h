@class TVRUIButtonPanelView, NSString, NSMutableSet, UIView;
@protocol TVRUIDevice, TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIControlPanelViewController : UIViewController <_TVRUIEventDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) TVRUIButtonPanelView *currentButtonPanel;
@property (retain, nonatomic) TVRUIButtonPanelView *touchpadButtonPanel;
@property (retain, nonatomic) TVRUIButtonPanelView *genericButtonPanel;
@property (retain, nonatomic) TVRUIButtonPanelView *panelWithKeyboardButton;
@property (retain, nonatomic) TVRUIButtonPanelView *legacyButtonPanel;
@property (retain, nonatomic) TVRUIButtonPanelView *legacyPanelWithKeyboardButton;
@property (retain, nonatomic) id<TVRUIDevice> remoteDevice;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableSet *allButtonPanels;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonActionsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enabled;

- (void)setDevice:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_enableControls;
- (void)_updateViewState;
- (void)_disableControls;
- (void)_createButtonPanelWithKeyboard;
- (void)_createGenericControlButtonPanel;
- (void)_createLegacyButtonPanel;
- (void)_createLegacyPanelWithkeyboard;
- (id)_createPagedViewWithPrimaryButtonType:(long long)a0 leftButtonTypes:(id)a1;
- (void)_createTouchpadButtonPanel;
- (id)_createViewWithPrimaryButtonType:(long long)a0 leftButtonTypes:(id)a1 rightButtonTypes:(id)a2;
- (void)_transitionToButtonPanelAndCreateIfNeeded;
- (void)_transitionToPanelView:(id)a0;
- (void)_transitionToTouchpadPanelAndCreateIfNeeded;
- (void)disableSearchButton;
- (void)enableSearchButton;
- (void)hideKeyboardButton;
- (void)showKeyboardButton;
- (void)transitonToViewForDeviceType:(long long)a0;

@end
