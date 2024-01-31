@class NSNumber, NSString, HMFWifiNetworkAssociation, NSLock, NSObject;
@protocol OS_dispatch_queue, HMFWiFiManagerDataSourceDelegate;

@interface HMFWiFiManagerDataSource : HMFObject <HMFWiFiManagerDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, copy, nonatomic) NSString *MACAddressString;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) struct __WiFiManagerClient { } *wifiClientReference;
@property (nonatomic) struct __WiFiDeviceClient { } *wifiDeviceReference;
@property (nonatomic) struct __WiFiNetwork { } *currentNetwork;
@property (nonatomic) struct __SCDynamicStore { } *scStore;
@property (retain, nonatomic) NSLock *captiveCachedLock;
@property (nonatomic) int captiveCached;
@property (weak, nonatomic) id<HMFWiFiManagerDataSourceDelegate> delegate;
@property (readonly, getter=isAssertionActive) BOOL assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) BOOL wowAsserted;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (readonly, copy, nonatomic) NSNumber *currentNetworkRSSI;
@property (readonly, nonatomic, getter=isCaptive) BOOL captive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { } *)a0;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)a0;
- (void)_registerForCaptiveStateChanges;
- (void)_invalidateCaptiveState;
- (void)handleWiFiLinkChangedWithEventDictionary:(id)a0;
- (id)initWithWorkQueue:(id)a0;
- (void)performBlockAfterWoWReassertionDelay:(id /* block */)a0;
- (void)startWithWiFiDevice:(struct __WiFiDeviceClient { } *)a0;

@end
