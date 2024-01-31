@class HMUser, NSArray, NSDictionary, HMMutableArray;

@interface HMOutgoingHomeInvitation : HMHomeInvitation {
    HMMutableArray *_accessoryInvitations;
}

@property (readonly, copy) NSDictionary *appleSharingDict;
@property (readonly, nonatomic) HMUser *invitee;
@property (readonly, nonatomic) NSArray *accessoryInvitations;

+ (BOOL)supportsSecureCoding;
+ (id)homeInvitationsFromData:(id)a0 home:(id)a1;
+ (id)homeInvitationsFromEncodedData:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)_unconfigure;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)a0;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)a0;
- (void)_unconfigureContext;
- (void)cancelInviteWithCompletionHandler:(id /* block */)a0;
- (id)initWithInvitationData:(id)a0 home:(id)a1;
- (BOOL)mergeFromNewObject:(id)a0;

@end
