@class ENFile, NSArray, ENArchive, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface ENFileSessionDaemon : NSObject {
    ENArchive *_archive;
    NSObject<OS_xpc_object> *_nextTEKBatch;
    NSArray *_signatures;
    NSObject<OS_os_transaction> *_transaction;
}

@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) ENFile *file;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned long long invalidKeyCount;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_createTransaction;
- (id)_readTEKBatchAndReturnError:(id *)a0;
- (BOOL)_resetAndAdvanceArchive:(id)a0 toPathWithExtension:(id)a1 error:(id *)a2;
- (BOOL)activateWithArchiveFD:(int)a0 error:(id *)a1;
- (BOOL)activateWithFileFD:(int)a0 signatureData:(id)a1 error:(id *)a2;
- (void)prepareNextTEKBatchIfNecessary;
- (id)readSignaturesAndReturnError:(id *)a0;
- (id)readTEKBatchAndReturnError:(id *)a0;

@end
