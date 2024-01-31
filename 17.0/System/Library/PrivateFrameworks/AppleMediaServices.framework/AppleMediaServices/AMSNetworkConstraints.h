@class NSString, AMSBagKeySet, NSMutableDictionary;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSMutableDictionary *sizeLimits;
@property (readonly, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_networkConstraintsForMediaType:(id)a0 withArray:(id)a1;
+ (id)networkConstraintsForMediaType:(id)a0 withBag:(id)a1;

- (long long)sizeLimitForNetworkType:(id)a0;
- (id)init;
- (BOOL)isEqualToConstraints:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_disableAllNetworkTypes;
- (id)_initWithStoreConstraintDictionary:(id)a0;
- (void)_setSizeLimit:(long long)a0 forNetworkType:(id)a1;
- (long long)_sizeLimitForNetworkType:(id)a0;
- (BOOL)hasSizeLimitForNetworkType:(id)a0;

@end
