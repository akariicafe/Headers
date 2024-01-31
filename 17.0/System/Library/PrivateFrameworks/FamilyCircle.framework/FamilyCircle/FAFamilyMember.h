@class NSString, NSDictionary, CNContact, NSDate, NSNumber, NSArray;

@interface FAFamilyMember : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (retain) NSDictionary *idsCache;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, copy, nonatomic) NSNumber *dsid;
@property (readonly, copy, nonatomic) NSString *hashedDSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) unsigned long long age;
@property (readonly, copy, nonatomic) NSString *memberTypeDisplayString;
@property (readonly, copy, nonatomic) NSDate *birthDate;
@property (readonly, copy, nonatomic) NSString *memberTypeString;
@property (readonly, nonatomic) long long memberType;
@property (readonly, copy, nonatomic) NSNumber *memberSortOrder;
@property (readonly, copy, nonatomic) NSString *memberPhoneNumbers;
@property (readonly, copy, nonatomic) NSDate *joinedDate;
@property (readonly, copy, nonatomic) NSString *statusString;
@property (readonly, copy, nonatomic) NSString *inviteEmail;
@property (readonly, copy, nonatomic) NSDate *invitationDate;
@property (readonly, nonatomic) BOOL canRemoveSelf;
@property (readonly, nonatomic) BOOL isChildAccount;
@property (readonly, nonatomic) BOOL hasParentalControlsEnabled;
@property (readonly, nonatomic) BOOL hasAskToBuyEnabled;
@property (readonly, nonatomic) BOOL hasSiwaEnabled;
@property (readonly, nonatomic) BOOL isParent;
@property (readonly, nonatomic) BOOL isOrganizer;
@property (readonly, nonatomic) BOOL isGuardian;
@property (readonly, nonatomic) BOOL hasHSA2;
@property (readonly, nonatomic) BOOL hasLinkediTunesAccount;
@property (readonly, copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (readonly, nonatomic) NSNumber *iTunesAccountDSID;
@property (readonly, copy, nonatomic) NSString *iTunesAccountUsername;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSArray *remoteGuardians;
@property (readonly, nonatomic) NSArray *remoteChildren;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToFamilyMember:(id)a0;
- (id)contactIncludingImage:(BOOL)a0;
- (id)contactsIncludingImage:(BOOL)a0;
- (id)_dateWithEpochString:(id)a0;
- (BOOL)_nilEqualProperty:(id)a0 with:(id)a1;
- (id)contactWithKeys:(id)a0 contactStore:(id)a1;
- (id)contactsWithKeys:(id)a0 contactStore:(id)a1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)a0 fallbackToLocalAddressBook:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)finishWith:(id)a0;

@end
