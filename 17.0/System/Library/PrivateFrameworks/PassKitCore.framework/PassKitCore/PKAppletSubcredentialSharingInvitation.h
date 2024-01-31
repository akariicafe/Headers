@class NSString, NSUUID, PKSharingCarKeyInvitation;

@interface PKAppletSubcredentialSharingInvitation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *recipientName;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic) unsigned long long entitlement;
@property (copy, nonatomic) NSString *issuer;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic, getter=isForWatch) BOOL forWatch;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) PKSharingCarKeyInvitation *originalInvitationMessage;
@property (retain, nonatomic) NSString *activationCode;
@property (readonly, nonatomic) BOOL isThirdPartyCrossPlatformInvitation;

+ (id)invitationFromShare:(id)a0 entitlement:(id)a1 withCredential:(id)a2 pass:(id)a3;

- (id)dataRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)invitationRequestRepresentation;
- (id)addCarKeyPassConfiguration;
- (BOOL)canBeSent;
- (id)initWithCrossPlatformInvitation:(id)a0;
- (id)initWithIdentifier:(id)a0 sharingSessionIdentifier:(id)a1 originatorIDSHandle:(id)a2 invitationData:(id)a3;
- (id)initWithPartnerIdentifier:(id)a0 brandIdentifier:(id)a1 pairedReaderIdentifier:(id)a2 recipientName:(id)a3 entitlement:(unsigned long long)a4 supportedRadioTechnologies:(unsigned long long)a5;
- (BOOL)isEqualToInvitation:(id)a0;
- (BOOL)isSameInvitationAsInvitation:(id)a0;
- (id)sharingConfigurationRepresentation;

@end
