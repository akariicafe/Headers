@class NSSet, NSUUID, SBUISystemApertureElementSource, UIViewController;
@protocol SBUISystemApertureElement;

@interface SBSUIInCallWindowScene : UIWindowScene {
    SBUISystemApertureElementSource *_associatedSource;
    NSUUID *_requestedPresentationConfigurationIdentifier;
    long long _validationState;
    BOOL _hasRequestedDestructionForInvalidState;
}

@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (copy, nonatomic) NSSet *preferredBackgroundActivitiesToSuppress;
@property (nonatomic) BOOL supportsDeviceLockEvents;
@property (nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, getter=isCallConnected) BOOL callConnected;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expanseHUDDodgingInsets;
@property (nonatomic) BOOL prefersHiddenWhenDismissed;
@property (readonly, nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (readonly, nonatomic) long long presentationMode;
@property (readonly, nonatomic, getter=isDeviceAttachedToWindowedAccessory) BOOL deviceAttachedToWindowedAccessory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowedAccessoryCutoutFrameInScreen;
@property (nonatomic) BOOL prefersBannersHiddenFromClonedDisplay;
@property (nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime;
@property (readonly, nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (readonly, nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet;
@property (readonly, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *associatedSystemApertureElement;

- (void)_invalidate;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (void)_associateWithSourceIfNeeded:(id)a0;
- (void)_handleDeviceLockAction:(id)a0;
- (void)_handleFrameChanged;
- (void)_handleHardwareButtonEventSceneActions:(id)a0;
- (void)_handleSourceDidConnect:(id)a0;
- (void)_setAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_startObservingSystemApertureSourceConnectNotifications;
- (void)_updatePresentationMode:(long long)a0 analyticsSource:(id)a1;
- (void)_updateValidationStateIfNeededForPresentationMode:(long long)a0;
- (void)requestTransitionToPresentationMode:(long long)a0;
- (void)requestTransitionToPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1;
- (void)requestTransitionToPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1 analyticsSource:(id)a2;
- (id)systemApertureElementViewControllerProvider;

@end
