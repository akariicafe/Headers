@class RTDataProtectionManager, CNContact, RTDistanceCalculator, RTMapServiceManager;

@interface RTContactsManager : RTService

@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) CNContact *meCard;
@property (nonatomic) BOOL available;

+ (id)addressDictionaryFromMapItem:(id)a0;
+ (id)addressLabelTypeToLabel:(unsigned long long)a0;
+ (id)addressLabelTypeToString:(unsigned long long)a0;
+ (id)formattedPostalAddressesForContact:(id)a0;
+ (unsigned long long)labelStringToAddressLabelType:(id)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)onDataProtectionNotification:(id)a0;
- (void).cxx_destruct;
- (void)fetchFormattedPostalAddressesFromMeCard:(id /* block */)a0;
- (void)__donateAddressFromMapItem:(id)a0 addressLabelType:(unsigned long long)a1 donationStore:(id)a2 handler:(id /* block */)a3;
- (id)_contactColumnKeysToFetch;
- (void)_donateAddressFromMapItem:(id)a0 addressLabelType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_fetchContactsFromEmailOrPhoneNumberString:(id)a0 handler:(id /* block */)a1;
- (void)_fetchContactsUsingContactIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFavoriteContactsWithHandler:(id /* block */)a0;
- (void)_fetchMeCardWithHandler:(id /* block */)a0;
- (void)_fetchRelationshipContactsFromMeCardWithHandler:(id /* block */)a0;
- (id)_getEmailAddressStringsUsingCNContactEmailAddresses:(id)a0;
- (id)_getMeCardWithError:(id *)a0;
- (id)_getPhoneNumberStringsUsingCNContactPhoneNumbers:(id)a0;
- (id)_getPostalAddressesUsingCNContactPostalAddresses:(id)a0;
- (id)_getRTContactFromCNContact:(id)a0;
- (void)_onContactStoreNotification:(id)a0;
- (id)_queryContactsForGivenName:(id)a0 error:(id *)a1;
- (id)addAddressToContact:(id)a0 addressLabelType:(unsigned long long)a1 addressFromMapItem:(id)a2 error:(id *)a3;
- (id)addAddressToMeCardWithAddressLabelType:(unsigned long long)a0 addressFromMapItem:(id)a1 error:(id *)a2;
- (id)addressIdentifierOfContact:(id)a0 withAddressFromMapItem:(id)a1 error:(id *)a2;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)a0 error:(id *)a1;
- (void)donateAddressFromMapItem:(id)a0 addressLabelType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchContactsFromEmailOrPhoneNumberString:(id)a0 handler:(id /* block */)a1;
- (void)fetchContactsUsingContactIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)fetchFavoriteContactsWithHandler:(id /* block */)a0;
- (void)fetchMeCardWithHandler:(id /* block */)a0;
- (void)fetchRelationshipContactsFromMeCardWithHandler:(id /* block */)a0;
- (id)initWithDataProtectionManager:(id)a0 mapServiceManager:(id)a1 distanceCalculator:(id)a2;
- (BOOL)labelTypeValidForDonation:(unsigned long long)a0;
- (void)onContactStoreNotification:(id)a0;
- (BOOL)removeAddressOfContact:(id)a0 withAddressIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)a0 error:(id *)a1;
- (BOOL)updateAddressLabelTypeOfContact:(id)a0 withAddressIdentifier:(id)a1 toAddressLabelType:(unsigned long long)a2 error:(id *)a3;
- (BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)a0 toAddressLabelType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)updateAddressOfContact:(id)a0 withAddressIdentifier:(id)a1 toAddressFromMapItem:(id)a2 error:(id *)a3;
- (BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)a0 toAddressFromMapItem:(id)a1 error:(id *)a2;

@end
