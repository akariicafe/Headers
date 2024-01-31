@class SBPresentationObservationToken, SBTransientOverlayWindow, SBTransientOverlayViewController, SBTransientOverlayBackgroundWindow, SBFluidDismissalState;
@protocol BSInvalidatable;

@interface _SBTransientOverlayPresentedEntity : NSObject

@property (readonly, nonatomic) double baseWindowLevel;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (retain, nonatomic) SBTransientOverlayBackgroundWindow *backgroundWindow;
@property (nonatomic, getter=isRotating) BOOL rotating;
@property (readonly, nonatomic) SBTransientOverlayWindow *window;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (nonatomic) BOOL hasFinishedWindowInitialization;
@property (nonatomic) BOOL hasPreservedInputViews;
@property (retain, nonatomic) id<BSInvalidatable> disableAutoUnlockAssertion;
@property (retain, nonatomic) id<BSInvalidatable> proximityEnabledAssertion;
@property (retain, nonatomic) id<BSInvalidatable> wallpaperAnimationSuspensionAssertion;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (retain, nonatomic) SBPresentationObservationToken *bannerLongLookPresentationObservationToken;
@property (retain, nonatomic) id<BSInvalidatable> bannerLongLookWindowLevelAssertion;
@property (retain, nonatomic) SBPresentationObservationToken *controlCenterPresentationObservationToken;
@property (retain, nonatomic) id<BSInvalidatable> controlCenterWindowLevelAssertion;
@property (retain, nonatomic) SBPresentationObservationToken *siriPresentationObservationToken;
@property (retain, nonatomic) id<BSInvalidatable> siriWindowLevelAssertion;
@property (retain, nonatomic) id<BSInvalidatable> keyFocusStealingAssertion;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0 window:(id)a1 baseWindowLevel:(double)a2;

@end
