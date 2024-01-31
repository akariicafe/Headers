@interface _DPPrioPlusPlusMetadataAlgorithm : NSObject

@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) struct { unsigned int *x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; struct _poly_memory *x5; } *prioMemory;

+ (id)initializeWithDimensionality:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithDimensionality:(unsigned long long)a0;
- (id)randomize:(id)a0;

@end
