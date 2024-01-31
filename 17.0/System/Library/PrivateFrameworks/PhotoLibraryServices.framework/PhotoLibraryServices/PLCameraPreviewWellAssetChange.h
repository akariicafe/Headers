@class NSString, NSDate;

@interface PLCameraPreviewWellAssetChange : NSObject

@property (nonatomic, getter=isAllowed) BOOL allowed;
@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSDate *addedDate;
@property (nonatomic) double sortToken;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (nonatomic) unsigned long long effectiveThumbnailIndex;
@property (nonatomic) BOOL shouldRefreshPreviewWellWithFetchRequest;
@property (nonatomic) BOOL thumbnailWasGenerated;

+ (id)cameraPreviewWellAssetChangeToForceRefetch;

- (long long)compareToDate:(id)a0 sortToken:(double)a1;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAsset:(id)a0 thumbnailWasGenerated:(BOOL)a1;

@end
