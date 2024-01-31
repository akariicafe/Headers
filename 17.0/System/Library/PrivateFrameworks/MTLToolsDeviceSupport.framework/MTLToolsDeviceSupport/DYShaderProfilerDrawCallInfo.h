@class NSArray, DYShaderProfilerProgramInfo, NSString;

@interface DYShaderProfilerDrawCallInfo : NSObject {
    NSString *_vertexShaderKey;
    NSString *_fragmentShaderKey;
    NSString *_computeKernelKey;
}

@property (retain, nonatomic) NSArray *allShaderKeys;
@property (nonatomic) unsigned int drawCallIndex;
@property (nonatomic) unsigned int functionIndex;
@property (nonatomic) unsigned int pipelineStateIndex;
@property (nonatomic) unsigned long long pipelineStateId;
@property (nonatomic) unsigned long long pipelineStateFunctionIndex;
@property (nonatomic) unsigned int encoderIndex;
@property (nonatomic) unsigned long long encoderStateId;
@property (nonatomic) unsigned long long encoderFunctionIndex;
@property (nonatomic) unsigned int commandBufferIndex;
@property (nonatomic) int subCommandIndex;
@property (retain, nonatomic) DYShaderProfilerProgramInfo *programInfo;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } vertexTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } fragmentTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } computeTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } timing;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
