@interface MPSNNLocalCorrelation : MPSNNReduceBinary

@property (nonatomic) unsigned long long windowInX;
@property (nonatomic) unsigned long long windowInY;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 windowInX:(unsigned long long)a1 windowInY:(unsigned long long)a2 strideInX:(unsigned long long)a3 strideInY:(unsigned long long)a4;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 primaryOffset:(struct { long long x0; long long x1; long long x2; } *)a3 secondaryOffset:(struct { long long x0; long long x1; long long x2; } *)a4 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a5;

@end
