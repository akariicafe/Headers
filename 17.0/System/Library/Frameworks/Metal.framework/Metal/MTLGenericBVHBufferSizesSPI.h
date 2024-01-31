@interface MTLGenericBVHBufferSizesSPI : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long headerBufferSize;
@property (nonatomic) unsigned long long innerNodeBufferSize;
@property (nonatomic) unsigned long long leafNodeBufferSize;
@property (nonatomic) unsigned long long primitiveBufferSize;
@property (nonatomic) unsigned long long geometryBufferSize;
@property (nonatomic) unsigned long long instanceTransformBufferSize;
@property (nonatomic) unsigned long long perPrimitiveDataBufferSize;

- (id)initWithVersion:(unsigned long long)a0;

@end
