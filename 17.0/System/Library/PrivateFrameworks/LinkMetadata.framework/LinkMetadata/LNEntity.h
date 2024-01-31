@class NSString, NSArray, LNEntityIdentifier;

@interface LNEntity : NSObject <NSSecureCoding, NSCopying, BSXPCSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *managedAccountIdentifier;
@property (readonly, copy, nonatomic) NSString *prototypeMangledTypeName;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, copy, nonatomic) LNEntityIdentifier *identifier;
@property (readonly, copy, nonatomic) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 properties:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 managedAccountIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 managedAccountIdentifier:(id)a2;
- (id)initWithTransient:(BOOL)a0 identifier:(id)a1 properties:(id)a2 managedAccountIdentifier:(id)a3;
- (id)initWithTransient:(BOOL)a0 identifier:(id)a1 properties:(id)a2 prototypeMangledTypeName:(id)a3 managedAccountIdentifier:(id)a4;

@end
