@class NSHashTable, NSString, NSArray, PKProximityAdvertiser, IDSService, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PKIDSManagerDataSource;

@interface PKIDSManager : NSObject <IDSServiceDelegate> {
    NSMutableArray *_remoteDevices;
    NSMutableArray *_paymentRequests;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_thumbnailCompletionHandlers;
    PKProximityAdvertiser *_proximityAdvertiser;
    NSHashTable *_delegates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _requestCLTMThrottleUncapToken;
}

@property (retain, nonatomic) NSMutableArray *pendingCancellations;
@property (retain, nonatomic) NSMutableDictionary *pendingDiscoveries;
@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSMutableDictionary *recentlySeenUUIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, weak, nonatomic) NSArray *remoteDevices;
@property (readonly, nonatomic) NSArray *paymentRequests;
@property (readonly, nonatomic) NSArray *delegates;
@property (nonatomic) id<PKIDSManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)initWithIDSService:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)sendPayment:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)_paymentCancellationReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)_queue_hasRegisteredAccounts;
- (id)init;
- (void)invalidateMessage:(id)a0;
- (void)dealloc;
- (void)_paymentSetupRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_createThumbnailCacheDirectory;
- (void)_populateDevicesIfNeeded;
- (void)removeDelegate:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (id)_fetchPaymentInstrumentsForRequestingDevice:(id)a0;
- (id)sendPaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)addDelegate:(id)a0;
- (void)_paymentClientUpdateReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)_queue_hasRemoteDevices;
- (void)_archiveDevicesToDisk;
- (void)_paymentResponseReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)sendPaymentResult:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)_registerCTLMThrottleUncapNotification;
- (void)_queue_sendDiscoveryResponse:(id)a0 toDeviceWithFromID:(id)a1;
- (void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(BOOL)a0;
- (void)_paymentResultReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_promptDetailsForVirtualCardRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_queue_removeThumbnailCompletionHandlersForKeys:(id)a0;
- (void)_queue_addThumbnailCompletionHandler:(id /* block */)a0 forKey:(id)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)_queue_requestForIdentifier:(id)a0;
- (void)_paymentDiscoveryRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)promptDetailsForVirtualCard:(id)a0 showNotification:(BOOL)a1 completion:(id /* block */)a2;
- (void)discoverRemoteDevicesWithProximity:(BOOL)a0;
- (id)sendPaymentStatus:(long long)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (void)_queue_logCloudPairingState;
- (void)_thumbnailRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)sendSetupRequest:(id)a0 appDisplayName:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasRemoteDevices;
- (void)_thumbnailResponseReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_paymentDiscoveryResponseReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void).cxx_destruct;
- (id)_queue_cancelRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (id)cancelRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)_paymentRequestReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_postCTLMThrottleUncapNotification;
- (id)sendPaymentHostUpdate:(id)a0 forRemotePaymentRequest:(id)a1 completion:(id /* block */)a2;
- (id)requestForIdentifier:(id)a0;
- (id)_preparePaymentDeviceResponseForRequestingDevice:(id)a0 userDisabled:(BOOL)a1;
- (long long)_paymentAuthorizationStatusForPaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)discoverRemoteDevices;
- (id)sendRemotePaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)_unregisterCTLMThrottleUncapNotification;
- (id)initWithTargetQueue:(id)a0;
- (BOOL)_queue_deviceIsRegistered:(id)a0;
- (void)_queue_sendDeviceDiscoveryRequestWithProximity:(BOOL)a0 devices:(id)a1;
- (id)requestInstrumentThumbnail:(id)a0 forRemoteDevice:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)_remoteDevicesWithArchive;
- (void)deleteArchivedDevices;
- (void)_registerListeners;
- (void)_paymentHostUpdateReceived:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;

@end
