@class NSString, NSArray, HMDRemoteDeviceMonitor, HMDModernTransportDeviceReachabilityObserver, HMFFuture, HMFPromise, HMDAccountRegistry, HMDCloudDataSyncStateFilter, NSObject, NSMutableSet;
@protocol HMDUserDeviceCapabilitiesRequestManager, OS_dispatch_queue, HMDSecureRemoteMessageTransportDataSource, HMDRemoteHomeMessagingManager;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDSecureRemoteSessionDelegate, HMFLogging, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMFMessageTransportDelegate, HMFDumpState> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _responseHandlerLock;
    NSMutableSet *_secureRemoteSessions;
}

@property (class, readonly) HMDSecureRemoteMessageTransport *defaultTransport;

@property (readonly, nonatomic) id<HMDSecureRemoteMessageTransportDataSource> dataSource;
@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property (readonly, nonatomic) HMFPromise *startPromise;
@property (retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (retain) id<HMDUserDeviceCapabilitiesRequestManager> userDeviceCapabilitiesRequestManager;
@property (readonly, nonatomic) id<HMDRemoteHomeMessagingManager> homeMessagingManager;
@property (readonly, copy) NSArray *transports;
@property (readonly) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly, nonatomic) HMFFuture *startFuture;
@property (readonly) HMDModernTransportDeviceReachabilityObserver *modernReachabilityObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)reset;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)_reset;
- (id)start;
- (id)shortDescription;
- (id)dumpState;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)_handleElectDeviceForUserResponse:(id)a0 error:(id)a1 responseQueue:(id)a2 completion:(id /* block */)a3;
- (void)_handlePingMessage:(id)a0;
- (BOOL)_handleReceivedMessage:(id)a0 transport:(id)a1;
- (void)_handleSecureMessage:(id)a0 fromDevice:(id)a1 transport:(id)a2;
- (id)_openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (id)_preferredTransportForMessage:(id)a0;
- (id)_secureRemoteSessionForDevice:(id)a0;
- (void)_sendPingToDevice:(id)a0 timeout:(double)a1 restriction:(unsigned long long)a2 responseHandler:(id /* block */)a3;
- (void)_sendSecureMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateDeviceInformationFromMessage:(id)a0;
- (void)configureWithCloudDataSyncStateFilter:(id)a0 homeMembershipVerifier:(id)a1;
- (void)electDeviceForHH1User:(id)a0 destination:(id)a1 deviceCapabilities:(id)a2 responseTimeout:(double)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (void)openSecureSessionToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)pingDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)secureRemoteSession:(id)a0 didCloseWithError:(id)a1;
- (void)secureRemoteSession:(id)a0 receivedRequestToSendMessage:(id)a1;
- (void)configureWithUserDeviceCapabilitiesRequestManager:(id)a0 deviceResidencyProvider:(id)a1;
- (void)registerHomeMessageDestinationHandler:(id)a0;

@end
