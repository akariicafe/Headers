@class NSString;

@interface CMIInferenceExecutionStreamEspressoV2 : NSObject <CMIInferenceExecutionStream>

@property (nonatomic) struct e5rt_execution_stream { } *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
