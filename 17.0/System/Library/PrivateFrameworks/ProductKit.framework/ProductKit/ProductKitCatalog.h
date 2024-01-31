@class ProductKitCatalogInternal;

@interface ProductKitCatalog : NSObject

@property (readonly, nonatomic) ProductKitCatalogInternal *underlyingObject;

+ (BOOL)isProductKitURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateCatalogWithCompletionHandler:(id /* block */)a0;
- (void)watchBandFilesForFeatureWithURL:(id)a0 featureString:(id)a1 completionHandler:(id /* block */)a2;
- (void)watchBandImageForFeatureWithURL:(id)a0 featureString:(id)a1 variant:(id)a2 completionHandler:(id /* block */)a3;
- (void)watchBandFilesForFeatureWithURL:(id)a0 featureString:(id)a1 variant:(id)a2 completionHandler:(id /* block */)a3;
- (void)watchBandImageForFeatureWithURL:(id)a0 featureString:(id)a1 completionHandler:(id /* block */)a2;

@end
