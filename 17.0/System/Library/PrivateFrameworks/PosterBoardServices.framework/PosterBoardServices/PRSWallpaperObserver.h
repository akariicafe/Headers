@class NSString, PRSPosterRoleCollectionObserver, NSArray, PRSServerPosterIdentity, NSMutableDictionary, BSServiceConnection, PRSPosterRoleActivePosterObserver, RBSAssertion;
@protocol BSServiceConnectionClient;

@interface PRSWallpaperObserver : NSObject <PRSWallpaperObserving, BSInvalidatable> {
    NSString *_explanation;
    BSServiceConnection<BSServiceConnectionClient> *_lock_connection;
    id /* block */ _lock_pathHandler;
    id /* block */ _lock_snapshotHandler;
    PRSPosterRoleActivePosterObserver *_lock_roleActivePosterObserver;
    PRSPosterRoleCollectionObserver *_lock_rolePosterCollectionObserver;
    unsigned long long _observed;
    NSString *_active_observedDescription;
    RBSAssertion *_lock_initialUpdateAssertion;
    PRSServerPosterIdentity *_conn_identityLocations[4];
    NSMutableDictionary *_conn_configurationByIdentity;
    NSArray *_conn_knownPostersCollection;
    NSString *_conn_knownPostersCollectionRole;
    NSMutableDictionary *_conn_roleToActivePosterConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientActivated;
    BOOL _lock_invalidated;
    BOOL _lock_initialLocationStateUpdateWasSent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)notifyRolePosterCollectionUpdates:(id)a0;
- (void)_lock_invalidate;
- (void)invalidate;
- (void)activateWithConfiguration:(id)a0;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;
- (oneway void)notifyWallpaperUpdates:(id)a0;
- (oneway void)notifySnapshotUpdates:(id)a0;
- (oneway void)notifyRoleActivePosterUpdates:(id)a0;

@end
