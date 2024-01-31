@class QLThumbnailProvider, NSString;

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService>

@property (retain, nonatomic) QLThumbnailProvider *thumbnailProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 iconFlavor:(int)a4 contentType:(id)a5 interpolationQuality:(int)a6 wantsLowQuality:(BOOL)a7 withContents:(id)a8 additionalResourcesWrapper:(id)a9 generatorData:(id)a10 completionHandler:(id /* block */)a11;
- (void)generateThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 iconFlavor:(int)a4 contentType:(id)a5 interpolationQuality:(int)a6 wantsLowQuality:(BOOL)a7 withFileURLHandler:(id)a8 additionalResourcesWrapper:(id)a9 generatorData:(id)a10 completionHandler:(id /* block */)a11;
- (void)ioSurfaceForRequest:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)protocolHost;
- (id)protocolHostWithErrorHandler:(id /* block */)a0;
- (void)provideThumbnailForRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
