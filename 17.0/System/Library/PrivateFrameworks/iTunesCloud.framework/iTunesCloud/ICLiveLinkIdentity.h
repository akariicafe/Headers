@class NSUUID, NSString, NSPersonNameComponents, NSURL;

@interface ICLiveLinkIdentity : NSObject <_ICMutableLiveLinkIdentityPrivate, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long serverID;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSURL *imageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithIdentifier:(id)a0;

- (id)initWithBlock:(id /* block */)a0;
- (id)_initWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
