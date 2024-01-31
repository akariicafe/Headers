@class NSString, CNContact;

@interface WFCNContact : WFContact {
    int _propertyID;
    long long _multivalueIndex;
}

@property (readonly, nonatomic) BOOL fromVCard;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)contactStoreDidChange:(id)a0;
+ (id)changeObservers;
+ (id)contactWithCNContact:(id)a0;
+ (id)contactWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)requiredKeysToFetch;
+ (id)addContactsChangeObserver:(id /* block */)a0;
+ (id)contactWithVCardData:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2;
+ (id)contactsWithVCardData:(id)a0;
+ (void)removeContactsChangeObserver:(id)a0;
+ (void)updateContactStoreObservation;

- (id)middleName;
- (id)firstName;
- (id)nameSuffix;
- (id)namePrefix;
- (id)lastName;
- (id)emailAddresses;
- (id)nickname;
- (id)phoneNumbers;
- (unsigned long long)hash;
- (id)imageData;
- (void)encodeWithCoder:(id)a0;
- (id)formattedName;
- (id)socialProfiles;
- (id)organization;
- (void).cxx_destruct;
- (id)birthday;
- (BOOL)isEqual:(id)a0;
- (id)URLs;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasImageData;
- (id)dates;
- (id)instantMessageAddresses;
- (id)thumbnailImageData;
- (id)attributionSetWithCachingIdentifier:(id)a0;
- (long long)multivalueIndex;
- (id)streetAddresses;
- (id)contactIdentifierForINPerson;
- (id)contactWithPropertyID:(int)a0 multivalueIndex:(long long)a1;
- (BOOL)hasValueForPropertyID:(int)a0;
- (id)initWithCNContact:(id)a0 propertyID:(int)a1 multivalueIndex:(long long)a2 fromVCard:(BOOL)a3;
- (BOOL)isPropertyIDRepresented:(int)a0;
- (int)propertyID;
- (void)refetchContact;
- (id)vCardRepresentationWithFullData:(BOOL)a0;
- (id)valueForPropertyID:(int)a0;

@end
