@class NSString;

@interface MTManagedObjectContext : NSManagedObjectContext

@property (nonatomic) long long type;
@property (nonatomic) BOOL isResetable;
@property (readonly, nonatomic) NSString *mt_immutableName;

- (void)deleteObject:(id)a0;
- (void)reset;
- (id)existingObjectWithID:(id)a0 error:(id *)a1;
- (void)performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void)insertObject:(id)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void)performBlock:(id /* block */)a0;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)objectRegisteredForID:(id)a0;
- (id)objectWithID:(id)a0;
- (BOOL)_isInternalCoreDataQueue;
- (BOOL)handleError:(id *)a0 withCallback:(id /* block */)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0 name:(id)a1;
- (void)validateConcurencyType;
- (void)validatePodcastDeletion:(id)a0;

@end
