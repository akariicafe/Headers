@interface QLPreviewExtensionRenderer : NSObject

@property (retain) id preview;

- (void).cxx_destruct;
- (id)initWithPreview:(id)a0;
- (id)_failedToDrawError;
- (void)drawInContextOfSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)drawInPDFContextOfSize:(struct CGSize { double x0; double x1; })a0 drawingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
