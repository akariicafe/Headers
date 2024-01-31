@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *_constData;
    NSMutableData *_mutableData;
}

@property (readonly, nonatomic) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const void *)a0 data:(id)a1;
+ (id)bufferWithCapacityDimension:(const void *)a0 mutableData:(id)a1;

- (unsigned long long)count;
- (void *)mutableData;
- (const void *)data;
- (void).cxx_destruct;
- (int)componentType;
- (id)initWithCapacityDimension:(const void *)a0 data:(id)a1;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const void *)a0;
- (id)initWithCapacityDimension:(const void *)a0 mutableData:(id)a1;
- (void)resizeFillDimension:(const void *)a0;

@end
