@class NSUUID, NSString, TUConversationParticipant, TUConversationActivitySession, NSURL;

@interface TUConversationActivityEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) TUConversationParticipant *originator;
@property (nonatomic) long long type;
@property (nonatomic) long long queueItemType;
@property (retain, nonatomic) NSString *item;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) TUConversationActivitySession *session;
@property (retain, nonatomic) NSURL *url;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionUUID:(id)a0 originator:(id)a1 type:(long long)a2;
- (BOOL)isEqualToConversationActivityEvent:(id)a0;

@end
