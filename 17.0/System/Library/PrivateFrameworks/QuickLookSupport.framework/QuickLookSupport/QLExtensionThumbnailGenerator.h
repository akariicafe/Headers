@class QLExtensionManager, NSString;

@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol>

@property (retain, nonatomic) QLExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasThirdPartyThumbnailGeneratorForContentType:(id)a0;
+ (BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)a0;
+ (BOOL)hasThumbnailGeneratorForContentType:(id)a0 firstPartyExtension:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)ioSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)generatePlatformImageThumbnailForRequest:(id)a0 extensionThumbnailItem:(id)a1 iconFlavor:(int)a2 wantsLowQuality:(BOOL)a3 completionBlock:(id /* block */)a4;
- (id)_generateImageFromRawData:(id)a0 bitmapFormat:(id)a1 scale:(double)a2;
- (id)_generateImageFromURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
