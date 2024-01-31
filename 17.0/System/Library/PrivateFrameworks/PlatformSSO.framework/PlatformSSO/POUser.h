@class NSString;

@interface POUser : _POJWTBodyBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *loginUserName;
@property (readonly) NSString *generatedUUID;
@property (readonly) NSString *uniqueIdpIdentifier;
@property (readonly) NSString *uid;
@property (readonly) NSString *altSecurityIdentity;

- (void)encodeWithCoder:(id)a0;
- (id)uid;
- (id)mutableCopy;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)altSecurityIdentity;
- (id)generatedUUID;
- (id)loginUserName;
- (id)uniqueIdpIdentifier;

@end
