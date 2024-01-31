@class NSMutableArray;

@interface BWVideoOrientationTimeMachine : NSObject {
    NSMutableArray *_cache;
    unsigned long long _capacity;
    struct opaqueCMFormatDescription { } *_formatDescription;
    unsigned int _metadataLocalID;
    struct OpaqueFigSimpleMutex { } *_propertyMutex;
}

+ (void)initialize;

- (void)dealloc;
- (id)_cachedItemsFromPTSSeconds:(double)a0 toPTSSeconds:(double)a1;
- (void)addItemToCacheWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 exifOrientation:(short)a1;
- (id)copyVideoOrientationSbufFromPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 referencePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)debugDescription;
- (id)initWithCapacity:(unsigned long long)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1 metadataLocalID:(unsigned int)a2;

@end
