@interface PMLSparseVector : NSObject

@property (nonatomic) unsigned long long numberOfNonZeroValues;
@property (nonatomic) long long *sparseIndices;
@property (nonatomic) float *sparseValues;
@property (readonly, nonatomic) unsigned long long length;

+ (id)sparseVectorFromDense:(id)a0;
+ (id)sparseVectorEmptyWithLength:(unsigned long long)a0;
+ (id)sparseVectorFromDense:(const float *)a0 length:(unsigned long long)a1;
+ (id)sparseVectorFromNumbers:(id)a0;
+ (id)sparseVectorFromNumbers:(id)a0 indices:(id)a1 length:(unsigned long long)a2;
+ (id)sparseVectorWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 block:(id /* block */)a2;
+ (void)sparseVectorWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 isSparseIndexInt64:(BOOL)a2 sparseIndices:(const void *)a3 sparseValues:(const float *)a4 toDenseValues:(float *)a5 withLength:(unsigned long long)a6;

- (void)setLength:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (float)minValue;
- (float)valueAtIndex:(unsigned long long)a0;
- (float)maxValue;
- (float)l2norm;
- (void)scaleInPlaceWithInversedFactor:(float)a0;
- (void)addStartId:(long long)a0 endId:(long long)a1 paddingId:(long long)a2 withMaxVectorLength:(unsigned long long)a3;
- (void)applyOneHotNormalization;
- (void)convertToBagOfIds;
- (void)enumerateNonZeroValuesWithBlock:(id /* block */)a0;
- (id)indicesAsUInt16Data;
- (id)indicesData;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indices:(long long *)a2 values:(float *)a3;
- (id)initWithLength:(unsigned long long)a0 numberOfNonZeroValues:(unsigned long long)a1 indicesData:(id)a2 valuesData:(id)a3;
- (float)l1norm;
- (float)maxAbsValue;
- (void)processNonZeroValuesInPlaceWithBlock:(id /* block */)a0;
- (id)quantizedValuesAsUInt8DataWithMin:(float)a0 max:(float)a1;
- (void)scaleWithVectorNormalization:(long long)a0;
- (void)sparseVectorToDense:(float *)a0 length:(unsigned long long)a1;
- (id)valuesData;
- (id)vectorWithConstantColumn;

@end
