@class RBSAssertionIdentifier, NSString, NSArray, RBSTarget;

@interface RBSAssertionDescriptor : NSObject <RBSXPCSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic) RBSTarget *target;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorWithIdentifier:(id)a0 target:(id)a1 explanation:(id)a2 attributes:(id)a3;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)init;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
