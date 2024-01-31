@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSString *sharedCredentialIdentifier;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic) long long deviceType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
