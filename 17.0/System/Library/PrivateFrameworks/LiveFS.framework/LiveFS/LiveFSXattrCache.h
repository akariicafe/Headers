@class NSMutableDictionary;

@interface LiveFSXattrCache : NSObject {
    NSMutableDictionary *_cacheEntries;
    unsigned long long _entryCount;
    unsigned long long _maxItems;
    unsigned long long _maxItemSize;
    unsigned long long _entryLifetime;
    BOOL _noXattrsPresent;
    struct timespec { long long tv_sec; long long tv_nsec; } _noXattrsPresentSetTime;
}

@property BOOL noXattrsPresent;

+ (id)xattrCacheWithMaxItems:(unsigned long long)a0 andMaxItemSize:(unsigned long long)a1;
+ (id)xattrCacheWithMaxItems:(unsigned long long)a0 maxItemSize:(unsigned long long)a1 andEntryLifetimeInSeconds:(unsigned long long)a2;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)dataForName:(id)a0 wasNegative:(BOOL *)a1;
- (id)initWithMaxItems:(unsigned long long)a0 andMaxItemSize:(unsigned long long)a1;
- (id)initWithMaxItems:(unsigned long long)a0 maxItemSize:(unsigned long long)a1 andEntryLifetimeInSeconds:(unsigned long long)a2;
- (void)insertEntryForData:(id)a0 forName:(id)a1;
- (void)setData:(id)a0 forName:(id)a1;
- (void)setNegativeForName:(id)a0;

@end
