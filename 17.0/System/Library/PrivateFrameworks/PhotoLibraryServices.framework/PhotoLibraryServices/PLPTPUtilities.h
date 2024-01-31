@interface PLPTPUtilities : NSObject

+ (void)enumerateAvailableSidecarFilesOnAsset:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)a0 withFileManager:(id)a1 usingBlock:(id /* block */)a2;
+ (id)pathForSidecar:(id)a0 onAsset:(id)a1;
+ (BOOL)shouldExpungeAsset:(id)a0;
+ (BOOL)shouldExpungeAsset:(id)a0 withFileManager:(id)a1;

@end
