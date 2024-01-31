@class NSString, MPModelFileAsset;

@interface MPCAssetLoadPropertiesLocalFileEvaluation : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long recommendation;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL fileMatchesRequiredFileFormat;
@property (nonatomic) BOOL fileMatchesRequiredQuality;
@property (nonatomic) BOOL fileIsDownloaded;
@property (nonatomic) BOOL fileIsCached;
@property (nonatomic) BOOL fileIsHLS;
@property (nonatomic) long long HLSContentPolicy;
@property (nonatomic) long long fileAssetType;
@property (nonatomic) long long expectedAssetType;
@property (nonatomic) long long fileQualityType;
@property (nonatomic) long long expectedQualityType;
@property (readonly, copy, nonatomic) MPModelFileAsset *fileAsset;
@property (readonly, nonatomic) BOOL fileIsValid;
@property (readonly, nonatomic) BOOL fileShouldBeUpdated;

- (id)description;
- (id)humanDescription;
- (void).cxx_destruct;
- (id)initWithFileAsset:(id)a0;

@end
