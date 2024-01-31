@class NSURL, NSString, LCFDatabaseColumnConnection;

@interface LCFDatabaseConnection : NSObject

@property (readonly, nonatomic) NSURL *databaseBaseURL;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *databaseNamePath;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) LCFDatabaseColumnConnection *dbColumnConnection;

- (void).cxx_destruct;
- (BOOL)addColumn:(id)a0;
- (id)getColumns;
- (BOOL)doQueryEachStep:(id)a0 statementStepHandler:(id /* block */)a1;
- (BOOL)doQueryExec:(id)a0;
- (void)dumpDatabase;
- (void)ensureDatabaseTable;
- (id)init:(id)a0 databaseName:(id)a1 tableName:(id)a2;
- (id)isDoubleArray:(id)a0;
- (BOOL)pruneFrom:(id)a0 endDate:(id)a1;
- (id)query:(id)a0 startDate:(id)a1 endDate:(id)a2 reversed:(BOOL)a3;
- (BOOL)writeFeatures:(id)a0;

@end
