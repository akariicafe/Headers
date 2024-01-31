@protocol MTLDepthStencilState, MTLDevice, MTLComputePipelineState, MTLRenderPipelineState;

@interface LAUIPearlGlyphViewStaticResources : NSObject {
    struct optional<LAUI_uniform_cubic_b_spline_renderer::renderer_t::shared_state_t> { union { char __null_state_; struct shared_state_t { id<MTLDevice> _device; id<MTLDepthStencilState> _depth_stencil_state; id<MTLComputePipelineState> _tesselation_factor_pipeline; id<MTLRenderPipelineState> _tube_pipeline; struct array<id<MTLRenderPipelineState>, 3UL> { id<MTLRenderPipelineState> __elems_[3]; } _begin_cap_pipelines; struct array<id<MTLRenderPipelineState>, 3UL> { id<MTLRenderPipelineState> __elems_[3]; } _end_cap_pipelines; id<MTLComputePipelineState> _horizontal_blur_pipeline; id<MTLComputePipelineState> _vertical_blur_pipeline; id<MTLComputePipelineState> _accumulator_pipeline; } __val_; } ; BOOL __engaged_; } _state;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
