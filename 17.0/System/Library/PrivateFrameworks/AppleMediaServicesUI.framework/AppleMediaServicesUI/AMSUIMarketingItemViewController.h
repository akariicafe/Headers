@class NSString, AMSBagKeySet, NSDictionary;

@interface AMSUIMarketingItemViewController : AMSUIDynamicViewController <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSString *offerHints;
@property (retain, nonatomic) NSString *seed;
@property (copy, nonatomic) NSDictionary *contextInfo;
@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)initWithMarketingItem:(id)a0 bag:(id)a1;
- (void)_setInternalClientOptionsValue:(id)a0 forKey:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1 account:(id)a2 bag:(id)a3;
- (id)initWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2;

@end
