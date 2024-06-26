@class NSData, NSString, NSArray, RPCompanionLinkDevice, NSMutableDictionary, NSDictionary, NSMutableSet, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, RPDaemonConnection, RPSignedInUserProvider;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable> {
    BOOL _activateCalled;
    NSMutableSet *_assertions;
    id<RPDaemonConnection> _daemonCnx;
    NSMutableDictionary *_deviceDictionary;
    NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    NSMutableDictionary *_requestRegistrations;
    id<RPSignedInUserProvider> _userProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (readonly, nonatomic) unsigned int internalAuthFlags;
@property (retain) RPCompanionLinkDevice *localDevice;
@property (nonatomic) BOOL usingOnDemandConnection;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) double awdlGuestDiscoveryTimeout;
@property (nonatomic) long long bleClientUseCase;
@property (nonatomic) long long bleScreenOffRescanInterval;
@property (nonatomic) unsigned int bleScreenOffScanRate;
@property (copy, nonatomic) NSString *cloudServiceID;
@property (nonatomic) unsigned long long controlFlags;
@property (copy, nonatomic) id /* block */ disconnectHandler;
@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property (retain, nonatomic) NSArray *deviceFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long errorFlags;
@property (copy, nonatomic) id /* block */ errorFlagsChangedHandler;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) unsigned int useCase;
@property (readonly, copy) NSArray *activeDevices;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (copy, nonatomic) id /* block */ localDeviceUpdatedHandler;
@property (copy, nonatomic) NSDictionary *siriInfo;
@property (copy, nonatomic) id /* block */ stateUpdatedHandler;
@property (copy, nonatomic) id /* block */ requestIDRegistrationCompletion;
@property (copy, nonatomic) id /* block */ eventIDRegistrationCompletion;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (copy, nonatomic) NSData *pairingInfo;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;
@property (retain, nonatomic) NSString *serviceType;

- (id)init;
- (id)initWithUserProvider:(id)a0;
- (id)_ensureXPCStarted;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)description;
- (id)_XPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)_lostAllDevices;
- (id)initWithCoder:(id)a0;
- (void)deregisterEventID:(id)a0;
- (void)deregisterRequestID:(id)a0;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerProfileID:(id)a0 completion:(id /* block */)a1;
- (void)sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)companionLinkUpdateClientState:(id)a0;
- (void)companionLinkReceivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)deregisterProfileID:(id)a0 completion:(id /* block */)a1;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (id)_clientError:(id)a0;
- (id)_connectionWithClient:(id)a0 queue:(id)a1 userProvider:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;
- (void)_invalidateAssertion:(id)a0;
- (void)_registerEventID:(id)a0 options:(id)a1 reregister:(BOOL)a2;
- (void)_registerProfileID:(id)a0 reregister:(BOOL)a1 completion:(id /* block */)a2;
- (void)_registerRequestID:(id)a0 options:(id)a1 reregister:(BOOL)a2;
- (void)_registerRequestIDOnQueue:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_reregisterAssertions;
- (void)_reregisterEvents;
- (void)_reregisterProfileIDs;
- (void)_reregisterRequests;
- (id)activateAssertionID:(id)a0 destinationID:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)companionLinkAuthCompleted:(id)a0;
- (void)companionLinkChangedDevice:(id)a0 changes:(unsigned int)a1;
- (void)companionLinkFoundDevice:(id)a0;
- (void)companionLinkHandleDisconnect;
- (void)companionLinkLocalDeviceUpdated:(id)a0;
- (void)companionLinkLostDevice:(id)a0;
- (void)companionLinkPromptForPasswordType:(int)a0 flags:(unsigned int)a1 throttleSeconds:(int)a2;
- (void)companionLinkReceivedEventID:(id)a0 event:(id)a1 options:(id)a2;
- (void)companionLinkUpdateErrorFlags:(unsigned long long)a0;
- (void)createDeviceToEndpointMappingForDevice:(id)a0 completion:(id /* block */)a1;
- (void)launchAppWithBundleID:(id)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)launchAppWithURL:(id)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)removeLocalDeviceAsContextCollectorWithCompletion:(id /* block */)a0;
- (void)setLocalDeviceAsContextCollectorWithCompletion:(id /* block */)a0;
- (BOOL)shouldReportDevice:(id)a0 toXPCConnectionWithLaunchInstanceID:(id)a1 outReason:(id *)a2;
- (void)triggerEnhancedDiscoveryForReason:(id)a0 completion:(id /* block */)a1;
- (void)triggerEnhancedDiscoveryForReason:(id)a0 useCase:(unsigned int)a1 completion:(id /* block */)a2;
- (void)tryPassword:(id)a0;

@end
