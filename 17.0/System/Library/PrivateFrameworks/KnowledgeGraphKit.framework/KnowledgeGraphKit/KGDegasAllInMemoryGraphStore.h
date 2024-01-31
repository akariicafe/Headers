@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (id)persistentStoreFileExtension;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void)close;
- (unsigned long long)graphVersion;
- (id)initWithURL:(id)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (id)graphIdentifier;
- (void)setGraphVersion:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (id)url;
- (BOOL)commitTransactionWithError:(id *)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;

@end
