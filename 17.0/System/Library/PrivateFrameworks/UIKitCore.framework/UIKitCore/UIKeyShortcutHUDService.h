@class NSValue, _UIKeyShortcutHUDModifierKeyListener, NSObject, UIWindowScene, _UIKeyShortcutHUDClientSession, _UIKeyShortcutHUDDismissalResponse, NSString, NSTimer, UIPhysicalKeyboardEvent, NSArray, _UIOverlayService, _UIKeyShortcutHUDConfiguration;
@protocol OS_dispatch_source, UIKeyShortcutHUDMetricsProvider;

@interface UIKeyShortcutHUDService : NSObject <_UIOverlayServiceDelegate, _UIKeyShortcutHUDKeyListenerDelegate, UIKeyShortcutHUDMetricsProvider> {
    struct { unsigned char hasPresentationObserversRegistered : 1; unsigned char hasPendingPresentationRequest : 1; } _flags;
}

@property (class, readonly, nonatomic) UIKeyShortcutHUDService *_existingHUDService;
@property (class, readonly, nonatomic, getter=_isOOPFeatureEnabled) BOOL _oopFeatureEnabled;
@property (class, readonly, nonatomic) UIKeyShortcutHUDService *sharedHUDService;

@property (retain, nonatomic) _UIOverlayService *overlayService;
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *session;
@property (retain, nonatomic) NSTimer *scheduledHUDTimer;
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *scheduledHUDConfiguration;
@property (weak, nonatomic) UIWindowScene *scheduledHUDKeyWindowScene;
@property (retain, nonatomic) _UIKeyShortcutHUDDismissalResponse *deferredResponse;
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *deferredResponseSession;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deferredResponseTimer;
@property (retain, nonatomic) NSArray *scheduledHUDHoverGestureRecognizers;
@property (retain, nonatomic) NSValue *scheduledHUDInitialPointerLocation;
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener;
@property (readonly, nonatomic) long long hudPresentationState;
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent;
@property (retain, nonatomic) id<UIKeyShortcutHUDMetricsProvider> metricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleDeferredDismissalResponse:(id)a0;
- (void)scheduleHUDPresentation;
- (void)_applicationWillResignActive:(id)a0;
- (void)_removePresentationObserversIfNeeded;
- (id)init;
- (void)dealloc;
- (void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (BOOL)_isHUDAllowedOverCurrentWindow;
- (void)modifierKeyListener:(id)a0 didUpdateModifierFlag:(long long)a1;
- (void)_requestHUDDismissal;
- (void)_unregisterForSystemHUDPresentationDarwinNotifications;
- (void)_registerForSystemHUDPresentationDarwinNotifications;
- (void)handleKeyboardEvent:(id)a0;
- (void)dismissAllNonSystemHUDs;
- (void)_unregisterForScheduledHUDCancellationDarwinNotifications;
- (void)dismissOrCancelHUDPresentationIfNeeded;
- (void)overlayServiceDidInvalidate:(id)a0;
- (void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (void)_hardwareKeyboardAvailabilityChanged:(id)a0;
- (void)_applicationDidBeginIgnoringInteractionEvents:(id)a0;
- (BOOL)_isHUDAllowedForCurrentResponder;
- (void)_handleScheduledHUDPointerHover:(id)a0;
- (void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (void)cancelScheduledHUDPresentationIfNeeded;
- (void)modifierKeyListenerDidPressNonModifierKey:(id)a0;
- (void)_sceneDidLoseKeyboardFocus:(id)a0;
- (void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)keyShortcutHUDDidDismissWithResponse:(id)a0 toOverlayService:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isHUDSupportedOnPlatform;
- (BOOL)_canSummonHUDWithModifierFlag:(long long)a0;
- (void)_requestHUDPresentationWithUnpreparedConfiguration:(id)a0;
- (void)_handleCancelScheduledHUDPresentationDarwinNotification;
- (void)_cancelAllScheduledHUDPresentationsIfNeeded;
- (BOOL)_isHUDAllowedToBePresentedForPresentationState:(long long)a0;
- (BOOL)_isHUDAllowedToBeScheduledForPresentationState:(long long)a0;
- (void)_handleSystemHUDPresentationDarwinNotification;
- (void)requestHUDPresentationIntoSearchMode;
- (void)_discardScheduledHUDBookkeeping;
- (void)_addPresentationObserversIfNeeded;
- (void)_handleKeyCommandFromResponse:(id)a0 withSession:(id)a1;
- (void)handleTouchEvent:(id)a0;
- (void)preventUnintendedSystemHUDPresentationIfNeeded;
- (void)_didTakeScreenshot:(id)a0;
- (void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
- (BOOL)_isHUDAllowedForConfiguration:(id)a0;
- (void)_requestHUDPresentationIfAllowedWithUnpreparedConfiguration:(id)a0;
- (void)_requestHUDPresentationWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerForScheduledHUDCancellationDarwinNotifications;
- (BOOL)_isHUDAllowedToAppearForProcess;
- (id)metricsForWindow:(id)a0;
- (void)presentHUD;

@end
