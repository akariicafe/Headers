@class NSString;

@interface PMLMultiLabelE5Classifier : NSObject <PMLMultiLabelClassifierProtocol> {
    struct e5rt_execution_stream_operation { } *_main_esop;
    struct e5rt_io_port { } *_input_port;
    struct e5rt_tensor_desc { } *_input_tensor;
    struct e5rt_tensor_desc_dtype { } *_input_tensor_dtype;
    struct e5rt_buffer_object { } *_input_buffer;
    float *_input_ids;
    struct e5rt_io_port { } *_output_port;
    struct e5rt_tensor_desc { } *_output_tensor;
    struct e5rt_tensor_desc_dtype { } *_output_tensor_dtype;
    struct e5rt_buffer_object { } *_output_buffer;
    float *_output_scores;
    struct e5rt_execution_stream { } *_execution_stream;
    unsigned long long _inputNumParameters;
    unsigned long long _outputNumParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifierWithE5File:(id)a0;

- (void)dealloc;
- (id)predict:(id)a0;
- (unsigned long long)outputDimension;
- (id)initWithE5File:(id)a0;
- (BOOL)initializeNetworkWithE5File:(id)a0;

@end
