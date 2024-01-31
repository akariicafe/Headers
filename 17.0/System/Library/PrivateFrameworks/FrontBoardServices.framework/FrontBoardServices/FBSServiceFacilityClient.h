@class NSObject, NSString, BSServiceInterface, BSServiceConnection, BSServiceQuality, BSServiceConnectionEndpoint;
@protocol OS_dispatch_queue;

@interface FBSServiceFacilityClient : NSObject <FBSServiceFacilityClientConfiguring, FBSServiceFacilityClientMessaging, BSInvalidatable> {
    BSServiceConnectionEndpoint *_endpoint;
    NSString *_facilityID;
    BSServiceInterface *_interface;
    id _configOnly_interfaceTarget;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnection *_lock_connection;
    BOOL _lock_connectionDenied;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _uisHack;
}

@property (class, readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;

@property (readonly, nonatomic, getter=isConfigured) BOOL configured;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceQuality *serviceQuality;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_handleMessage:(id)a0;
- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;
- (void)setInterfaceTarget:(id)a0;
- (void)setInterface:(id)a0;
- (id)initWithConfigurator:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (void)_queue_handleError:(id)a0;
- (void)configureConnectMessage:(id)a0;
- (void)sendMessage:(id)a0 withType:(long long)a1 replyHandler:(id /* block */)a2 waitForReply:(BOOL)a3 timeout:(double)a4;
- (void)setIdentifier:(id)a0;
- (BOOL)_isValid;
- (void)sendMessage:(id)a0 withType:(long long)a1;
- (void)setEndpoint:(id)a0;
- (void)setCalloutQueue:(id)a0;
- (void)_lock_invalidate;
- (void)setServiceQuality:(id)a0;
- (void)_lock_activate;
- (void)invalidate;
- (void)activate;
- (void)handleError:(id)a0;
- (void).cxx_destruct;

@end
