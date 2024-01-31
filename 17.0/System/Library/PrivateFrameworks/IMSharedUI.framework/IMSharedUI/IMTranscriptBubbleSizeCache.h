@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject

@property (retain) NSMutableArray *sizeCache;

- (id)init;
- (void)flush;
- (void).cxx_destruct;
- (id)_cacheEntryForMaximumWidth:(double)a0 getEffectiveIndex:(unsigned long long *)a1;
- (void)_insertCacheEntry:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forMaximumWidth:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForMaximumWidth:(double)a0;

@end
