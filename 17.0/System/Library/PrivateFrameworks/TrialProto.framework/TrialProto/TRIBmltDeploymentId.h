@class NSString;

@interface TRIBmltDeploymentId : TRIPBMessage

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) unsigned int id_p;
@property (nonatomic) BOOL hasId_p;

+ (id)descriptor;

@end
