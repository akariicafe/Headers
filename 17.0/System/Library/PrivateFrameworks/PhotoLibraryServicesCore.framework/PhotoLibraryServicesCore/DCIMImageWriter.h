@interface DCIMImageWriter : NSObject

+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)a0;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (void)writeableDataForImageData:(id)a0 imageUTIType:(id)a1 imageSource:(struct CGImageSource { } *)a2 thumbnailDataOut:(id *)a3 imageUTITypeOut:(id *)a4 exifPropertiesOut:(id *)a5 imageDataOut:(id *)a6;
+ (id)incomingDirectoryPath;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)a0 andExtension:(id)a1 isPhotoStream:(BOOL)a2;
+ (BOOL)isLivePhotoFilteredVideoPath:(id)a0;
+ (void)writeableDataForImage:(id)a0 previewImage:(id)a1 imageData:(id)a2 imageUTIType:(id)a3 imageSource:(struct CGImageSource { } *)a4 exifProperties:(id)a5 imageOrientation:(long long)a6 thumbnailDataOut:(id *)a7 imageUTITypeOut:(id *)a8 exifPropertiesOut:(id *)a9 isJPEGOut:(BOOL *)a10 imageDataOut:(id *)a11;
+ (short)savedAssetTypeForCameraCapturedAsset;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)a0;
+ (id)preferredFileExtensionForType:(id)a0;
+ (id)defaultFileExtensionForAssetType:(short)a0;
+ (id)sharedDCIMWriter;
+ (id)incomingDirectoryPathForPhotoStream;

- (int)copyPrimaryFormatImageData:(id)a0 toURL:(id)a1 properties:(id)a2;
- (BOOL)writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3;
- (BOOL)saveImageJobToDisk:(id)a0;
- (id)_cameraAssetExtensionForType:(short)a0;
- (BOOL)_writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3 duringBurst:(BOOL)a4;

@end
