@class NSURL, CFXClip, NSData;

@interface CFXMediaItem : NSObject

@property (nonatomic) BOOL initializedWithoutSettingAllProperties;
@property (nonatomic) BOOL adjustmentsDataWasSet;
@property (readonly, nonatomic) long long cameraMode;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic) long long cameraPosition;
@property (readonly, nonatomic) CFXClip *clip;
@property (copy, nonatomic) NSData *adjustmentsData;
@property (copy, nonatomic) NSURL *adjustedAssetURL;
@property (copy, nonatomic) NSURL *originalAssetURL;
@property (nonatomic) long long type;

- (id)init;
- (void).cxx_destruct;
- (void)CFX_updateCameraPositionForPhotoType;
- (void)createClipForMediaType:(long long)a0 assetURL:(id)a1 cameraMode:(long long)a2 effectStack:(id)a3;
- (id)initWithCameraMode:(long long)a0 clip:(id)a1 assetMediaURL:(id)a2 assetMetadataURL:(id)a3 cameraPosition:(long long)a4;
- (id)initWithType:(long long)a0 originalAssetURL:(id)a1 adjustmentsData:(id)a2;

@end
