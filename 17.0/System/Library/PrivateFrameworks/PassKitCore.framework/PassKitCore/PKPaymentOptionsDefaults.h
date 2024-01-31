@class NSString, NSDictionary, CNContact, NSNumber, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsSynchronizationDelegate, PKPaymentOptionsProtocol> {
    int _defaultsChangedNotifyToken;
    unsigned long long _postedNotificationCount;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
    NSNumber *_useHideMyEmailNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNContact *defaultShippingAddress;
@property (readonly, nonatomic) NSDictionary *defaultBillingAddresses;
@property (retain, nonatomic) CNContact *defaultContactEmail;
@property (nonatomic) BOOL useHideMyEmail;
@property (retain, nonatomic) CNContact *defaultContactPhone;
@property (retain, nonatomic) CNContact *defaultContactName;

+ (id)defaults;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerForChangeNotifications;
- (void)_setRawDefaultBillingAddresses:(id)a0;
- (id)_contactForKeychainKey:(id)a0;
- (void)_deleteKeychainDataForKey:(id)a0;
- (void)_deleteKeychainDataForKey:(id)a0 localOnly:(BOOL)a1;
- (void)_hardDeleteDefaultBillingAddress;
- (id)_keychainDataForKey:(id)a0;
- (id)_lastUpdatedDatesForBillingAddresses;
- (id)_rawDefaultBillingAddresses;
- (void)_setContact:(id)a0 forKeychainKey:(id)a1;
- (void)_setContact:(id)a0 property:(id)a1 forKeychainKey:(id)a2;
- (void)_setKeychainData:(id)a0 forKey:(id)a1;
- (void)_unregisterForChangeNotifications;
- (id)defaultBillingAddressForBankAccountIdentifier:(id)a0;
- (id)defaultBillingAddressForBankInformation:(id)a0;
- (id)defaultBillingAddressForPaymentPass:(id)a0;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)a0;
- (void)deleteAllDefaults;
- (void)deleteAllLocalDefaults;
- (void)deleteDefaultBillingAddress:(id)a0;
- (void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (void)deleteDefaultContactEmail;
- (void)deleteDefaultContactName;
- (void)deleteDefaultContactPhone;
- (void)deleteDefaultForContactKey:(id)a0;
- (void)deleteDefaultShippingAddress;
- (void)deleteUseHideMyEmail;
- (id)lastUpdatedDateForPrimaryAccountIdentifier:(id)a0;
- (void)migrateToSyncable;
- (void)optionsSynchronizationDidChangeTo:(BOOL)a0;
- (void)setDefaultBillingAddress:(id)a0 forBankInformation:(id)a1;
- (void)setDefaultBillingAddress:(id)a0 forPaymentPass:(id)a1;
- (void)setDefaultBillingAddress:(id)a0 forPrimaryAccountIdentifier:(id)a1;
- (void)setDefaultBillingAddress:(id)a0 forRemotePaymentInstrument:(id)a1;
- (void)updateLastUpdatedDate:(id)a0 forPrimaryAccountIdentifier:(id)a1;

@end
