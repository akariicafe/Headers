@interface PLAssetSharingUtilities : NSObject

+ (id)playerItemForVideoURL:(id)a0 fallbackFilePath:(id)a1 library:(id)a2;
+ (id)exportSessionForVideoURL:(id)a0 library:(id)a1 fallbackFilePath:(id)a2 exportPreset:(id)a3;
+ (double)_durationForVideoAssetURL:(id)a0 library:(id)a1;
+ (double)_durationForVideoFilePath:(id)a0;
+ (long long)_estimatedOutputFileLengthForDuration:(double)a0 exportPreset:(id)a1 exportProperties:(id)a2;
+ (id)_objectBuilderFromVideoFilePath:(id)a0 metadata:(id)a1;
+ (id)_playerItemForVideoAssetURL:(id)a0 library:(id)a1;
+ (struct CGImage { } *)_thumbnailForAssetURL:(id)a0 library:(id)a1 useAspect:(BOOL)a2;
+ (struct CGImage { } *)aspectRatioThumbnailForAssetURL:(id)a0 library:(id)a1;
+ (id)assetForVideoURL:(id)a0 metadata:(id)a1 library:(id)a2 outAudioMix:(id *)a3 outVideoComposition:(id *)a4;
+ (long long)estimatedOutputFileLengthForVideoFilePath:(id)a0 metadata:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3;
+ (long long)estimatedOutputFileLengthForVideoURL:(id)a0 library:(id)a1 fallbackFilePath:(id)a2 exportPreset:(id)a3 exportProperties:(id)a4;
+ (id)exportSessionForVideoFilePath:(id)a0 metadata:(id)a1 exportPreset:(id)a2;
+ (id)filePathForVideoURL:(id)a0 library:(id)a1 outMetadata:(id *)a2;
+ (id)playerItemForVideoFilePath:(id)a0 metadata:(id)a1;
+ (struct CGImage { } *)thumbnailForAssetURL:(id)a0 library:(id)a1;

@end
