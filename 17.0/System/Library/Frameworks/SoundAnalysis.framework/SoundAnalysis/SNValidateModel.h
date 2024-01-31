@interface SNValidateModel : NSObject

+ (BOOL)ensureMultiArrayIsFreelyShapedWithConstraint:(id)a0 hasDataType:(long long)a1 error:(id *)a2;
+ (BOOL)ensureFeatureWithDescription:(id)a0 isOptional:(BOOL)a1 error:(id *)a2;
+ (BOOL)ensureFeatureWithDescription:(id)a0 isOptional:(BOOL)a1 isFreelyShapedMultiArrayWithDataType:(long long)a2 error:(id *)a3;
+ (BOOL)ensureFeatureWithDescription:(id)a0 isOptional:(BOOL)a1 isMultiArrayWithDataType:(long long)a2 dimensionSizeRanges:(id)a3 error:(id *)a4;
+ (BOOL)ensureFeatureWithDescription:(id)a0 isOptional:(BOOL)a1 isMultiArrayWithDataType:(long long)a2 shapeOptions:(id)a3 error:(id *)a4;
+ (BOOL)ensureModelDescription:(id)a0 hasInputFeatureNames:(id)a1 hasOutputFeatureNames:(id)a2 error:(id *)a3;
+ (BOOL)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 andDimensionSizeRanges:(id)a2 error:(id *)a3;
+ (BOOL)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 andShapeOptions:(id)a2 error:(id *)a3;
+ (BOOL)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 error:(id *)a2;
+ (BOOL)ensureMultiArrayIsFreelyShapedByShapeConstraint:(id)a0 error:(id *)a1;
+ (BOOL)ensureMultiArrayIsRequiredByFeatureDescription:(id)a0 error:(id *)a1;
+ (BOOL)ensureMultiArrayShapeConstraint:(id)a0 hasDimensionSizeRanges:(id)a1 error:(id *)a2;
+ (BOOL)ensureMultiArrayShapeConstraint:(id)a0 hasShapeOptions:(id)a1 error:(id *)a2;

- (id)init;

@end
