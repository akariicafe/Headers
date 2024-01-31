@interface PGFeatureTransformerToUnitNorm : PGFeatureSliceTransformer

+ (id)name;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;

- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
- (id)applyTransformationToFloatVector:(id)a0 error:(id *)a1;

@end
