@class NSHashTable, NSString, SBSDisplayLayoutElement, SBBacklightController, SBExternalDisplayCoverSheetViewController, UIWindow, SBCoverSheetPresentationManager, SBFMouseButtonDownGestureRecognizer, SBFluidScrunchGestureRecognizer, SBWindowScene;
@protocol SBExternalDisplayCoverSheetControllerWindowFactory, SBLockStateProvider, BSInvalidatable;

@interface SBExternalDisplayCoverSheetController : NSObject <SBExternalDisplayCoverSheetControllerWindowFactory, SBSDisplayLayoutElementProviding, SBTouchTemplateGestureRecognizerDelegate, SBBacklightControllerObserver, SBCoverSheetPresentationManagerDismissalObserver, SBUILockStateProviding, BSInvalidatable> {
    BOOL _isInvalidated;
}

@property (retain, nonatomic) UIWindow *coversheetWindow;
@property (copy, nonatomic) NSString *externalDisplayUUID;
@property (retain, nonatomic) SBExternalDisplayCoverSheetViewController *rootViewController;
@property (retain, nonatomic) SBSDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) id<BSInvalidatable> displayLayoutElementAssertion;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=_isCoverSheetPresented) BOOL coversheetPresented;
@property (nonatomic) BOOL shouldBeVisible;
@property (weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene;
@property (readonly, nonatomic) id<SBLockStateProvider> lockStateProvider;
@property (readonly, nonatomic) SBBacklightController *backlightController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *presentationManager;
@property (readonly, nonatomic) id<SBExternalDisplayCoverSheetControllerWindowFactory> windowFactory;
@property (retain, nonatomic) SBFMouseButtonDownGestureRecognizer *mouseButtonDownGesture;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer;
@property (nonatomic, getter=_isScreenOn, setter=_setScreenOn:) BOOL screenOn;
@property (nonatomic) BOOL noAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;

- (BOOL)isUILocked;
- (id)initWithWindowScene:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (void)invalidate;
- (void)_handleScrunchGesture:(id)a0;
- (void)backlightController:(id)a0 willAnimateBacklightToFactor:(float)a1 source:(long long)a2;
- (void)_wakeScreenForMouseButtonDown:(id)a0;
- (void).cxx_destruct;
- (id)viewForSystemGestureRecognizer:(id)a0;
- (void)addObserver:(id)a0;
- (void)coverSheetPresentationManagerDidChangeDismissedSinceKeyBagLock:(id)a0;
- (void)_embeddedLockStateDidChange:(id)a0;
- (id)_initWithWindowScene:(id)a0 lockStateProvider:(id)a1 backlightController:(id)a2 presentationManager:(id)a3 windowFactory:(id)a4 externalDisplayCoverSheetViewController:(id)a5;
- (void)_notifyObserversDidUpdateExternalDisplayCoverSheetAppearance:(BOOL)a0;
- (void)_notifyObserversWillUpdateExternalDisplayCoverSheetAppearance:(BOOL)a0;
- (void)_postNotificationForExternalCoverSheetVisibilityDidChange:(BOOL)a0;
- (void)_setCoverSheetWindowVisible:(BOOL)a0 fadeDuration:(double)a1;
- (BOOL)_shouldBlankingRemovePower;
- (BOOL)_shouldIgnoreEmbeddedBacklightChangingSource:(long long)a0;
- (BOOL)_shouldShowExternalCoverSheet;
- (void)_updateExternalDisplayCoverSheetExistence;
- (id)newCoverSheetWindowForScene:(id)a0;

@end
