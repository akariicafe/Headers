@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (void *)internalRepresentation;
- (id)init;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)waitUntilCompletedAndReturnError:(id *)a0;
- (id)initWithInternalTask:(void *)a0;

@end
