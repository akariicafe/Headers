@class TSCH3DDataBuffer, NSString;

@interface TSCH3DResource : NSObject <NSCopying, TSCH3DObjectStateResource> {
    TSCH3DDataBuffer *_cache;
    BOOL _changed;
    BOOL _cached;
    struct DataBufferInfo { int componentType; unsigned long long components; unsigned long long count; unsigned long long byteSize; unsigned long long componentByteSize; unsigned long long elementByteSize; } _dataBufferInfo;
}

@property (readonly, nonatomic) TSCH3DDataBuffer *buffer;
@property (readonly, nonatomic) struct DataBufferInfo { int x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } bufferInfo;
@property (nonatomic) int update;
@property (nonatomic) BOOL changed;
@property (readonly, nonatomic) BOOL isTexturable;
@property (nonatomic) int caching;
@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resource;
+ (id)resourceWithCaching:(int)a0;

- (void)setCache:(id)a0;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCaching:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)cacheNeedsUpdate;
- (void)flushMemory;
- (void)updateBufferInfoFromBuffer:(id)a0;

@end
