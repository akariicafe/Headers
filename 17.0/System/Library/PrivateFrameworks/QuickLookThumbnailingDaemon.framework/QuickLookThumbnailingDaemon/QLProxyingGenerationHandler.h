@class QLTGeneratorThumbnailRequest;

@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler> {
    QLTGeneratorThumbnailRequest *_generatorRequest;
}

- (void).cxx_destruct;
- (void)didGenerateThumbnailForRequestWithUUID:(id)a0 data:(id)a1 bitmapFormat:(id)a2 metadata:(id)a3 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 iconFlavor:(int)a5 thumbnailType:(long long)a6 clientShouldTakeOwnership:(BOOL)a7;
- (void)didUpdateStatus:(long long)a0 ofThumbnailGenerationWithUUID:(id)a1;
- (void)failedToGenerateThumbnailOfType:(long long)a0 forRequestWithUUID:(id)a1 error:(id)a2;
- (id)initWithGeneratorRequest:(id)a0;

@end
