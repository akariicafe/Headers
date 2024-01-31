@class NSString, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask_FactorPackAssetIds : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (retain, nonatomic) NSMutableArray *assetIdArray;
@property (readonly, nonatomic) unsigned long long assetIdArray_Count;
@property (retain, nonatomic) NSMutableArray *assetIdFactorNameArray;
@property (readonly, nonatomic) unsigned long long assetIdFactorNameArray_Count;

+ (id)descriptor;

@end
