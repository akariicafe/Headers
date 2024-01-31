@class QLFileThumbnailRequest, QLThumbnailReply;
@protocol QLThumbnailServiceSurfaceGeneratorProtocol;

@interface QLServiceThumbnailRenderer : NSObject

@property (retain, nonatomic) QLFileThumbnailRequest *request;
@property (retain, nonatomic) QLThumbnailReply *reply;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<QLThumbnailServiceSurfaceGeneratorProtocol> surfaceGenerator;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_IOSurfaceSizeFromThumbnailReply:(id)a0;
- (void)_afterGeneratingIOSurfaceThumbnail:(BOOL)a0 surface:(id)a1;
- (BOOL)_canCreateContextOfSize:(struct CGSize { double x0; double x1; })a0 forRequest:(id)a1;
- (void)_didGenerateThumbnailWithData:(id)a0 bitmapFormat:(id)a1 drawingContextSize:(struct CGSize { double x0; double x1; })a2;
- (void)_didReceiveThumbnailURL:(id)a0;
- (void)_drawInContextOfSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 drawingBlock:(id /* block */)a2;
- (void)_drawInCurrentContextOfSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 drawingBlock:(id /* block */)a2;
- (void)_drawInIOSurface;
- (void)_executeCompletionHandlerWithThumbnailData:(id)a0 thumbnailURL:(id)a1 ioSurface:(id)a2 drawingContextSize:(struct CGSize { double x0; double x1; })a3 bitmapFormat:(id)a4 didGenerateThumbnail:(BOOL)a5 error:(id)a6;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (void)_thumbnailGenerationDidFailWithError:(id)a0;
- (void)generateThumbnailAndPerformCompletionHandler;
- (id)initWithRequest:(id)a0 reply:(id)a1 completionHandler:(id /* block */)a2 surfaceGenerator:(id)a3;

@end
