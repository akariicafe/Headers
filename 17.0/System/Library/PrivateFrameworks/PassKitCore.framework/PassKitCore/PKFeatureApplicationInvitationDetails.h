@class NSString, NSPersonNameComponents;

@interface PKFeatureApplicationInvitationDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (copy, nonatomic) NSString *originatorFirstName;
@property (copy, nonatomic) NSString *originatorLastName;
@property (copy, nonatomic) NSString *accountUserFirstName;
@property (copy, nonatomic) NSString *accountUserLastName;
@property (readonly, nonatomic) NSPersonNameComponents *originatorNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *accountUserNameComponents;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountUserAltDSID:(id)a0 accessLevel:(unsigned long long)a1;

@end
