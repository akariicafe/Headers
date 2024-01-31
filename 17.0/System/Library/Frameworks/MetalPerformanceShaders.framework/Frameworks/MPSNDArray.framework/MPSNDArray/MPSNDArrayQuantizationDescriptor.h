@interface MPSNDArrayQuantizationDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL isPerChannel;
@property (nonatomic) unsigned int quantizationDataType;
@property (nonatomic) BOOL numGroups;
@property (nonatomic) unsigned long long axis;
@property (nonatomic) int quantizationScheme;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(unsigned int)a0 quantizationScheme:(int)a1;

@end
