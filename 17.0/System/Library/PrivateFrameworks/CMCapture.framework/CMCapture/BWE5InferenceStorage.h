@class NSDictionary, NSMapTable;

@interface BWE5InferenceStorage : BWInferenceProviderStorage {
    NSDictionary *_bindingNameByRequirement;
    NSMapTable *_tensorPortByRequirement;
}

@property (readonly, nonatomic) struct e5rt_execution_stream_operation { } *operation;
@property (readonly, nonatomic) struct e5rt_execution_stream { } *stream;

- (void)clear;
- (void)dealloc;
- (id)bindingNameForRequirement:(id)a0;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (id)initWithOperation:(struct e5rt_execution_stream_operation { } *)a0 stream:(struct e5rt_execution_stream { } *)a1 bindingNameByRequirement:(id)a2 requirementsNeedingPixelBuffers:(id)a3 requirementsNeedingPixelBufferPools:(id)a4 requirementsNeedingTensors:(id)a5;
- (void)setTensorPort:(struct e5rt_io_port **)a0 forRequirement:(id)a1;
- (struct e5rt_io_port **)tensorPortForRequirement:(id)a0;

@end
