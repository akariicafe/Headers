@class ARUIRingsCountdownState, ARUIRingsAlphaReductionState, ARUIRingsEmptyState;

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsCountdownState *_countdownState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)initWithDeviceSPI:(id)a0 librarySPI:(id)a1;
- (id)pipelineForConfiguration:(id)a0;

@end
