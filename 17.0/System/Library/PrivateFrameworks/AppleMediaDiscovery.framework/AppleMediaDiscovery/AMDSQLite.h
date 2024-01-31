@class NSError, NSObject, AMDSQLiteSchema;
@protocol OS_dispatch_queue;

@interface AMDSQLite : NSObject

@property (retain, nonatomic) AMDSQLiteSchema *_bootstrapSchema;
@property (nonatomic) struct sqlite3 { } *_db;
@property (retain, nonatomic) NSError *_error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_executorQueue;
@property (nonatomic) BOOL _isEnabled;
@property (retain, nonatomic) AMDSQLiteSchema *_schema;
@property (retain, nonatomic) AMDSQLiteSchema *_biomeSchema;
@property (retain, nonatomic) AMDSQLiteSchema *_megadomeSchema;

+ (id)getSharedInstance;
+ (id)trimEventsForStreams:(id)a0 error:(id *)a1;
+ (id)truncateEvents:(id *)a0;
+ (id)getBootstrapSchemaDict;
+ (id)getSharedInstanceWithOption:(BOOL)a0;
+ (id)getFeatureValueWithName:(id)a0 inDomain:(id)a1 withColumnName:(id)a2 skipRowset:(BOOL)a3 error:(id *)a4;
+ (id)getDomainsFrom:(id)a0;
+ (id)refreshODTPForDomain:(id)a0 error:(id *)a1;
+ (id)loadNewData:(id)a0;
+ (id)clearUserData:(id)a0;
+ (id)refreshEntityTableForDomain:(id)a0 error:(id *)a1;
+ (struct sqlite3_stmt { } *)prepare:(id)a0 usingDb:(struct sqlite3 { } *)a1 error:(id *)a2;
+ (id)saveEvents:(id)a0 error:(id *)a1;
+ (id)deleteEventsWithPredicate:(id)a0 forStreams:(id)a1;
+ (id)deleteEventsOlderThan:(unsigned int)a0;
+ (id)updateData:(id)a0;

- (BOOL)isUsable;
- (struct sqlite3 { } *)getDb;
- (id)connectionState;
- (id)refreshAppsTable:(id *)a0;
- (id)fetchRowsFrom:(struct sqlite3 { } *)a0 usingDescriptor:(id)a1 andSchema:(id)a2 columnMajorOutput:(BOOL)a3 rowMajorOutput:(BOOL)a4 andPersist:(BOOL)a5 error:(id *)a6;
- (id)insertRows:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)getDataSchema;
- (id)getError;
- (struct sqlite3_stmt { } *)prepare:(id)a0 error:(id *)a1;
- (id)loadBiomeSchema;
- (id)getMegadomeSchema;
- (id)deleteRows:(id)a0 error:(id *)a1;
- (id)deleteRowsInternal:(id)a0 error:(id *)a1;
- (id)saveSchema:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)loadDataSchema;
- (id)loadMegadomeSchema;
- (void)setEnable:(BOOL)a0;
- (id)updateSchema:(id)a0 error:(id *)a1;
- (id)getBootSchema;
- (id)loadDb;
- (id)fetchRows:(id)a0 andPersist:(BOOL)a1 error:(id *)a2;
- (id)fetchRowsUsingSchema:(id)a0 andDescriptor:(id)a1 andPersist:(BOOL)a2 error:(id *)a3;
- (id)getBiomeSchema;
- (id)prepareBootstrapSchema;
- (id)bootstrapDb;
- (id)applySchema:(id)a0 error:(id *)a1;
- (id)createTable:(id)a0 usingSchema:(id)a1 error:(id *)a2;
- (id)validateRowsData:(id)a0 tableSchema:(id)a1 error:(id *)a2;

@end
