@class MPSWorkloadInfoCapture, NSString;
@protocol MTLBlitCommandEncoder, MTLDevice;

@interface MPSBenchmarkLoopBlitCommandEncoder : NSObject <MTLBlitCommandEncoder> {
    id<MTLBlitCommandEncoder> _originalCommandEncoder;
}

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)endEncoding;
- (id)initWithBlitEncoder:(id)a0;

@end
