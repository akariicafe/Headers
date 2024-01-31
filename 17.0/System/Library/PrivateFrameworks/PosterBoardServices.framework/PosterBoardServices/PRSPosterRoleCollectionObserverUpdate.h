@class NSString, NSArray;

@interface PRSPosterRoleCollectionObserverUpdate : NSObject

@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) NSArray *posterCollection;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithRole:(id)a0 posterCollection:(id)a1;

@end
