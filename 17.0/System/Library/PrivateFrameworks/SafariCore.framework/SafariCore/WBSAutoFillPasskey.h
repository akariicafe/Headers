@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *operationUUID;
@property (readonly, nonatomic) BOOL shouldRequireUserVerification;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUsername:(id)a0 customTitle:(id)a1 relyingPartyIdentifier:(id)a2 identifier:(id)a3 operationUUID:(id)a4 shouldRequireUserVerification:(BOOL)a5;

@end
