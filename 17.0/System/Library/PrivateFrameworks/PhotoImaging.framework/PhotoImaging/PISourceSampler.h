@class NSString;

@interface PISourceSampler : NUColorSampler <PITagColorSampler>

@property (readonly, nonatomic) NSString *tag;

- (id)_pipelineFilters;

@end
