@class NSString, NSSet, CNContact, NSDate, NSNumber, FAFamilyMember;

@interface PKFamilyMember : NSObject <NSSecureCoding> {
    FAFamilyMember *_member;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMe) BOOL me;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSSet *appleIDAliases;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) unsigned long long age;
@property (copy, nonatomic) NSDate *dateOfBirth;
@property (nonatomic) long long memberType;
@property (copy, nonatomic) NSDate *joinedDate;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL parentalControlsEnabled;
@property (nonatomic) BOOL askToBuyEnabled;
@property (nonatomic, getter=isChildAccount) BOOL childAccount;
@property (nonatomic, getter=isParent) BOOL parent;
@property (nonatomic, getter=isOrganizer) BOOL organizer;
@property (copy, nonatomic) NSString *inviteEmail;
@property (copy, nonatomic) NSDate *invitationDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canSharePeerPaymentAccount;
- (id)initWithFAFamilyMember:(id)a0;
- (BOOL)isEqualToFamilyMember:(id)a0;
- (id)labelName;

@end
