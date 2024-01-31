@interface NSCollectionLayoutDimension : NSObject <NSCopying>

@property (nonatomic) long long semantic;
@property (nonatomic) double dimension;
@property (readonly, nonatomic, getter=_isStretchableEstimated) BOOL _stretchableEstimated;
@property (readonly, nonatomic) BOOL isFractionalWidth;
@property (readonly, nonatomic) BOOL isFractionalHeight;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) BOOL isUniformAcrossSiblings;

+ (id)estimatedDimension:(double)a0;
+ (id)_stretchableEstimated:(double)a0;
+ (id)uniformAcrossSiblingsWithEstimate:(double)a0;
+ (id)absoluteDimension:(double)a0;
+ (id)_dimensionWithDimension:(double)a0 semantic:(long long)a1;
+ (id)fractionalHeightDimension:(double)a0;
+ (id)fractionalWidthDimension:(double)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithDimension:(double)a0 semantic:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
