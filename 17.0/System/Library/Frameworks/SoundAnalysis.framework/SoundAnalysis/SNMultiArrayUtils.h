@interface SNMultiArrayUtils : NSObject

+ (id)prependUnitaryDimensionsToMultiArray:(id)a0 totalDimensionCount:(long long)a1 error:(id *)a2;
+ (BOOL)checkMultiArrayHasStandardStrides:(id)a0;
+ (id)numberAtOffsetInMultiArray:(id)a0 offset:(long long)a1;
+ (id)numberFromMultiArrayDataElement:(void *)a0 dataType:(long long)a1;
+ (void *)pointerToOffsetInMultiArray:(id)a0 offset:(long long)a1;
+ (void *)pointerToOffsetInMultiArrayData:(void *)a0 offset:(long long)a1 dataType:(long long)a2;
+ (id)prependUnitaryDimensionsToMultiArray:(id)a0 count:(long long)a1 error:(id *)a2;
+ (id)shapedNumberArrayFromMultiArray:(id)a0;
+ (id)standardStridesForShape:(id)a0;
+ (id)unshapedNumberArrayFromMultiArray:(id)a0;
+ (BOOL)validateMultiArrayHasStandardStrides:(id)a0 error:(id *)a1;

- (id)init;

@end
