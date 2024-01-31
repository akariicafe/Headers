@interface UAFTrialUpdateManager : NSObject

+ (BOOL)isRemoveAllowed;
+ (void)checkForOutOfSpace:(id)a0 updateProgress:(id)a1;
+ (id)filterOnDemandFactors:(id)a0 namespaceName:(id)a1 trialClient:(id)a2;
+ (id)getConcurrentQueue;
+ (id)getImmediateDownloadSet:(id)a0;
+ (void)getKnownFactors:(id)a0 namespace:(id)a1 knownFactors:(id *)a2 onDemandFactors:(id *)a3;
+ (id)getSerialQueue;
+ (unsigned long long)getTrialDownloadStatusForUsages:(id)a0 configurationManager:(id)a1;
+ (id)getTrialFactors:(id)a0 configurationManager:(id)a1 includeAllAssetSets:(BOOL)a2 noRemovalNamespaces:(id *)a3 assetSetNamespaces:(id *)a4;
+ (BOOL)isOnDemand:(id)a0;
+ (BOOL)isPresent:(id)a0;
+ (BOOL)isSubscribed:(id)a0;
+ (unsigned long long)sizeFromLevel:(id)a0;
+ (id)trialClientWithProject:(id)a0;
+ (BOOL)updateNamespaces:(id)a0 missingRolloutsOnly:(BOOL)a1 expensiveNetworking:(BOOL)a2 assetSetNamespaces:(id)a3 updateProgress:(id)a4;
+ (void)updateOnDemandFactors:(id)a0 trialFactors:(id)a1 removeUnneededFactors:(BOOL)a2 expensiveNetworking:(BOOL)a3 updateCount:(unsigned long long)a4 storeManager:(id)a5 noRemovalNamespaces:(id)a6 updateProgress:(id)a7 completion:(id /* block */)a8;
+ (void)updateTrialFactors:(id)a0 missingRolloutsOnly:(BOOL)a1 removeUnneededFactors:(BOOL)a2 expensiveNetworking:(BOOL)a3 updateCount:(unsigned long long)a4 storeManager:(id)a5 noRemovalNamespaces:(id)a6 assetSetNamespaces:(id)a7 progress:(id /* block */)a8 completion:(id /* block */)a9;
+ (void)updateTrialFromAssetSetUsages:(id)a0 missingRolloutsOnly:(BOOL)a1 expensiveNetworking:(BOOL)a2 storeManager:(id)a3 configurationManager:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)updateTrialFromAssetSetUsages:(id)a0 storeManager:(id)a1 configurationManager:(id)a2;
+ (void)updateTrialProject:(id)a0 trialFactors:(id)a1 removeUnneededFactors:(BOOL)a2 expensiveNetworking:(BOOL)a3 updateCount:(unsigned long long)a4 storeManager:(id)a5 noRemovalNamespaces:(id)a6 updateProgress:(id)a7 completion:(id /* block */)a8;

@end
