@interface _PSAppUsageUtilities : NSObject

+ (id)suggestionsFromAppBundleIds:(id)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1;
+ (id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)a0 sourceBundleId:(id)a1 sharesFromSourceToTargetBundle:(id)a2 appUsageDurations:(id)a3;
+ (id)shareExtensionsUsedAndInstalledDaysAgo:(long long)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1 knowledgeStore:(id)a2;
+ (id)mostUsedAppBundleIdsUsingPredicate:(id)a0 knowledgeStore:(id)a1;
+ (id)sharesFromSourceToTargetBundleValues;
+ (id)suggestionArrayWithArray:(id)a0 appendingUniqueElementsByBundleIdFromArray:(id)a1;
+ (void)cacheSharesForEachApp;
+ (id)appUsageDurations;
+ (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1 knowledgeStore:(id)a2;
+ (id)suggestionsFromShareBundleIds:(id)a0 appBundleIdsToShareExtensionBundleIdsMapping:(id)a1;
+ (void)cacheAppUsageDurations:(id)a0;
+ (id)addBiomeDataToCache:(id)a0 event:(id)a1;

@end
