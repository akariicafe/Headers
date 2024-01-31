@class NSString;

@interface MPSWorkloadDispatchInfo : NSObject

@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup;
@property (nonatomic) unsigned long long threadsgroupMemoryLength;
@property (copy, nonatomic) NSString *computePipelineStateLabel;

+ (id)newDispatchInfo;

- (id)init;
- (void)dealloc;

@end
