@interface PLImageLoadingUtilities : NSObject

+ (void)_assetsdImageForAsset:(id)a0 withFormat:(id)a1 allowPlaceholder:(BOOL)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 sync:(BOOL)a6 isCanceledHandler:(id /* block */)a7 completion:(id /* block */)a8;
+ (id)synchronousImageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(BOOL)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(BOOL)a4 networkAccessForced:(BOOL)a5 trackCPLDownload:(BOOL)a6 outImageProperties:(const struct __CFDictionary **)a7 outImageDataInfo:(id *)a8 outCPLDownloadContext:(id *)a9;
+ (BOOL)canAccessImageForAsset:(id)a0;
+ (void)imageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(BOOL)a2 optimalSourcePixelSize:(struct CGSize { double x0; double x1; })a3 networkAccessAllowed:(BOOL)a4 networkAccessForced:(BOOL)a5 trackCPLDownload:(BOOL)a6 isCanceledHandler:(id /* block */)a7 completion:(id /* block */)a8 sync:(BOOL)a9;
+ (id)synchronousImageForAsset:(id)a0 withFormat:(unsigned short)a1 allowPlaceholder:(BOOL)a2 outImageProperties:(const struct __CFDictionary **)a3 outDeliveredPlaceholder:(BOOL *)a4;

@end
