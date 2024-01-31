@class _TtC17KnowledgeGraphKit20MAFloatVectorWrapper;

@interface MAFloatVector : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly, nonatomic) Class wrapperClass;

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit20MAFloatVectorWrapper *wrapper;

+ (id)meanVectorWithFloatVectors:(id)a0;
+ (id)onesOfCount:(long long)a0;
+ (id)vectorRepeatingFloat:(float)a0 count:(long long)a1;
+ (id)zerosOfCount:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (float)standardDeviation;
- (id)initWithData:(id)a0;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (id)array;
- (id)debugDescription;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)mean;
- (float)sum;
- (BOOL)isApproximatelyEqualTo:(id)a0;
- (id)initWithWrapper:(id)a0;
- (float)floatAtIndex:(long long)a0;
- (id)initWithFloats:(const float *)a0 count:(long long)a1;
- (BOOL)isApproximatelyEqualTo:(id)a0 epsilon:(float)a1;
- (id)vectorByAppendingDoubles:(const double *)a0 count:(long long)a1;
- (BOOL)_isArrayOfFloats:(id)a0;
- (float)dotProductWithVector:(id)a0;
- (id)sliceFromStart:(long long)a0 toEnd:(long long)a1;
- (float)sumOfSquares;
- (id)vectorByAddingScalar:(float)a0;
- (id)vectorByAddingVector:(id)a0;
- (id)vectorByAppendingArray:(id)a0;
- (id)vectorByAppendingFloat:(float)a0;
- (id)vectorByAppendingFloats:(const float *)a0 count:(long long)a1;
- (id)vectorByAppendingVector:(id)a0;
- (id)vectorByDividingByScalar:(float)a0;
- (id)vectorByElementwiseMultiplyingByVector:(id)a0;
- (id)vectorByElementwiseNaturalLogarithm;
- (id)vectorByElementwiseNaturalLogarithmIfPositive;
- (id)vectorByElementwiseRaisingToExponent:(float)a0;
- (id)vectorByMultiplyingByScalar:(float)a0;
- (id)vectorBySubtractingScalar:(float)a0;
- (id)vectorBySubtractingVector:(id)a0;

@end
