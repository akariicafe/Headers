@class NSString, NSUUID, HKTaskServerProxyProvider;
@protocol HKUserDomainConceptStoreDelegate;

@interface HKUserDomainConceptStore : NSObject <_HKXPCExportable, HKUserDomainConceptStoreClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HKUserDomainConceptStoreDelegate> _delegate;
}

@property (weak) id<HKUserDomainConceptStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_clientQueue_notifyForChangesToUserDomainConcepts:(id)a0 changeType:(long long)a1;
- (void)_createAndStoreUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)a0 supplementaryProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_handleAutomaticProxyReconnection;
- (void)_observeUserDomainConceptChanges:(BOOL)a0 completion:(id /* block */)a1;
- (void)_storeUserDomainConcepts:(id)a0 method:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_synchronouslyObserveUserDomainConceptChanges:(id *)a0;
- (void)client_notifyForChangesToUserDomainConcepts:(id)a0 changeType:(long long)a1;
- (void)deleteUserDomainConcept:(id)a0 completion:(id /* block */)a1;
- (void)deleteUserDomainConcepts:(id)a0 completion:(id /* block */)a1;
- (void)insertNewUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)a0 supplementaryProperties:(id)a1 userDomainConceptTypeIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)saveOrUpdateUserDomainConcept:(id)a0 completion:(id /* block */)a1;
- (void)saveOrUpdateUserDomainConcepts:(id)a0 completion:(id /* block */)a1;
- (void)setDelegate:(id)a0 completion:(id /* block */)a1;

@end
