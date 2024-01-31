@class NSString, NSMutableDictionary, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BKSTouchEventService : NSObject <BKSTouchEventClient_IPC> {
    NSObject<OS_dispatch_queue> *_requestQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSMutableDictionary *_registrationLock_registrationsByContextID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)addAuthenticationSpecifications:(id)a0 forReason:(id)a1;
- (void)_connectToService;
- (void).cxx_destruct;
- (id)registerSceneHostSettings:(id)a0 forCAContextID:(unsigned int)a1;
- (void)addTouchAuthenticationSpecifications:(id)a0 forReason:(id)a1;
- (void)_repostAllRegistrations;

@end
