@class NSString, NSXPCInterface, EMRemoteConnectionRecoveryAssertion, NSSet, EMRemoteConnection, EFCancelationToken, NSObject, EFPromise, EAEmailAddressSet;
@protocol OS_os_log;

@interface EMVIPManager : NSObject <EFFutureDelegate, EFLoggable, EMVIPManagerObserver, EMVIPReader_Private, EMVIPManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _vipsLock;
    EAEmailAddressSet *_cachedEmailAddresses;
    EFCancelationToken *_observerCancelationToken;
    EMRemoteConnectionRecoveryAssertion *_connectionRecoveryAssertion;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMRemoteConnection *connection;
@property (retain) EFPromise *vipsByIdentifierPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allVIPWaitForResult;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;

- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (id)vipWithIdentifier:(id)a0;
- (BOOL)isVIPAddress:(id)a0;
- (void)_reset;
- (void).cxx_destruct;
- (void)saveVIPs:(id)a0;
- (id)initWithRemoteConnection:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)removeVIPsWithEmailAddresses:(id)a0;
- (void)didFinishBlockingMainThreadForFuture:(id)a0;
- (void)didStartBlockingMainThreadForFuture:(id)a0;
- (void)_startObservingVIPChangesIfNecessary;
- (id)_vipsByIdentifier;
- (id)_vipsByIdentifierFuture;
- (void)observer:(id)a0 gotVIPs:(id)a1;
- (void)observer:(id)a0 updatedVIPs:(id)a1 removedVIPs:(id)a2;

@end
