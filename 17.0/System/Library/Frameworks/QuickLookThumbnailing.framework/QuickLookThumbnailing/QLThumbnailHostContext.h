@class NSOperationQueue, NSString;
@protocol QLThumbnailSurfaceGeneratorProtocol;

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost>

@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue;
@property (weak, nonatomic) id<QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator;
@property (copy, nonatomic) NSString *supportedConcurrencyLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)generateThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 iconFlavor:(int)a4 withItem:(id)a5 ioSurfaceGenerator:(id)a6 generatorData:(id)a7 interpolationQuality:(int)a8 wantsLowQuality:(BOOL)a9 completionHandler:(id /* block */)a10;
- (void)ioSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (long long)maxConcurrentGenerationCount;
- (id)protocolServiceWithErrorHandler:(id /* block */)a0;

@end
