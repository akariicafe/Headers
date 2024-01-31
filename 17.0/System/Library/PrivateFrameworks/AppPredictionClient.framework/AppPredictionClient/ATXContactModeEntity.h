@class NSString, ATXModeEntityScore;

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *rawIdentifier;
@property (retain, nonatomic) NSString *cnContactId;
@property (retain, nonatomic) NSString *stableContactIdentifier;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cnContactIdsOfEmergencyContacts;
+ (id)cnContactIdsOfFavoriteContacts;
+ (id)cnContactIdsOfICloudFamilyMembers;
+ (id)vipContactEmailAddresses;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2 stableContactIdentifier:(id)a3;
- (BOOL)isVIPContactGivenVIPs:(id)a0;

@end
