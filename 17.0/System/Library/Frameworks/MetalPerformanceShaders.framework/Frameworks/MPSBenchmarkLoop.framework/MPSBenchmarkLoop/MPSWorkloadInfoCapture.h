@class MPSWorkloadEncoderInfo, NSMutableArray;

@interface MPSWorkloadInfoCapture : NSObject {
    MPSWorkloadEncoderInfo *_currentEncoderInfo;
}

@property (readonly, retain, nonatomic) NSMutableArray *allEncoders;
@property (readonly, retain, nonatomic) NSMutableArray *computeEncoders;
@property (readonly, retain, nonatomic) NSMutableArray *blitEncoders;
@property (readonly, nonatomic) unsigned long long numberOfDispatches;

- (id)init;
- (void)dealloc;
- (void)print;
- (void)captureWithCommandQueue:(id)a0 workload:(id)a1 completionHandler:(id /* block */)a2 scheduleHanlder:(id /* block */)a3;
- (void)endBlitEncoderWithLabel:(id)a0;
- (void)endComputeEncoderWithLabel:(id)a0;
- (void)startBlitEncoder;
- (void)startComputeEncoder;

@end
