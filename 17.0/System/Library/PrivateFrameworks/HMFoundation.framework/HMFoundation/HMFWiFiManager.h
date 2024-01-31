@class NSHashTable, HMFMACAddress, NSString, HMFWifiNetworkAssociation, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMFWiFiManagerDataSource;

@interface HMFWiFiManager : HMFObject <HMFLogging, HMFWiFiManagerDataSourceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _shouldAssertWoW;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMFWiFiManagerDataSource> _dataSource;
    NSString *_savedNetworkSSID;
    NSHashTable *_activeAssertions;
}

@property (class, readonly) HMFWiFiManager *sharedManager;

@property (readonly, copy) HMFMACAddress *MACAddress;
@property (readonly, copy) NSString *currentNetworkSSID;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (readonly, copy, nonatomic) NSNumber *currentNetworkRSSI;
@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isCaptive) BOOL captive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)beginActiveAssertionWithOptions:(unsigned long long)a0 reason:(id)a1;
- (void)currentNetworkDidChangeForDataSource:(id)a0;
- (void)dataSource:(id)a0 didChangeLinkAvailability:(BOOL)a1;
- (void)dataSource:(id)a0 didChangeWoWState:(BOOL)a1;
- (void)endActiveAssertion:(id)a0;
- (id)initWithWorkQueue:(id)a0 dataSource:(id)a1;
- (void)releaseWoWAssertion;
- (void)takeWoWAssertion;

@end
