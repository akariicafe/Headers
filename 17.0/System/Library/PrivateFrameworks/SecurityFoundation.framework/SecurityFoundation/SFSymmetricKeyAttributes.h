@class NSString, _SFKeySpecifier;

@interface SFSymmetricKeyAttributes : NSObject <_SFKeyAttributes, SFKeychainItemAttributes> {
    id _symmetricKeyAttributesInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier;
@property (readonly, copy, nonatomic) NSString *keyDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;


- (id)initWithSpecifier:(id)a0;
- (void)setKeySpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpecifier:(id)a0 domain:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
