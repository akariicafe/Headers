@class NSString, TRIAsset;

@interface TRIFile : TRIPBMessage

@property (retain, nonatomic) TRIAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL hasPath;
@property (nonatomic) BOOL isOnDemand;
@property (nonatomic) BOOL hasIsOnDemand;

+ (id)descriptor;

- (BOOL)requiresDownload;

@end
