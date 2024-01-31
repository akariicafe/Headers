@class NSFetchedResultsController, NSString, NSMutableDictionary, NSDictionary;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver> {
    NSFetchedResultsController *_frc;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (nonatomic) BOOL isObserving;
@property (nonatomic) BOOL stopCalled;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)fetchedResultsControllerClass;

- (id)managedObjectContext;
- (void)startObserving;
- (void)dealloc;
- (void)setPredicate:(id)a0;
- (void)stop;
- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;
- (id)sortDescriptors;
- (id)uuids;
- (id)predicate;
- (void)setSortDescriptors:(id)a0;
- (void)removeAllResultsChangedHandlers;
- (id)_frc;
- (id)addResultsChangedHandler:(id)a0;
- (id)initWithEntityName:(id)a0 predicate:(id)a1;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 background:(BOOL)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 managedObjectContext:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 batchSize:(long long)a4 propertiesToFetch:(id)a5 managedObjectContext:(id)a6;
- (id)initWithEntityName:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 returnObjectsAsFaults:(BOOL)a4;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (void)refetch:(id /* block */)a0;
- (void)removeResultsChangedHandler:(id)a0;
- (void)results:(id /* block */)a0;

@end
