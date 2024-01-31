@class PTMetalContext, NSString, PTUtil, NSMutableArray;
@protocol MTLComputePipelineState;

@interface PTGraphRenderer : NSObject {
    PTMetalContext *_metalContext;
    int _samples;
    void /* unknown type, empty encoding */ _range;
    PTUtil *_util;
    id<MTLComputePipelineState> _renderGraphToRegion;
    id<MTLComputePipelineState> _updateGraphSequenceWithBuffer;
    id<MTLComputePipelineState> _updateGraphSequenceWithTextureSample;
    NSMutableArray *_buffers;
}

@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithMetalContext:(SEL)a0 range:(id)a1 samples:(int)a2 sequences:(int)a3 title:(id)a4;
- (void)renderWithRect:(SEL)a0 frameIndex:(int)a1 outTexture:(id)a2;
- (void)updateWithSequenceId:(int)a0 buffer:(id)a1 offset:(unsigned long long)a2 frameIndex:(int)a3;
- (void)updateWithSequenceId:(int)a0 buffer:(id)a1 offset:(unsigned long long)a2 scale:(float)a3 frameIndex:(int)a4;
- (void)updateWithSequenceId:(SEL)a0 texture:(int)a1 samplePos:(id)a2 scale:(float)a3 frameIndex:(int)a4;
- (void)updateWithSequenceId:(int)a0 value:(float)a1 frameIndex:(int)a2;

@end
