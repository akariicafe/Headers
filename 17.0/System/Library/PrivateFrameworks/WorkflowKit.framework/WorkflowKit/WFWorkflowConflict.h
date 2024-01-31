@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject

@property (copy, nonatomic) NSString *localWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *localWorkflowRecord;
@property (copy, nonatomic) NSString *remoteWorkflowID;
@property (retain, nonatomic) WFWorkflowRecord *remoteWorkflowRecord;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)resolutionKeepingLocal:(BOOL)a0 keepingRemote:(BOOL)a1;

@end
