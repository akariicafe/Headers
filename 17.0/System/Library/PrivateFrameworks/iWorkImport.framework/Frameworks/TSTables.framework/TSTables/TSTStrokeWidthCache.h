@interface TSTStrokeWidthCache : NSObject {
    struct vector<TSTStrokeWidthCacheEntry, std::allocator<TSTStrokeWidthCacheEntry>> { struct TSTStrokeWidthCacheEntry *__begin_; struct TSTStrokeWidthCacheEntry *__end_; struct __compressed_pair<TSTStrokeWidthCacheEntry *, std::allocator<TSTStrokeWidthCacheEntry>> { struct TSTStrokeWidthCacheEntry *__value_; } __end_cap_; } _indexToCacheEntriesMap;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;

- (void)setCount:(unsigned int)a0;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)unlock;
- (void).cxx_destruct;
- (void)lockForWriting;
- (double)strokeWidthForGridIndex:(unsigned int)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1;
- (void)strokeWidthForGridIndex:(unsigned int)a0 outWidth:(double *)a1 outNextWidth:(double *)a2;
- (void)updateCacheForGridIndex:(unsigned int)a0 withMajorStrokes:(id)a1 andMinorStrokes:(id)a2;

@end
