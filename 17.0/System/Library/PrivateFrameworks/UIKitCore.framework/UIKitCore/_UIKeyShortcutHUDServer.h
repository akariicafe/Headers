@class NSString, _UIKeyShortcutHUDViewController, _UIKeyShortcutHUDServerSession, _UIKeyShortcutHUDWindow, UIPhysicalKeyboardEvent, _UIKeyShortcutHUDModifierKeyListener;
@protocol BSInvalidatable;

@interface _UIKeyShortcutHUDServer : NSObject <_UIOServiceConnectionObserver, _UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate> {
    struct { unsigned char isPresentingHUD : 1; unsigned char isDismissingHUD : 1; unsigned char hasPresentationObserversRegistered : 1; } _flags;
}

@property (class, readonly, nonatomic) _UIKeyShortcutHUDServer *sharedHUDServer;

@property (retain, nonatomic) _UIKeyShortcutHUDWindow *hudWindow;
@property (readonly, nonatomic) _UIKeyShortcutHUDViewController *hudVC;
@property (readonly, nonatomic) long long hudPresentationState;
@property (retain, nonatomic) _UIKeyShortcutHUDServerSession *session;
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener;
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent;
@property (nonatomic, getter=isModifierKeyDownForHUDDismissal) BOOL modifierKeyDownForHUDDismissal;
@property (retain, nonatomic) id<BSInvalidatable> systemKeyCommandOverlayRulesToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillResignActive:(id)a0;
- (void)_removePresentationObserversIfNeeded;
- (id)init;
- (void)modifierKeyListener:(id)a0 didUpdateModifierFlag:(long long)a1;
- (void)handleKeyboardEvent:(id)a0;
- (void)_hardwareKeyboardAvailabilityChanged:(id)a0;
- (void)modifierKeyListenerDidPressNonModifierKey:(id)a0;
- (void).cxx_destruct;
- (void)_addPresentationObserversIfNeeded;
- (void)serviceConnectionDidInvalidate:(id)a0;
- (void)_dismissHUD;
- (void)_dismissHUDWithSelectedShortcut:(id)a0;
- (void)_sendResponse:(id)a0 withSession:(id)a1;
- (void)dismissHUDForConnection:(id)a0;
- (void)keyShortcutHUDViewController:(id)a0 didSelectShortcut:(id)a1;
- (void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(id)a0;
- (void)keyShortcutHUDViewControllerDidRequestDismissal:(id)a0;
- (void)keyShortcutHUDWindowDidResignKey:(id)a0;
- (void)keyShortcutHUDWindowSceneDidResignKeyboardFocus:(id)a0;
- (void)presentHUDWithConfiguration:(id)a0 inWindowScene:(id)a1 forConnection:(id)a2 completionHandler:(id /* block */)a3;

@end
