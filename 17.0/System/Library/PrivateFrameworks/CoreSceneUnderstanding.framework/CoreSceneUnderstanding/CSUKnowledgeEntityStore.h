@class NSString, NSMutableDictionary;

@interface CSUKnowledgeEntityStore : NSObject {
    NSString *_databasePath;
    NSMutableDictionary *_data;
    long long _schemaVersion;
}

@property (readonly, nonatomic) int version;
@property (readonly, nonatomic) unsigned long long count;

- (id)entityForIdentifier:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)loadWithError:(id *)a0;
- (BOOL)commitWithError:(id *)a0;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)a0;
- (BOOL)purgeDatabaseWithVersion:(int)a0 error:(id *)a1;
- (id)initWithDatabasePath:(id)a0 error:(id *)a1;
- (unsigned int)storeEntity:(id)a0 error:(id *)a1;

@end
