@class NSExtension, NSMutableDictionary, NSMapTable, RBSAssertion, NSObject, FPDDomain, _EXExtensionProcess, NSString, FPGracePeriodTimer, FPDProcessMonitor, NSCountedSet, NSXPCConnection, FPDExtension, NSUUID;
@protocol OS_dispatch_queue, OS_os_log;

@interface FPDExtensionSession : NSObject <FPDProcessMonitorDelegate, FPDExtensionSessionProtocol> {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSXPCConnection *_connection;
    NSUUID *_requestIdentifier;
    NSCountedSet *_observingBundleIDs;
    NSMutableDictionary *_inflightProxies;
    NSMapTable *_lifetimeExtenders;
    FPDExtension *_fpdExtension;
    FPDDomain *_domain;
    NSString *_providerIdentifier;
    NSObject<OS_os_log> *_log;
    FPGracePeriodTimer *_gracePeriodTimer;
    FPGracePeriodTimer *_networkingGracePeriodTimer;
    FPDProcessMonitor *_processMonitor;
    int _notifyTokenForFramework;
    BOOL _invalidated;
    BOOL _isForeground;
    int _pid;
    NSUUID *_sessionUUID;
    _EXExtensionProcess *_sessionProcess;
    RBSAssertion *_foregroundAssertion;
    RBSAssertion *_backgroundAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;

- (void)__invalidate;
- (void)_networkingGracePeriodOver;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)_invalidateExtensionIfPossible;
- (void)dealloc;
- (id)newBackgroundAssertion;
- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)_invalidate;
- (void)invalidate;
- (void)cancelAsync;
- (id)initWithDomain:(id)a0 extension:(id)a1 queue:(id)a2;
- (void)_notifyNetworkingProviderMonitorWithState:(BOOL)a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)_unregisterLifetimeExtensionForObject:(id)a0;
- (id)newAssertionWithAttributeName:(id)a0 reason:(id)a1;
- (id)newFileProviderProxyWithTimeoutValue:(double)a0 pid:(int)a1 createIfNeeded:(BOOL)a2;
- (BOOL)terminateExtensionWithReason:(id)a0 error:(id *)a1;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)_alternateContentsDictionary;
- (void).cxx_destruct;
- (void)processMonitor:(id)a0 didBecomeForeground:(BOOL)a1;
- (BOOL)_setUpConnectionWithError:(id *)a0;
- (BOOL)_setUpPKConnectionWithError:(id *)a0;
- (id)newForegroundAssertion;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (void)_evaluateExtensionForegroundness;
- (void)assertionWasInvalidated:(id)a0;
- (BOOL)_setUpEXConnectionWithError:(id *)a0;
- (void)terminateWithReason:(id)a0;
- (id)_connectionWithError:(id *)a0;

@end
