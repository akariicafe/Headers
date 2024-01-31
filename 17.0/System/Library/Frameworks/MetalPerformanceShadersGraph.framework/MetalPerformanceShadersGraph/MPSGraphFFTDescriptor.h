@interface MPSGraphFFTDescriptor : MPSGraphObject <NSCopying>

@property (nonatomic) BOOL inverse;
@property (nonatomic) unsigned long long scalingMode;
@property (nonatomic) BOOL roundToOddHermitean;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
