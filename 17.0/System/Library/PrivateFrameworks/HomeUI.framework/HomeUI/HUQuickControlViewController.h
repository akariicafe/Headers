@class HUQuickControlSimpleItemUpdater, NSSet, NSString, HMHome;
@protocol HUQuickControlContentHosting, HUQuickControlItemPredicate, HUQuickControlItemUpdating, HULayoutAnchorProviding, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlViewControllerDelegate, HUQuickControlContentRequiringHelper;

@interface HUQuickControlViewController : UIViewController <HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlItemHosting, HUPreloadableViewController>

@property (class, readonly, nonatomic) id<HUQuickControlItemPredicate> controlItemPredicate;

@property (readonly, nonatomic) HUQuickControlSimpleItemUpdater *internalItemUpdater;
@property (nonatomic) BOOL areControlItemsRequestingToBeHidden;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, copy, nonatomic) NSSet *controlItems;
@property (readonly, weak, nonatomic) id<HUQuickControlItemUpdating> itemUpdater;
@property (weak, nonatomic) id<HUQuickControlViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *overrideStatusText;
@property (readonly, copy, nonatomic) NSString *overrideSecondaryStatusText;
@property (readonly, nonatomic) unsigned long long preferredPresentationStyle;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) unsigned long long controlOrientation;
@property (nonatomic) unsigned long long preferredControl;
@property (retain, nonatomic) id<HUQuickControlContentRequiringHelper> childVCThatRequiresHelper;
@property (readonly, nonatomic) BOOL hasSingleControlView;
@property (weak, nonatomic) id<HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain, nonatomic) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property (nonatomic, getter=areControlsVisible) BOOL controlsVisible;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)overrideValueForCharacteristic:(id)a0;
- (void)_updateControlItemHiddenStateNotifyingHost:(BOOL)a0;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)quickControlItemUpdater:(id)a0 didUpdateResultsForControlItems:(id)a1;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)a0;
- (id)viewControllerForTouchContinuation;

@end
