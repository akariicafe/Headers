@class NSURL, PQLConnection, NSArray;

@interface BRCDatabaseBackupStorage : NSObject

@property (retain, nonatomic) NSURL *databaseURL;
@property (retain, nonatomic) PQLConnection *database;
@property (retain, nonatomic) NSArray *urlPropertiesToFetch;
@property (retain, nonatomic) NSURL *attachedDatabaseURL;

- (BOOL)addRecord:(id)a0;
- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)populateNewColumnsWithBasePath:(id)a0;
- (BOOL)clearStagedIDs:(id)a0;
- (BOOL)addRecordIfNotExist:(id)a0;
- (BOOL)attachDatabase:(id)a0 error:(id *)a1;
- (id)backupManifestEnumerator:(id)a0;
- (id)docIDForURL:(id)a0;
- (BOOL)fixUpBackupDetector:(id)a0;
- (BOOL)fixUpClientState:(id)a0;
- (void)flushAndClose;
- (BOOL)negateIDs:(id)a0;
- (void)populateNewColumnsInDatabase:(id)a0 forRecord:(id)a1 basePath:(id)a2;
- (BOOL)setForeignKeys:(id)a0 enabled:(BOOL)a1;
- (BOOL)setUpDatabaseWithError:(id *)a0;
- (BOOL)updateAttachedDatabase;
- (BOOL)updateIDs:(id)a0;

@end
