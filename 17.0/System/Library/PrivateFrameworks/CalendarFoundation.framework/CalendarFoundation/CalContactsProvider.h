@class CNContactStore, CNContact, CNReputationStore, NSString, NSMutableSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {
    CNContact *_meContact;
}

@property (retain) CNContactStore *store;
@property (retain) CNReputationStore *reputationStore;
@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue;
@property (retain) CNContact *meContact;
@property (retain) NSString *testMeContactIdentifer;
@property (retain) NSMutableSet *delegates;
@property (retain) NSArray *unitTestEmails;
@property (retain) NSArray *loadedMyEmailAddresses;

+ (id)defaultProvider;
+ (id)birthdayStringForContactName:(id)a0 eventDate:(id)a1 birthDate:(id)a2 lunarCalendar:(id)a3;
+ (BOOL)birthdayIsYearless:(id)a0;
+ (BOOL)isCalendarIslamic:(id)a0;
+ (id)reputationForHandle:(id)a0 inStore:(id)a1;
+ (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0 inReputationStore:(id)a1;
+ (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0 inReputationStore:(id)a1;

- (id)unifiedContactWithName:(id)a0;
- (void)setMeCardEmailsForUnitTesting:(id)a0;
- (id)init;
- (id)myHomeAddress;
- (void)contactsChanged:(id)a0;
- (id)myAvatarEncodedString;
- (id)cachedEmailAddressArray;
- (id)unifiedMeContact;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (void)_syncContacts;
- (id)initWithStore:(id)a0;
- (id)myEmailAddresses;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)myFullName;
- (id)unifiedContactsDictionaryForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (BOOL)contactAccessResolved;
- (id)unifiedContactMatchingName:(id)a0 email:(id)a1 url:(id)a2 keysToFetch:(id)a3;
- (id)unifiedContactWithEmailAddress:(id)a0;
- (id)_fetchedUnifiedMeContact;
- (BOOL)matchesOneOfMyEmails:(id)a0;
- (id)myEmailAddress;
- (id)cachedEmailAddress;
- (id)fullNameForFirstContactMatchingPhoneNumber:(id)a0;
- (id)_meWithKeys:(id)a0;
- (id)_lastHistoryToken;
- (id)myNameWithStyle:(long long)a0;
- (id)nullableContactStore;
- (void)_setLastHistoryToken:(id)a0;
- (void)setTestMeContactIdentifier:(id)a0;
- (id)myPhoneNumbers;
- (void)donateEncodedLikenessString:(id)a0 forEmailAddress:(id)a1;
- (id)cachedEmailAddresses;
- (BOOL)contactIdentifierIsMe:(id)a0;
- (void).cxx_destruct;
- (id)myAddressForLabel:(id)a0;
- (id)_fullNameForFirstContactMatchingPredicate:(id)a0;
- (id)contactsFromContactIdentifiers:(id)a0 withKeys:(id)a1;
- (id)unifiedContactsForHandleStrings:(id)a0 keysToFetch:(id)a1;
- (id)unifiedContactWithPhoneNumber:(id)a0;
- (id)unifiedContactsMatchingPredicate:(id)a0 keysToFetch:(id)a1;
- (id)myWorkAddress;
- (BOOL)matchesOneOfMyPhoneNumbers:(id)a0;
- (id)myShortDisplayName;
- (void)deregisterForContactChangeNotifications:(id)a0;
- (id)unifiedContactMatchingString:(id)a0 keysToFetch:(id)a1 matchType:(long long *)a2;
- (id)contactStore;
- (void)meCardChanged:(id)a0;
- (id)fullNameForFirstContactMatchingEmailAddress:(id)a0;
- (void)registerForContactChangeNotifications:(id)a0;
- (BOOL)urlMatchesOneOfMyEmails:(id)a0;
- (id)unifiedContactWithIdentifier:(id)a0;

@end
