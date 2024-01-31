@class NSString, NSObject;
@protocol CKVDatabase;

@interface CKVDatabaseConnection : NSObject <CKVDatabaseReadOnlyAccess, CKVDatabaseReadWriteAccess> {
    NSObject<CKVDatabase> *_db;
    BOOL _inTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readOnlyConnectionToDatabaseAtURL:(id)a0;
+ (id)connectionToDatabaseAtURL:(id)a0 dataProtectionClass:(int)a1 openMode:(long long)a2;

- (id)initWithDatabase:(id)a0;
- (id)init;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void)dealloc;
- (BOOL)executeCommand:(id)a0 error:(id *)a1;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (int)rowsModified:(id *)a0;
- (BOOL)executeCommand:(id)a0 error:(id *)a1 returningRow:(id *)a2;
- (BOOL)_createTableWithRecordClass:(Class)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)enumerateRowResultsOfSelect:(id)a0 batchSize:(unsigned long long)a1 offset:(unsigned long long)a2 enumerateAll:(BOOL)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 batchSize:(unsigned long long)a2 offset:(unsigned long long)a3 enumerateAll:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)_getRowResultsOfSelect:(id)a0 outRows:(id *)a1 error:(id *)a2;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)enumerateRecordResultsOfSelect:(id)a0 recordClass:(Class)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)commitTransactionWithError:(id *)a0;

@end
