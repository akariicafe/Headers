@class NSString, NSArray, HMDHomeManager, HMFTimer, NSMutableSet, HMDUnassociatedMediaAccessory, NSObject, NSMapTable;
@protocol OS_dispatch_queue, HMDMediaBrowserDelegate, HMDMediaBrowserDataSource;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_accessoryAdvertisements;
    NSMapTable *_currentBrowseOperations;
    BOOL _discoverUnassociatedAccessories;
    BOOL _discoverAssociatedAccessories;
    BOOL _updateAvailableOutputDevices;
    void *_discoverySession;
    void *_discoverySessionCallbackToken;
    HMFTimer *_discoveryPollTimer;
    NSMutableSet *_identifiersOfAssociatedMediaAccessories;
    NSMutableSet *_mediaEndpoints;
    id<HMDMediaBrowserDataSource> _dataSource;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak) id<HMDMediaBrowserDelegate> delegate;
@property (weak) HMDHomeManager *homeManager;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)advertisementsFromOutputDevices:(struct __CFArray { } *)a0;

- (void)timerDidFire:(id)a0;
- (void)dealloc;
- (id)dumpDescription;
- (id)shortDescription;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (void)deregisterAccessories:(id)a0;
- (void)registerAccessories:(id)a0;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (id)unassociatedAccessoryFromAdvertisementData:(id)a0;
- (void)updateSessionsForAccessories:(id)a0;

@end
