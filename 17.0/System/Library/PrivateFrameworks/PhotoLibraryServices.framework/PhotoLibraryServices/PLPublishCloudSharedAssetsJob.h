@class NSString, NSArray, NSDictionary;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob

@property (retain, nonatomic) NSString *publishAlbumCloudGUID;
@property (retain, nonatomic) NSArray *originalAssetUUIDs;
@property (retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs;
@property (retain, nonatomic) NSDictionary *customExportsInfo;
@property (retain, nonatomic) NSDictionary *trimmedVideoPathInfo;
@property (nonatomic) BOOL isNewAlbum;
@property (retain, nonatomic) NSString *batchCommentText;

+ (void)publishBatchOfOriginalAssetUUIDs:(id)a0 toSharedAlbum:(id)a1 withAssetsSharingInfos:(id)a2 customExportsInfo:(id)a3 trimmedVideoPathInfo:(id)a4 isNewAlbum:(BOOL)a5 batchCommentText:(id)a6;
+ (id)videoComplementURLForSharingFromAsset:(id)a0;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)executeDaemonOperation;
- (BOOL)retrieveURLsFromAssetWithUUID:(id)a0 withExportedFileURL:(id)a1 primaryURL:(id *)a2 videoComplementURL:(id *)a3;
- (BOOL)shouldArchiveXPCToDisk;

@end
