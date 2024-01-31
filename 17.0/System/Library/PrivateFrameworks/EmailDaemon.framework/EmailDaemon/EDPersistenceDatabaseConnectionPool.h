@class NSMapTable, _EDPersistenceDatabaseConnectionWrapper, NSMutableSet, NSLock, EFResourcePool;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject {
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
}

@property (weak, nonatomic) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) unsigned long long cacheSize;
@property (readonly, nonatomic) unsigned long long maxConcurrentBackgroundReaders;
@property (readonly, nonatomic) unsigned long long backgroundReadersWaiting;
@property (readonly, nonatomic) unsigned long long writersWaiting;

- (id)init;
- (id)_connectionWithType:(unsigned long long)a0;
- (unsigned long long)maxConcurrentReaders;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 maxConcurrentBackgroundReaders:(unsigned long long)a1;
- (void)flush;
- (id)backgroundReaderConnection;
- (void)checkInConnection:(id)a0;
- (id)writerConnection;
- (id)readerConnection;
- (void).cxx_destruct;
- (void)_unlockForConnectionType:(unsigned long long)a0 resource:(id)a1;
- (BOOL)_lockForConnectionType:(unsigned long long)a0 resource:(id *)a1;

@end
