@class NSArray, NSString;

@interface CMIInferenceNetworkEspressoV2 : NSObject <CMIInferenceNetwork> {
    NSString *_networkPath;
    struct e5rt_execution_stream_operation { } *_mainEsop;
    NSArray *_instances;
}

@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_loadEsopWithPath:(id)a0 esopOut:(struct e5rt_execution_stream_operation **)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_duplicateMainEsop:(struct e5rt_execution_stream_operation **)a0;
- (int)allocateInstancesWithDevice:(id)a0 instanceCount:(unsigned long long)a1 useTextureArrays:(BOOL)a2;
- (int)bindIOPortsWithInputNames:(id)a0 withOutputNames:(id)a1;
- (id)getInputs;
- (id)getInstanceWithIndex:(unsigned long long)a0;
- (id)getOutputs;
- (int)loadNetworkWithPath:(id)a0;

@end
