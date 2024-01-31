@class BSAuditToken;

@interface FBSSceneHostHandle : NSObject

@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) BSAuditToken *auditToken;

+ (id)handleWithAuditToken:(id)a0;
+ (id)localHandle;

- (id)description;
- (void).cxx_destruct;

@end
