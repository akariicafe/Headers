@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CMIInferenceNetworkEspressoV1 : NSObject <CMIInferenceNetwork> {
    NSArray *_instances;
    int _planSubmitCount;
}

@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) struct { void *plan; int network_index; } network;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) void *plan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (int)_planSubmit;
- (int)_planSubmitComplete:(const struct { int x0; int x1; char *x2; } *)a0 planSubmitId:(int)a1;
- (int)allocateInstancesWithDevice:(id)a0 instanceCount:(unsigned long long)a1 useTextureArrays:(BOOL)a2;
- (int)bindIOPortsWithInputNames:(id)a0 withOutputNames:(id)a1;
- (id)getInputs;
- (id)getInstanceWithIndex:(unsigned long long)a0;
- (id)getOutputs;
- (int)loadNetworkWithPath:(id)a0 context:(void *)a1;

@end
