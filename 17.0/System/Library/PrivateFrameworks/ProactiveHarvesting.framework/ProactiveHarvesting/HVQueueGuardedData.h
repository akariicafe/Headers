@class BMContentStream, HVQueueBookmark, BMSource, NSMutableSet, _PASBloomFilterForWriting, NSObject, NSMutableArray;
@protocol OS_os_transaction, OS_dispatch_source;

@interface HVQueueGuardedData : NSObject

@property (readonly, nonatomic) NSMutableSet *dequeuedContentIdentifiers;
@property (readonly, nonatomic) NSMutableArray *memoryStorage;
@property (readonly, nonatomic) short memoryStorageLimit;
@property (retain, nonatomic) NSObject<OS_os_transaction> *memoryStorageTransaction;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryStorageSigtermSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryStorageIdleSource;
@property (readonly, nonatomic) BMContentStream *diskStorage;
@property (retain, nonatomic) BMSource *diskStorageSource;
@property (readonly, nonatomic) HVQueueBookmark *bookmark;
@property (retain, nonatomic) _PASBloomFilterForWriting *diskContentBloomFilter;
@property (nonatomic) unsigned int diskStorageEventCount;
@property (nonatomic) BOOL diskStorageIsKnownToBeEmpty;
@property (nonatomic) unsigned int enqueuedCount;
@property (nonatomic) unsigned int dequeuedCount;
@property (nonatomic) unsigned int bloomFilterHits;
@property (nonatomic) unsigned int bloomFilterMisses;
@property (nonatomic) unsigned int bloomFilterFalsePositives;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isMemoryStorageFull;

@end
