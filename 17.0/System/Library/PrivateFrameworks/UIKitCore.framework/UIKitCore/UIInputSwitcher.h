@class NSString, UIDelayedAction;

@interface UIInputSwitcher : NSObject {
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
}

@property (copy, nonatomic) NSString *loadedIdentifier;
@property (nonatomic) BOOL usingCapsLockLanguageSwitch;
@property (nonatomic) BOOL dismissingEmojiPopover;

+ (id)sharedInstance;
+ (id)activeInstance;

- (id)init;
- (void)dealloc;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (id)availableInputModes;
- (void)cancelHideSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)cleanUpAfterHide;
- (void)clearHideSwitcherTimer;
- (void)clearShowSwitcherTimer;
- (void)dismissSwitcher:(BOOL)a0;
- (void)dismissSwitcherWithDelay:(double)a0;
- (BOOL)handleEmojiPicker;
- (BOOL)handleGlobeKeyEvent:(id)a0 switcherIsVisible:(BOOL)a1;
- (BOOL)handleModifiersChangedEvent:(id)a0;
- (BOOL)handleNavigationEvent:(id)a0;
- (void)handleRotate:(id)a0;
- (BOOL)handleSwitchCommand:(BOOL)a0;
- (BOOL)handleSwitchCommand:(BOOL)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)handleSwitchingKeyEvent:(id)a0;
- (void)hideSwitcher;
- (void)hideSwitcherIfNeeded;
- (id)inputModeIdentifierWithNextFlag:(BOOL)a0;
- (BOOL)isVisibleOrHiding;
- (BOOL)needsFullHUD;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)selectedInputMode;
- (void)setSelectedInputMode:(id)a0;
- (void)setShowingCapsLockSwitcher:(BOOL)a0;
- (void)showSwitcherShouldAutoHide:(BOOL)a0;
- (void)showSwitcherWithAutoHide;
- (void)showSwitcherWithoutAutoHide;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2 fromCapsLock:(BOOL)a3;
- (void)touchHideSwitcherTimer;
- (void)touchShowSwitcherTimer;
- (void)updateHardwareLayout;

@end
