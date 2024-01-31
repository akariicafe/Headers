@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject {
    NEPolicySession *_policySession;
    NSMutableArray *_policyIDList;
}

+ (id)connectionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)installPolicies;
- (BOOL)uninstallPolicies;

@end
