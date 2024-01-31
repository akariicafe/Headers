@class NSString, CKVDatabaseConnection, KVProvisionalResourceManager;

@interface CKVDatabaseReader : NSObject <CKVDatabaseReadOnlyAccess> {
    CKVDatabaseConnection *_connection;
    double _lifespan;
    KVProvisionalResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerForDatabaseAtURL:(id)a0;

- (id)init;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 batchSize:(unsigned long long)a1 offset:(unsigned long long)a2 enumerateAll:(BOOL)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (BOOL)activateWithError:(id *)a0 operationBlock:(id /* block */)a1;
- (BOOL)deactivateWithError:(id *)a0;
- (id)initWithConnection:(id)a0 lifespan:(double)a1;

@end
