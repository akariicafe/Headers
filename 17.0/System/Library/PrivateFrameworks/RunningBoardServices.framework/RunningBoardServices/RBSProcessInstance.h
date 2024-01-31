@class RBSProcessIdentifier, NSString, RBSProcessIdentity;

@interface RBSProcessInstance : NSObject <RBSProcessMatching, RBSProcessIdentifier, NSCopying, RBSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithIdentifier:(id)a0 identity:(id)a1;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)init;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (int)rbs_pid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithPersonaString:(id)a0;

@end
