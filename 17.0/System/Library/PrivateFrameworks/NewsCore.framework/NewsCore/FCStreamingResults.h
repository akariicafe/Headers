@class FCAsyncSerialQueue, NSMutableArray, NSHashTable;
@protocol FCStreaming;

@interface FCStreamingResults : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) id<FCStreaming> underlyingStream;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) FCAsyncSerialQueue *serialQueue;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)array;
- (id)initWithStream:(id)a0;
- (void)addObserver:(id)a0;
- (id)objectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)fetchAllObjectsWithBatchSize:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)fetchObjectsUpToCount:(unsigned long long)a0;
- (void)fetchObjectsUpToCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchObjectsUpToCount:(unsigned long long)a0 qualityOfService:(long long)a1;
- (void)fetchObjectsUpToCount:(unsigned long long)a0 qualityOfService:(long long)a1 batchSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)fetchObjectsUpToCount:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithResults:(id)a0 followedByStream:(id)a1;

@end
