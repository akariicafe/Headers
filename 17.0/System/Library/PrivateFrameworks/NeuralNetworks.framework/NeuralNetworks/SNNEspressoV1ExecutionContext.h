@class NSArray, SNNComputePrecision, SNNComputeUnit;

@interface SNNEspressoV1ExecutionContext : NSObject {
    struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } _cppNetwork;
}

@property (readonly, nonatomic) SNNComputeUnit *primaryComputeUnit;
@property (readonly, nonatomic) NSArray *computeUnits;
@property (readonly, nonatomic) SNNComputePrecision *computePrecision;
@property (readonly) NSArray *globalNames;
@property (readonly) NSArray *inputNames;
@property (readonly) NSArray *outputNames;
@property (readonly) void *context;
@property (readonly) struct { void *plan; int network_index; } network;
@property (readonly) void *plan;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)dataTypeForBlobWithName:(id)a0;
- (unsigned long long)dataTypeForInputWithName:(id)a0;
- (unsigned long long)dataTypeForOutputWithName:(id)a0;
- (void)deallocEspressoResources;
- (id)initWithMILProgram:(id)a0 primaryComputeUnit:(id)a1 computeUnits:(id)a2 preferredMetalDevice:(id)a3 computePrecision:(id)a4 error:(id *)a5;
- (id)inputAndOutputNames;
- (unsigned long long)rawSizeForInputWithName:(id)a0;
- (unsigned long long)rawSizeForOutputWithName:(id)a0;
- (id)shapeForBlobWithName:(id)a0;
- (id)shapeForInputWithName:(id)a0;
- (id)shapeForOutputWithName:(id)a0;

@end
