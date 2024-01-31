@class COIDSMessageFactory, NSString, NSMapTable, NSObject, IDSService;
@protocol OS_dispatch_queue, COIDSServiceDirectorOnDemandDiscoveryDelegate;

@interface COIDSServiceDirector : NSObject <IDSServiceDelegate, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMapTable *activeTransports;
@property (copy, nonatomic) NSString *meshName;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) COIDSMessageFactory *messageFactory;
@property (weak, nonatomic) id<COIDSServiceDirectorOnDemandDiscoveryDelegate> discoveryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)start;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIDSService:(id)a0 meshName:(id)a1;
- (void)sendMessage:(id)a0 toDestination:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendResponse:(id)a0 responseIdentifier:(id)a1 toDestination:(id)a2;
- (id)tokenFromURI:(id)a0;
- (id)transportWithDiscoveryRecord:(id)a0 withExecutionContext:(id)a1;

@end
