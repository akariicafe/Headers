@class NSHashTable, NSString, NSArray, NSPredicate, NSSet, BSAtomicFlag, NSDictionary, NSUUID, NSObject, _EXQueryController;
@protocol OS_dispatch_queue, PRPosterExtensionProviderObserver;

@interface PRPosterExtensionDefaultDataSource : NSObject <_EXQueryControllerDelegate, PRPosterExtensionProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_queue_queries;
    _EXQueryController *_queue_queryController;
    NSArray *_lock_knownPosterExtensions;
    NSDictionary *_lock_defaultInstanceByProvider;
    NSHashTable *_lock_instantiatedPosterExtensions;
    BOOL _queue_started;
    BSAtomicFlag *_invalidatedFlag;
    id<PRPosterExtensionProviderObserver> _queue_delegate;
    NSPredicate *_queue_rolePredicate;
    NSHashTable *_queue_observers;
    NSUUID *_defaultInstanceIdentifier;
}

@property (retain, nonatomic) NSArray *knownPosterExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSSet *supportedRoles;
@property (readonly, nonatomic) NSDictionary *defaultInstanceByProvider;

+ (id)extensionKitQuery;

- (void)_queue_start;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)cancel;
- (void)addObserver:(id)a0;
- (void)_invalidateDataSource:(BOOL)a0 invalidateInstantiatedPosterExtensions:(BOOL)a1 invalidateDefaultPosterExtensions:(BOOL)a2 restartIfAlreadyStarted:(BOOL)a3;
- (void)_lock_invalidateDefaultPosterExtensions;
- (void)_lock_invalidateInstantiatedPosterExtensions;
- (void)_queue_executeQuery;
- (void)_queue_invalidateDataSource:(BOOL)a0 invalidateInstantiatedPosterExtensions:(BOOL)a1 invalidateDefaultPosterExtensions:(BOOL)a2 restartIfAlreadyStarted:(BOOL)a3;
- (void)_queue_notifyDataStoreOfUpdatedExtensions:(id)a0;
- (void)_queue_teardownQueryController;
- (id)defaultInstanceByProvider;
- (id)defaultInstanceOfProvider:(id)a0 error:(out id *)a1;
- (id)initWithDefaultInstanceIdentifier:(id)a0;
- (id)instantiateNewInstanceOfProvider:(id)a0 error:(out id *)a1;
- (id)knownPosterExtensions;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (void)teardownRunningExtensions;

@end
