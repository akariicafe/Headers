@class TRIKVStore;

@interface TRINamespaceFactorSubscriptionSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)keyForNamespaceSubscription:(id)a0;
+ (id)settingsWithKeyValueStore:(id)a0;

- (id)initWithKeyValueStore:(id)a0;
- (BOOL)setSubscriptionWithFactorNames:(id)a0 inNamespaceName:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)subscribedFactorsForNamespaceName:(id)a0;

@end
