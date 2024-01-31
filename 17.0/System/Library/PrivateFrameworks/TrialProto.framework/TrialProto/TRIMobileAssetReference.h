@class NSString;

@interface TRIMobileAssetReference : TRIPBMessage

@property (copy, nonatomic) NSString *assetType;
@property (nonatomic) BOOL hasAssetType;
@property (copy, nonatomic) NSString *assetSpecifier;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL isOnDemand;
@property (nonatomic) BOOL hasIsOnDemand;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL isFileFactor;
@property (nonatomic) BOOL hasIsFileFactor;

+ (id)descriptor;

@end
