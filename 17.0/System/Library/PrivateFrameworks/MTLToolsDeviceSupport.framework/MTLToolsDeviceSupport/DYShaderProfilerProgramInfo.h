@class NSArray, NSMutableArray, NSString;

@interface DYShaderProfilerProgramInfo : NSObject {
    NSString *_vertexShaderKey;
    NSString *_fragmentShaderKey;
    NSString *_computeKernelKey;
}

@property (readonly, nonatomic) NSArray *allShaderKeys;
@property (nonatomic) unsigned int programIndex;
@property (nonatomic) unsigned long long programId;
@property (nonatomic) unsigned long long pipelineStateFunctionIndex;
@property (nonatomic) BOOL valid;
@property (readonly, nonatomic) unsigned int programPipelineIndex;
@property (readonly, nonatomic) unsigned long long pipelineStateId;
@property (readonly, nonatomic) NSMutableArray *drawCallInfoList;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } vertexTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } fragmentTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } computeTiming;
@property (readonly, nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } timing;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
