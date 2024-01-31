@class NSString, NSDictionary, NSArray, FHDatabaseManager;

@interface FHDatabaseEntity : NSObject

@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) FHDatabaseManager *databaseManager;
@property (copy, nonatomic) NSDictionary *scalarFunctions;
@property (copy, nonatomic) NSDictionary *windowFunctions;
@property (readonly, copy, nonatomic, getter=fieldsInOrder) NSArray *fieldsIndex;

- (id)initWithEntityName:(id)a0;
- (void)clearData;
- (void).cxx_destruct;
- (id)_availableFunctions:(long long)a0 functionTypeFilter:(id)a1;
- (void)insertOrUpdate:(id)a0 upsert:(BOOL)a1;
- (void)queryDataWithBlock:(id)a0 logicalOperator:(id)a1 limit:(unsigned long long)a2 selectFields:(id)a3 usingBlock:(id /* block */)a4;
- (void)queryDataWithBlock:(id)a0 logicalOperator:(id)a1 selectFields:(id)a2 usingBlock:(id /* block */)a3;
- (void)queryDataWithBlock:(id)a0 logicalOperator:(id)a1 usingBlock:(id /* block */)a2;
- (void)streamDataWithDictionaryHandler:(id /* block */)a0;

@end
