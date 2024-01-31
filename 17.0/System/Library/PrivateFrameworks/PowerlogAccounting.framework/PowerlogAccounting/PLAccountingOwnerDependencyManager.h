@class PLTimer, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountingOwnerDependencyManager : NSObject <PLAccountingOwnerManager, PLAccountingDependencyManager>

@property (retain) NSMutableDictionary *dependencyIDToObservingOwners;
@property (retain) NSMutableDictionary *dependencyIDToDependencies;
@property int numDependencies;
@property (retain) NSMutableDictionary *ownerIDToObservingDependencies;
@property (retain) NSMutableDictionary *ownerIDToLastOwner;
@property (retain) NSMutableSet *ownersRepository;
@property (retain) PLTimer *freeTimer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)freeTimerInterval;
+ (int)maxDependencies;
+ (int)maxOwners;

- (id)init;
- (void)reloadDependenciesNewerThanDate:(id)a0;
- (void).cxx_destruct;
- (id)ownerIDsForDependency:(id)a0;
- (id)dependencyIDsForOwner:(id)a0;
- (void)addDependency:(id)a0;
- (id)_lastDependencyForDependencyID:(id)a0;
- (void)addOwner:(id)a0;
- (void)canFreeDependency:(id)a0;
- (void)canFreeOwner:(id)a0;
- (id)dependenciesWithDependencyID:(id)a0 withRange:(id)a1;
- (void)freeExpiredDependenciesAtNow:(id)a0;
- (void)freeExpiredOwnersAtNow:(id)a0;
- (id)lastDependencyForDependencyID:(id)a0;
- (id)lastOwnerForOwnerID:(id)a0;
- (void)notifyDependenciesWithOwner:(id)a0;
- (void)notifyOwnersWithDependency:(id)a0;
- (void)startObservingDependencyID:(id)a0 forOwner:(id)a1;
- (void)startObservingOwnerID:(id)a0 forDependency:(id)a1;
- (void)stopObservingDependencyID:(id)a0 forOwner:(id)a1;
- (void)stopObservingOwnerID:(id)a0 forDependency:(id)a1;
- (void)updateLastDependencyID:(id)a0 withEndDate:(id)a1;

@end
