@class NSArray, NSString, WFContentAttributionSet;

@interface WFSmartPromptApprovalResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *allowedStates;
@property (readonly, nonatomic) NSArray *deniedStates;
@property (readonly, nonatomic) NSArray *undefinedStates;
@property (readonly, nonatomic) NSArray *restrictedStates;
@property (readonly, nonatomic) WFContentAttributionSet *previousAttributions;
@property (readonly, nonatomic) NSString *actionUUID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithActionUUID:(id)a0;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2 restrictedStates:(id)a3 actionUUID:(id)a4 previousAttributions:(id)a5;
- (id)resultByAddingDatabaseResult:(id)a0;

@end
