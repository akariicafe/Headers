@class MRNearbyInvitation, NSString, NSData, MRDiscoveredGroupSession;

@interface MRGroupSessionToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRNearbyInvitation *invitation;
@property (retain, nonatomic) NSString *storefrontCountryCode;
@property (readonly, nonatomic) MRDiscoveredGroupSession *discoveredSession;
@property (readonly, nonatomic) NSData *invitationData;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *joinURLString;
@property (readonly, nonatomic) NSString *hostDisplayName;
@property (readonly, nonatomic) unsigned char routeType;
@property (readonly, nonatomic) NSString *localizedSessionName;

+ (id)tokenForJoinURLString:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDiscoveredSession:(id)a0;
- (id)initWithInvitation:(id)a0 invitationData:(id)a1;

@end
