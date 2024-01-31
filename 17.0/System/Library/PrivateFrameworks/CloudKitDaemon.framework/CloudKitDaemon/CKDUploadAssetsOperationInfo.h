@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) BOOL temporary;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;

- (void).cxx_destruct;

@end
