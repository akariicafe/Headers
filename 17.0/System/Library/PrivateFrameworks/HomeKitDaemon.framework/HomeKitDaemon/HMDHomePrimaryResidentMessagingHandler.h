@class HMFFuture, NSString, NSUUID, HMFMessageDispatcher, NSNotificationCenter, NSMapTable, NSError;
@protocol HMDResidentDeviceManager, HMFTimerManager;

@interface HMDHomePrimaryResidentMessagingHandler : NSObject <HMFLogging, HMDResidentDeviceManagerDiscoveryRequester, HMFTimerManagerDelegate, HMDRemoteHomeMessageHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMFMessageDispatcher *_messageDispatcher;
    id<HMDResidentDeviceManager> _residentDeviceManager;
    NSNotificationCenter *_notificationCenter;
    id<HMFTimerManager> _timerManager;
    NSMapTable *_pendingMessages;
    NSError *_cancelError;
    HMFFuture *_discoveryFuture;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *homeUUID;

+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)timerManager:(id)a0 didFireForTimerContext:(id)a1;
- (void)handleResidentUpdated:(id)a0;
- (void)_discoverPrimaryResident;
- (void)_processPendingMessagesWithPrimaryResidentDevice:(id)a0;
- (id /* block */)_responseHandlerForRequestMessage:(id)a0;
- (void)_sendMessage:(id)a0 toPrimaryResidentDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)handlePrimaryResidentUpdated:(id)a0;
- (id)initWithMessageDispatcher:(id)a0 homeUUID:(id)a1 residentDeviceManager:(id)a2;
- (id)initWithMessageDispatcher:(id)a0 homeUUID:(id)a1 residentDeviceManager:(id)a2 dataSource:(id)a3;
- (void)residentDeviceManager:(id)a0 didCompleteDiscoveryWithPrimaryResidentDevice:(id)a1 error:(id)a2;

@end
