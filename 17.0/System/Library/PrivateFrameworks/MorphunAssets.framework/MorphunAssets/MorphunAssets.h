@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)getTRINamespaceName;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)getUAFAssetSetName;
+ (id)validateLocale:(id)a0;
+ (id)MorphunDomain;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)getUAFAssetSets;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (long long)getCurrentNamespace;
+ (void)initForSiriX:(id /* block */)a0;
+ (id)EmbeddedVersion;
+ (id)EmbeddedLanguages;
+ (id)SupportedLocales;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)getUAFAssetName;
+ (void)observeUAFAssetSet;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getUAFUsageType;
+ (id)getCurrentNamespaceName;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (id)SupportedSiriLanguages;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)assetPathDB;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)SupportedSiriLocales;
+ (id)EmbeddedLocales;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)get;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (id)SupportedLanguages;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)bcpStringForLocale:(id)a0;

- (id)init;
- (BOOL)isSubscribedToLocale:(id)a0;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (id)referenceCountsFromSubscriptionView;
- (void)writeSubscriptionView;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)processSubscriptions;
- (id)listSubscriptions;
- (void)readSubscriptionView;

@end
