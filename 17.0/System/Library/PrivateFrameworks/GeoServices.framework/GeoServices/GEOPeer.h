@class NSString, NSMutableDictionary, GEOApplicationAuditToken, GEOXPCConnection, GEODaemon;
@protocol NSObject;

@interface GEOPeer : NSObject {
    GEODaemon *_daemon;
    NSMutableDictionary *_entitlementValueCache;
    id<NSObject> _peerTransaction;
    id<NSObject> _preloadingTransaction;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (nonatomic) unsigned long long handleRequestSignpost;
@property (readonly, nonatomic) GEOXPCConnection *connection;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) unsigned long long serverType;
@property (readonly, nonatomic) NSString *offlineCohortId;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (readonly, nonatomic) BOOL isLocationd;

- (void)_handleEvent:(id)a0;
- (void)dealloc;
- (BOOL)isForServerType:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 daemon:(id)a1;
- (BOOL)hasEntitlement:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isForServerIdentifier:(id)a0;

@end
