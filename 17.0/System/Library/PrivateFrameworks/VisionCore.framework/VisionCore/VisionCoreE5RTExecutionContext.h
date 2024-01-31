@class NSObject, NSString, NSArray, VisionCoreE5RTFunction, VisionCoreNamedObjects, VisionCoreE5RTExecutionBoundPorts;
@protocol OS_dispatch_queue;

@interface VisionCoreE5RTExecutionContext : NSObject {
    struct e5rt_execution_stream_operation { } *_executionStreamOperationHandle;
    struct e5rt_execution_stream { } *_executionStreamHandle;
    VisionCoreE5RTExecutionBoundPorts *_boundInputPorts;
    VisionCoreE5RTExecutionBoundPorts *_boundOutputPorts;
    NSObject<OS_dispatch_queue> *_configurationProvidedCompletionQueue;
}

@property (readonly, nonatomic) VisionCoreE5RTFunction *function;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *inputs;
@property (readonly, copy, nonatomic) NSArray *outputs;
@property (readonly, nonatomic, getter=isPrebound) BOOL prebound;
@property (readonly, copy, nonatomic) VisionCoreNamedObjects *boundInputObjects;
@property (readonly, copy, nonatomic) VisionCoreNamedObjects *boundOutputObjects;

+ (id)newContextForFunction:(id)a0 withConfiguration:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void)executeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)executeWithInputObjects:(id)a0 error:(id *)a1;
- (id)_initWithOwnedOperationHandle:(struct e5rt_execution_stream_operation **)a0 function:(id)a1 inputs:(id)a2 outputs:(id)a3;
- (BOOL)executeAndReturnError:(id *)a0;
- (void)executeWithInputObjects:(id)a0 completionHandler:(id /* block */)a1;

@end
