@class NSString, AMSBagKeySet, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSLookup : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *caller;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *imageProfile;
@property (retain, nonatomic) NSString *keyProfile;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic) long long signatureType;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)contract;
- (id)initWithBagContract:(id)a0;
- (void)setContract:(id)a0;
- (id)performLookupWithBundleIdentifiers:(id)a0 itemIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)_addJSSignatureToRequest:(id)a0;
- (id)initWithBagContract:(id)a0 caller:(id)a1 keyProfile:(id)a2;
- (id)initWithBag:(id)a0 caller:(id)a1 keyProfile:(id)a2;
- (id)_compileQueryParametersWithBundleIds:(id)a0 itemIds:(id)a1;

@end
