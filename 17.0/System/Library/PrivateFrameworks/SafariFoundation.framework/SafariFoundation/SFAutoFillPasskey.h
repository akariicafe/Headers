@class NSString, SFAutoFillPasskeyIdentifier, NSData, WBSAutoFillPasskey;

@interface SFAutoFillPasskey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WBSAutoFillPasskey *corePasskey;
@property (readonly, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) SFAutoFillPasskeyIdentifier *identifier;
@property (readonly, nonatomic) NSData *userHandle;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreAutoFillPasskey:(id)a0;

@end
