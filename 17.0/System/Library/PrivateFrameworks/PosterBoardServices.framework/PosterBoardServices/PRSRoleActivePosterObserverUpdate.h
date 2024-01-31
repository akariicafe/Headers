@class NSString, PRSServerPosterPath;

@interface PRSRoleActivePosterObserverUpdate : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) PRSServerPosterPath *activePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithRole:(id)a0 activePath:(id)a1;

@end
