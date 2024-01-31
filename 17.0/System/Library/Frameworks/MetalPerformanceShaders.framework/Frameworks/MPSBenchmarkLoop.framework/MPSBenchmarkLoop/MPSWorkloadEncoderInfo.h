@class NSString, NSMutableArray;

@interface MPSWorkloadEncoderInfo : NSObject {
    NSString *_currentComputePipelineStateLabel;
}

@property (copy, nonatomic) NSString *encoderLabel;
@property (retain, nonatomic) NSMutableArray *dispatches;

+ (id)newEncoderInfo;

- (id)init;
- (void)dealloc;
- (id)currentDispatch;
- (void)addComputePipelineState:(id)a0;
- (void)addDispatchWithThreadgroupsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)addThreadgroupMemoryLength:(unsigned long long)a0;

@end
