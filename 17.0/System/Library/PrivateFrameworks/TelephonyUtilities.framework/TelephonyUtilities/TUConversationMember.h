@class TUConversationMemberAssociation, NSString, NSArray, TUHandle, NSDate, TUVoucher, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *idsFromID;
@property (readonly, copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL joinedFromLetMeIn;
@property (nonatomic) BOOL isOtherInvitedHandle;
@property (nonatomic) long long validationSource;
@property (copy, nonatomic) TUConversationMemberAssociation *association;
@property (retain, nonatomic) TUVoucher *associationVoucher;
@property (readonly, copy, nonatomic) NSArray *idsDestinations;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic, getter=isValidated) BOOL validated;
@property (nonatomic) BOOL isSplitSessionMember;
@property (nonatomic) BOOL isLightweightMember;
@property (retain, nonatomic) NSDate *dateReceivedLetMeIn;
@property (retain, nonatomic) NSDate *dateInitiatedLetMeIn;
@property (copy, nonatomic) TUHandle *splitSessionPrimary;
@property (copy, nonatomic) TUHandle *lightweightPrimary;
@property (nonatomic) unsigned long long lightweightPrimaryParticipantIdentifier;
@property (readonly, copy, nonatomic) NSSet *handles;

- (id)initWithHandle:(id)a0;
- (id)initWithContact:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)pseudonym;
- (id)initWithDestinations:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithHandles:(id)a0;
- (id)initWithContact:(id)a0 additionalHandles:(id)a1;
- (id)initWithHandle:(id)a0 nickname:(id)a1;
- (id)initWithHandle:(id)a0 nickname:(id)a1 joinedFromLetMeIn:(BOOL)a2;
- (BOOL)isEqualToMember:(id)a0;
- (BOOL)representsSameMemberAs:(id)a0;

@end
