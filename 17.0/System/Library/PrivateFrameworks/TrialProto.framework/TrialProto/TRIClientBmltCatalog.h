@class NSMutableArray;

@interface TRIClientBmltCatalog : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *bmltDeploymentIdArray;
@property (readonly, nonatomic) unsigned long long bmltDeploymentIdArray_Count;

+ (id)descriptor;

@end
