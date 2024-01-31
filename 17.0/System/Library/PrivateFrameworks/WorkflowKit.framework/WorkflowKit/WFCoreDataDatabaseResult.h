@protocol WFCoreDataDatabaseResultFetchOperation;

@interface WFCoreDataDatabaseResult : WFDatabaseResult

@property (retain, nonatomic) id<WFCoreDataDatabaseResultFetchOperation> fetchOperation;

- (id)description;
- (void).cxx_destruct;
- (id)unsearchedDescriptorsWithError:(id *)a0;
- (id)initWithDatabase:(id)a0 fetchOperation:(id)a1;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1;
- (id)initWithDatabase:(id)a0 fetchRequest:(id)a1 relationshipKeysAffectingDescriptors:(id)a2;

@end
