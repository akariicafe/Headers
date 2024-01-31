@class NSString, _QLCacheThread, QLCacheFragHandler, NSMutableArray;

@interface QLCacheMMAPBlobDatabase : NSObject {
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    void *_vmFile;
    NSMutableArray *_reservedBuffers;
}

@property (weak) _QLCacheThread *cacheThread;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long size;
@property (readonly) float fragmentation;

- (void)close;
- (void)reset;
- (BOOL)deleteBlobWithInfo:(id)a0;
- (BOOL)isOpen;
- (void)open;
- (id)initWithPath:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (BOOL)deleteBlobsWithArray:(id)a0;
- (BOOL)doesExist;
- (id)cacheHolesOrderedByStart;
- (id)copyBlobWithInfo:(id)a0;
- (BOOL)isValid;
- (id)checkConsistency:(id)a0;
- (void)save;
- (void)validateReservedBufferWithBlobInfo:(id)a0;
- (void).cxx_destruct;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (void *)bufferPointedToByBlobInfo:(id)a0;
- (void)discardReservedBufferWithBlobInfo:(id)a0;
- (void)markPurgeable;
- (void)compactFragmentation;

@end
