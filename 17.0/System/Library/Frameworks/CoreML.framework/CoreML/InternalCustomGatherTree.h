@interface InternalCustomGatherTree : NSObject <MLCustomLayer>

@property (readonly, nonatomic) struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } shape;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)evaluateOnCPUWithInputs:(id)a0 outputs:(id)a1 error:(id *)a2;
- (id)initWithParameterDictionary:(id)a0 error:(id *)a1;
- (id)outputShapesForInputShapes:(id)a0 error:(id *)a1;
- (BOOL)setWeightData:(id)a0 error:(id *)a1;

@end
