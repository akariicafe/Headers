@class NSManagedObjectContext, BMManagedObjectConverter, NSURL, BMBehaviorDatabaseMetadata, NSPersistentContainer;

@interface BMBehaviorStorage : NSObject

@property (class, readonly) NSURL *defaultURL;

@property (retain, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) BMManagedObjectConverter *converter;
@property (retain, nonatomic) BMBehaviorDatabaseMetadata *metadata;
@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL readOnly;

- (id)init;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (void)resetStorageWithMetadata:(id)a0 error:(id *)a1;
- (id)fetchRulesWithAbsoluteSupport:(unsigned long long)a0 support:(double)a1 confidence:(double)a2 conviction:(double)a3 lift:(double)a4 rulePowerFactor:(double)a5 uniqueDaysLastWeek:(unsigned long long)a6 uniqueDaysTotal:(unsigned long long)a7 filters:(id)a8 limit:(unsigned long long)a9 error:(id *)a10;
- (id)fetchRulesWithSupport:(double)a0 confidence:(double)a1 filters:(id)a2 error:(id *)a3;
- (id)fetchRulesWithSupport:(double)a0 confidence:(double)a1 filters:(id)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (void)saveRules:(id)a0 error:(id *)a1;

@end
