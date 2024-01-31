@interface BWDeferredProcessorController : BWStillImageProcessorController {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
}

+ (BOOL)usesCustomProcessingFlow;

- (void)reset;
- (void)dealloc;
- (int)process;
- (id)initWithConfiguration:(id)a0;
- (int)prepare;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
