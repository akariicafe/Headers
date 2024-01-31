@class NSString, NSURL, NSData, NSDate;

@interface KCSharingGroupInvite : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, copy, nonatomic) NSData *inviteToken;
@property (readonly, copy, nonatomic) NSString *senderHandle;
@property (readonly, copy, nonatomic) NSString *inviteeHandle;
@property (readonly, copy, nonatomic) NSDate *sentTime;
@property (copy, nonatomic) NSString *displayName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupID:(id)a0 shareURL:(id)a1 senderHandle:(id)a2 inviteeHandle:(id)a3 inviteToken:(id)a4 sentTime:(id)a5 displayName:(id)a6;

@end
