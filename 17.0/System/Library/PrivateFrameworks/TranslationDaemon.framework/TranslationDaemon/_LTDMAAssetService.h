@interface _LTDMAAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)_queue;
+ (id)_errorFromDownloadResult:(long long)a0;
+ (id)_errorFromQueryResult:(long long)a0;
+ (long long)_returnTypeForFilter:(unsigned long long)a0;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadCatalogForAssetType:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isInvalidPallasCatalog:(id)a0;
+ (id)maDownloadOptionsFrom:(unsigned long long)a0;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)queryAssetType:(id)a0 filter:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)queryAssetType:(id)a0 filter:(unsigned long long)a1 error:(id *)a2;

@end
