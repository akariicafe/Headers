@class NSString, NSMutableDictionary;

@interface PXCameraAsset : NSObject

@property (retain, nonatomic) NSMutableDictionary *icAssetDict;
@property (copy, nonatomic) NSString *plRelatedUUID;
@property (nonatomic) unsigned long long icAssetHandle;
@property (readonly) unsigned long long unsignedIntegerValue;

- (unsigned long long)thumbnailSize;
- (BOOL)hasThumbnail;
- (id)filename;
- (void)dealloc;
- (id)originalFilename;
- (id)modificationDate;
- (BOOL)timeLapse;
- (unsigned long long)fileSize;
- (id)captureDate;
- (double)duration;
- (id)assetDictionary;
- (unsigned long long)orientation;
- (id)groupUUID;
- (id)createdFilename;
- (BOOL)burstFavorite;
- (BOOL)burstPicked;
- (id)burstUUID;
- (BOOL)firstPicked;
- (BOOL)highFramerate;
- (id)originatingAssetID;
- (id)relatedUUID;
- (id)spatialOverCaptureGroupID;
- (unsigned long long)conversionGroup;
- (struct CGSize { double x0; double x1; })mediaDimensions;
- (long long)compareCameraAsset:(id)a0;
- (id)initWithPXCameraAssetDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })thumbnailDimensions;

@end
