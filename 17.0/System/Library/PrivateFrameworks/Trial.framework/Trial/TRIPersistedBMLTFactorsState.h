@class NSString;

@interface TRIPersistedBMLTFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *bmltId;
@property (nonatomic) BOOL hasBmltId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;

+ (id)descriptor;

@end
