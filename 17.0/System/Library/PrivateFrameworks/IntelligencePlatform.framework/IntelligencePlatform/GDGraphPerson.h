@class NSString, GDGraphPersonEntityIdentifier, NSPersonNameComponents, NSArray, NSDate, NSNumber;

@interface GDGraphPerson : NSObject <GDGraphObject>

@property (nonatomic, readonly) NSPersonNameComponents *suggestedNameComponentsInner;
@property (nonatomic, readonly) NSString *suggestedNameStringInner;
@property (nonatomic, readonly) NSString *suggestedContactIdentifierInner;
@property (nonatomic, readonly) long long autonamingSuggestionReasonInner;
@property (readonly, copy, nonatomic) GDGraphPersonEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSArray *fullNames;
@property (readonly, copy, nonatomic) NSArray *prefixes;
@property (readonly, copy, nonatomic) NSArray *givenNames;
@property (readonly, copy, nonatomic) NSArray *middleNames;
@property (readonly, copy, nonatomic) NSArray *familyNames;
@property (readonly, copy, nonatomic) NSArray *previousFamilyNames;
@property (readonly, copy, nonatomic) NSArray *suffixes;
@property (readonly, copy, nonatomic) NSArray *birthNames;
@property (readonly, copy, nonatomic) NSDate *birthday;
@property (readonly, copy, nonatomic) NSString *occupation;
@property (readonly, copy, nonatomic) NSNumber *isFavorite;
@property (readonly, copy, nonatomic) NSNumber *isCurrentUser;
@property (readonly, copy, nonatomic) NSNumber *isInferredDeviceUser;
@property (readonly, copy, nonatomic) NSArray *associatedPeople;
@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) NSArray *employers;
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, copy, nonatomic) NSArray *handles;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *visualIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allBirthday;
@property (readonly, copy, nonatomic) NSArray *allOccupation;
@property (readonly, copy, nonatomic) NSArray *allIsFavorite;
@property (readonly, copy, nonatomic) NSArray *allIsCurrentUser;
@property (readonly, copy, nonatomic) NSArray *allIsInferredDeviceUser;
@property (readonly, copy, nonatomic) NSArray *allContactIdentifier;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)autonamingSuggestionReason;
- (id)initWithEntityIdentifierField:(id)a0 fullNamesField:(id)a1 prefixesField:(id)a2 givenNamesField:(id)a3 middleNamesField:(id)a4 familyNamesField:(id)a5 previousFamilyNamesField:(id)a6 suffixesField:(id)a7 birthNamesField:(id)a8 birthdayField:(id)a9 occupationField:(id)a10 isFavoriteField:(id)a11 isCurrentUserField:(id)a12 isInferredDeviceUserField:(id)a13 associatedPeopleField:(id)a14 locationsField:(id)a15 employersField:(id)a16 topicsField:(id)a17 handlesField:(id)a18 identifiersField:(id)a19 contactIdentifierField:(id)a20 visualIdentifiersField:(id)a21 allBirthdayField:(id)a22 allOccupationField:(id)a23 allIsFavoriteField:(id)a24 allIsCurrentUserField:(id)a25 allIsInferredDeviceUserField:(id)a26 allContactIdentifierField:(id)a27;
- (id)suggestedContactIdentifier;
- (id)suggestedNameComponents;
- (id)suggestedNameString;

@end
