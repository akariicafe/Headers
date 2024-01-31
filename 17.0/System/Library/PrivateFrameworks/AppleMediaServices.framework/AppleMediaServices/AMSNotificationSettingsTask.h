@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateSettings:(id)a0;
- (void).cxx_destruct;
- (id)_url;
- (id)initWithIdentifier:(id)a0 account:(id)a1 bag:(id)a2;
- (id)_countryCodeFromBag:(id)a0;
- (id)_generateParametersForItems:(id)a0;
- (id)_stringForKey:(id)a0 fromBag:(id)a1;
- (id)fetchAllSettings;
- (id)fetchSettingForIdentifier:(id)a0;
- (id)fetchSettingsForSections:(id)a0;

@end
