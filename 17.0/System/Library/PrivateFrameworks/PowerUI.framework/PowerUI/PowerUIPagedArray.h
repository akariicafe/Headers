@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PowerUIPagedArray : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) long long endChunkIndex;
@property (nonatomic) long long currentChunkIndex;
@property (nonatomic) long long highestIndexInMemory;
@property (nonatomic) long long numberOfQueries;
@property (readonly, nonatomic) NSMutableDictionary *chunks;
@property (readonly, nonatomic) id /* block */ getChunkHandler;
@property (readonly, nonatomic) long long chunkSize;

- (id)objectAtIndexedSubscript:(long long)a0;
- (id)objectAtIndex:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)chunkArrayForIndex:(long long)a0;
- (long long)countDynamic;
- (id)initWithChunkSize:(long long)a0 chunkGetter:(id /* block */)a1;
- (BOOL)isIndexInMemory:(long long)a0;
- (id)keyForChunkIndex:(long long)a0;
- (void)loadChunk:(long long)a0;
- (id)retrieveElementFromMemoryAtIndex:(long long)a0;

@end
