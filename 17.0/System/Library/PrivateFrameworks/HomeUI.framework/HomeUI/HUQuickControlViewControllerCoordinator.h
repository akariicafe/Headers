@class HFItem, NSString, HUQuickControlContentCharacteristicWritingUpdateAdapter, HFSimpleItemManager, NSSet, HFOverrideCharacteristicValueSource, HMHome, HUQuickControlViewController;
@protocol HUQuickControlViewControllerCoordinatorDelegate, HFIconDescriptor, NSCopying, HUQuickControlContentHosting;

@interface HUQuickControlViewControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate>

@property (retain, nonatomic) HUQuickControlViewController *activeController;
@property (copy, nonatomic) NSString *primaryStatusText;
@property (copy, nonatomic) NSString *secondaryStatusText;
@property (readonly, nonatomic) HFOverrideCharacteristicValueSource *valueSource;
@property (readonly, nonatomic) HFSimpleItemManager *itemManager;
@property (readonly, nonatomic) NSSet *controlItems;
@property (readonly, nonatomic) HFItem *reachabilityItem;
@property (readonly, nonatomic) HFSimpleItemManager *reachabilityItemManager;
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFItem<NSCopying> *item;
@property (weak, nonatomic) id<HUQuickControlViewControllerCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<HUQuickControlContentHosting> controlHost;
@property (nonatomic, getter=areControlsVisible) BOOL controlsVisible;
@property (nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) BOOL showIconOffState;
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_controllerForControllableCharacteristic:(id)a0;
- (void)_createControlViewControllersForControlItems:(id)a0;
- (id)_itemToUseForIconAndStatus;
- (id)_primaryStatusTextForLatestResults:(id)a0 showingSecondaryStatus:(BOOL)a1;
- (id)_secondaryStatusTextForLatestResults:(id)a0;
- (void)_updateIconDescriptorNotifyingDelegate:(BOOL)a0;
- (void)_updateReachabilityStateNotifiyingDelegate:(BOOL)a0;
- (void)_updateStatusTextNotifyingDelegate:(BOOL)a0;
- (id)initWithItem:(id)a0 controlItems:(id)a1 home:(id)a2 delegate:(id)a3;
- (void)quickControlViewControllerDidUpdateStatusOverrides:(id)a0;
- (id)valueSource:(id)a0 overrideValueForCharacteristic:(id)a1;
- (BOOL)valueSource:(id)a0 shouldOverrideValueForCharacteristic:(id)a1;

@end
