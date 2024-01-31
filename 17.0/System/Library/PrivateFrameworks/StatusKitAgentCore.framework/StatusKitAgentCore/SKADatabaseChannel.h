@class NSString, MPStatusKitOutgoingRatchet, NSData, NSDate, NSArray;

@interface SKADatabaseChannel : NSObject

@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *currentOutgoingRatchet;
@property (readonly, nonatomic) NSData *channelToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isPersonal) BOOL personal;
@property (readonly, nonatomic, getter=isDecomissioned) BOOL decomissioned;
@property (readonly, nonatomic) NSData *currentOutgoingRatchetState;
@property (retain, nonatomic) NSDate *dateChannelCreated;
@property (readonly, copy, nonatomic) NSString *statusType;
@property (readonly, nonatomic) long long channelType;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, copy, nonatomic) NSArray *invitedUsers;
@property (readonly, nonatomic) NSData *presenceServerKey;
@property (readonly, nonatomic) NSData *presencePeerKey;
@property (readonly, nonatomic) NSData *presenceMembershipKey;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannelToken:(id)a0 channelType:(long long)a1 identifier:(id)a2 personal:(BOOL)a3 decomissioned:(BOOL)a4 currentOutgoingRatchetState:(id)a5 dateCreated:(id)a6 statusType:(id)a7 presenceIdentifier:(id)a8 serviceIdentifier:(id)a9 invitedUsers:(id)a10 presenceServerKey:(id)a11 presencePeerKey:(id)a12 presenceMembershipKey:(id)a13;
- (id)initWithCoreDataChannels:(id)a0;

@end
