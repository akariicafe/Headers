@class NSString, NSUUID;

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *inviterName;
@property (readonly, nonatomic) NSString *inviterUserID;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSUUID *inviterUUID;
@property (readonly, copy, nonatomic) NSString *inviterMergeID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInviterUserID:(id)a0 invitationIdentifier:(id)a1 inviterName:(id)a2 invitationState:(long long)a3 homeName:(id)a4 homeUUID:(id)a5 expiryDate:(id)a6;

@end
