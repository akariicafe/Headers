@class NSString;

@interface TRIAsset : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) unsigned int cloudKitIndex;
@property (nonatomic) BOOL hasCloudKitIndex;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL signed_p;
@property (nonatomic) BOOL hasSigned_p;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL hasSize;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) int cloudKitContainer;
@property (nonatomic) BOOL hasCloudKitContainer;

+ (id)descriptor;

@end
