@class NSString, EDPersistenceDatabase;

@interface EDRichLinkPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>

@property (class, readonly, copy, nonatomic) NSString *richLinksTableName;

@property (retain, nonatomic) EDPersistenceDatabase *database;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)messageRichLinksTableName;
+ (id)messagesRichLinksTableSchema;
+ (id)richLinksTableSchema;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)saveRichLinkData:(id)a0 globalMessageID:(long long)a1 basePath:(id)a2;
- (id)datasForPersistentIDs:(id)a0 basePath:(id)a1;
- (id)richLinkFileURLWithID:(id)a0 basePath:(id)a1;
- (id)_hashForRichLinkData:(id)a0;
- (id)_richLinkDirectoryURLWithBasePath:(id)a0;
- (id)_richLinkFileURLWithID:(id)a0 basePath:(id)a1;
- (id)richLinkDataForPersistentID:(id)a0 basePath:(id)a1;
- (id)richLinkMetadataDataForPersistentID:(id)a0 basePath:(id)a1;
- (id)richLinkPersistentIDsForGlobalMessageID:(long long)a0;
- (id)saveRichLinkData:(id)a0 url:(id)a1 title:(id)a2 globalMessageID:(long long)a3 basePath:(id)a4;
- (BOOL)verifyFileExistsForRichLinkID:(id)a0 basePath:(id)a1;

@end
