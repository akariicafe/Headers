@class NSSet, TUConversationPresentationContext;

@interface TUConversationHandoffContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL prefersToPlayDuringWombat;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (copy, nonatomic) TUConversationPresentationContext *presentationContext;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHandoffContext:(id)a0;

@end
