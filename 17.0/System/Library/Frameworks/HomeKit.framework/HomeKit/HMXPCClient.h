@class HMXPCMessageTransportConfiguration, NSString, NSXPCConnection, NSUUID, NSDictionary, NSMutableArray;

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *reconnectionHandlers;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BOOL isAuthorizedForHomeDataAccess;
@property (nonatomic) unsigned long long homeDataAuthorizationStatus;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) BOOL requiresCheckin;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteObjectInterface;
+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithConfiguration:(id)a0 userInfo:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)registerReconnectionHandler:(id /* block */)a0;

@end
