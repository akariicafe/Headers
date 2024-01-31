@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUserNotificationSettingsTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateSettings:(id)a0;
- (void).cxx_destruct;
- (id)_url;
- (id)_countryCodeFromBag:(id)a0;
- (id)_generateParametersForItems:(id)a0;
- (id)_stringForKey:(id)a0 fromBag:(id)a1;
- (id)fetchAllSettings;
- (id)initWithIdentifier:(id)a0 clientIdentifier:(id)a1 account:(id)a2 bag:(id)a3;

@end
