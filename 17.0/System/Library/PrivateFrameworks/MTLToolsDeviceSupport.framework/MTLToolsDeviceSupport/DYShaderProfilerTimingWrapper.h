@interface DYShaderProfilerTimingWrapper : NSObject

@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double average; double min; double max; } _cycle; struct Statistics { double average; double min; double max; } _time; } timing;

- (id)init;
- (id).cxx_construct;

@end
