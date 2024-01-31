@class NSString, NSDictionary, AVAsset;

@interface PFVideoMetadata : NSObject {
    AVAsset *_asset;
}

@property (readonly) BOOL isSpatial;
@property (readonly) BOOL isHDR;
@property (readonly) BOOL isPlayable;
@property (readonly) BOOL isDecodable;
@property (readonly) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly) NSDictionary *outOfBandHints;

+ (id)outOfBandHintsForVideoAsset:(id)a0;
+ (BOOL)readMetadataType:(unsigned char)a0 fromFileURL:(id)a1 value:(id *)a2 error:(id *)a3;
+ (BOOL)readMetadataType:(unsigned char)a0 fromAVAsset:(id)a1 value:(id *)a2 error:(id *)a3;
+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)a0 fromArray:(id)a1 error:(id *)a2;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)a0;
+ (BOOL)hasValidMetadataForLoopingVideoAsset:(id)a0;
+ (void)loadMetadataForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)metadataItemValueFromAsset:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (id)metadataItemsWithMetadataType:(unsigned char)a0 value:(id)a1 error:(id *)a2;
+ (id)quickTimeMetadataItemValueFromAsset:(id)a0 withKey:(id)a1;
+ (id)quickTimeMetadataItemsWithKey:(id)a0 value:(id)a1;
+ (BOOL)videoAssetIsDecodable:(id)a0;
+ (BOOL)videoAssetIsHighDynamicRange:(id)a0;
+ (BOOL)videoAssetIsMonoski:(id)a0;
+ (BOOL)videoAssetIsPlayable:(id)a0;
+ (BOOL)videoAssetIsSpatial:(id)a0;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)a0;
+ (BOOL)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackFormatDescriptionIsHDR10:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackFormatDescriptionIsProResLOG:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackIsSpatial:(id)a0;

- (void).cxx_destruct;

@end
