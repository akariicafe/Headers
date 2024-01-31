@protocol MTLParallelRenderCommandEncoder, MTLRenderPipelineState;

@interface DYMTLParallelRenderCommandEncoderStateTracker : NSObject <DYMTLParallelRenderCommandEncoderStateTracker> {
    id<MTLParallelRenderCommandEncoder> _renderEncoder;
    id<MTLRenderPipelineState> _renderPipelineState;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)descriptor;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_setDefaultsWithDescriptor:(id)a0 device:(id)a1;
- (id)initWithEncoder:(id)a0 descriptor:(id)a1;

@end
