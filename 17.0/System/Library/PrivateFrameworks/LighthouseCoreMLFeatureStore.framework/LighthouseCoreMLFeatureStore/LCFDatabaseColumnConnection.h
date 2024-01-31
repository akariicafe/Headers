@class NSURL, NSString, NSArray;

@interface LCFDatabaseColumnConnection : NSObject

@property (readonly, nonatomic) NSURL *databaseBaseURL;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *databaseNamePath;
@property (readonly, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSArray *nameTypesCache;

- (id)query;
- (void).cxx_destruct;
- (BOOL)writeFeatures:(id)a0 featureValueType:(long long)a1;
- (BOOL)doQueryEachStep:(id)a0 statementStepHandler:(id /* block */)a1;
- (BOOL)doQueryExec:(id)a0;
- (void)dumpDatabase;
- (void)ensureDatabaseTable;
- (id)init:(id)a0 databaseName:(id)a1 tableName:(id)a2;

@end
