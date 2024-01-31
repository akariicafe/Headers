@class _HUQuickControlSingleControlHostView, HUQuickControlInteractionCoordinator, NSString, NAValueThrottler, HUQuickControlViewProfile, HFControlItem;

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing>

@property (readonly, nonatomic) NAValueThrottler *valueWriteThrottler;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible;
@property (nonatomic) BOOL hasWrittenAnyNewValues;
@property (retain, nonatomic) HUQuickControlViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlInteractionCoordinator *interactionCoordinator;
@property (nonatomic) double verticalDirectionalControlStretchFactor;
@property (nonatomic) double horizontalControlCompressionFactor;
@property (retain, nonatomic) _HUQuickControlSingleControlHostView *view;
@property (nonatomic) BOOL hasSetControlSize;
@property (readonly, nonatomic) HFControlItem *controlItem;
@property (readonly, nonatomic) id modelValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void)setControlSize:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)isUserInteractionEnabled;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateTitle;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)viewForTouchContinuation;
- (id)overrideValueForCharacteristic:(id)a0;
- (void)_setModelValue:(id)a0 writeValue:(BOOL)a1;
- (void)_updateControlTransform;
- (void)_updateControlViewReachabilityState;
- (void)_updateViewProfileForCurrentItemState;
- (void)_updateWriteState;
- (void)_writeModelControlValue:(id)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (BOOL)hasModelValueChangedForInteractionCoordinator:(id)a0;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)a0;
- (id)initWithControlItem:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (void)interactionCoordinator:(id)a0 interactionStateDidChange:(BOOL)a1;
- (void)interactionCoordinator:(id)a0 showAuxiliaryView:(id)a1;
- (void)interactionCoordinator:(id)a0 updateControlHorizontalCompressionFactor:(double)a1;
- (void)interactionCoordinator:(id)a0 updateControlVerticalStretchFactor:(double)a1;
- (void)interactionCoordinator:(id)a0 viewValueDidChange:(id)a1;
- (void)interactionCoordinatorWantsDismissal:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)invalidateViewProfile;
- (void)modelValueDidChange;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (void)setControlOrientation:(unsigned long long)a0;
- (void)setPreferredControl:(unsigned long long)a0;
- (void)setPreferredFrameLayoutGuide:(id)a0;
- (void)updateValueFromControlItem;
- (id)viewControllerForTouchContinuation;

@end
