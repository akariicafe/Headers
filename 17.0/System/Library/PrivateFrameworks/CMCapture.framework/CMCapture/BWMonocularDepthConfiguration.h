@interface BWMonocularDepthConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) unsigned int monocularDepthType;
@property (readonly, nonatomic) long long depthPrioritization;

- (id)initWithInferenceType:(int)a0 monocularDepthType:(unsigned int)a1;

@end
