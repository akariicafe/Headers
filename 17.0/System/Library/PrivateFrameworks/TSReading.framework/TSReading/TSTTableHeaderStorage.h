@class NSString, TSTTableHeaderStorageBucket;

@interface TSTTableHeaderStorage : TSPContainedObject <TSTTableHeaderStorage> {
    TSTTableHeaderStorageBucket *mBuckets[1];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)count;
- (id)initWithOwner:(id)a0;
- (void)removeHeaderForKey:(unsigned int)a0;
- (void)setHeader:(id)a0 forKey:(unsigned int)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 willModify:(BOOL)a2;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1 createIfNotThere:(BOOL)a2;
- (unsigned int)lowerBound:(unsigned int)a0;
- (void)makeHeadersPerformSelector:(SEL)a0 willModify:(BOOL)a1;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeAllHeaders;
- (void)shiftKeysAtIndex:(unsigned int)a0 amount:(int)a1;
- (unsigned int)upperBound:(unsigned int)a0;

@end
