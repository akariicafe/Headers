@class NSSet, NSString, NSMutableSet, NSMutableDictionary, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, PGBackgroundPIPServiceDelegate;

@interface PGBackgroundPIPService : NSObject <BSServiceConnectionListenerDelegate, _PGBackgroundPIPServiceConnectionTargetDelegate> {
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_mutableIdentifiersForAuthorizedActivitySessions;
    NSMutableSet *_lock_targets;
    NSMutableDictionary *_lock_targetsByActivitySessionIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<PGBackgroundPIPServiceDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *identifiersForAuthorizedActivitySessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)startListener;
- (void)_handleInvalidatedTarget:(id)a0;
- (id)_targetForIdentifier:(id)a0;
- (void)backgroundPIPTargetDidInvalidate:(id)a0;
- (void)backgroundPIPTargetRequestsAuthorization:(id)a0;
- (BOOL)hasAcquiredAuthorizationForActivitySessionWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (void)pipDidStartForRemoteObject:(id)a0;
- (void)pipDidStopForRemoteObject:(id)a0;
- (void)revokeAuthorizationActivitySessionWithIdentifier:(id)a0;

@end
