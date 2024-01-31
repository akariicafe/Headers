@class NSString, NSUUID;

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *inviteeName;
@property (readonly, copy, nonatomic) NSString *inviteeUserID;
@property (readonly, copy, nonatomic) NSUUID *inviteeUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 inviteeUserID:(id)a1 inviteeName:(id)a2 invitationState:(long long)a3 expiryDate:(id)a4;

@end
