@interface BMLibraryStreamsPruner : NSObject

+ (void)pruneForResetKeyboardDictionary;
+ (id)intentIdentifierFromStoreEvent:(id)a0;
+ (id)_interactionIdentifierFromObject:(id)a0;
+ (void)_pruneStreamWithIdentifier:(id)a0 policy:(id)a1 shouldPruneBlock:(id /* block */)a2;
+ (id)bundleIdentifiersFromStoreEvent:(id)a0;
+ (id)intentGroupIdentifierFromStoreEvent:(id)a0;
+ (id)isDonatedBySiriFromStoreEvent:(id)a0;
+ (void)pruneForResetPrivacyAndLocationWarnings;
+ (void)pruneLearnFromThisAppDisabled:(id)a0;
+ (void)pruneSiriAndDictationHistory;
+ (void)pruneSiriDisabled;
+ (void)pruneWithDeletedIntentGroupIdentifiers:(id)a0 bundleId:(id)a1;
+ (void)pruneWithDeletedIntentIdentifiers:(id)a0 bundleId:(id)a1;
+ (void)pruneWithInstalledApplications:(id)a0 installedAppExtensions:(id)a1;
+ (void)pruneWithUninstalledBundleIdentifier:(id)a0;
+ (BOOL)shouldPruneStoreEvent:(id)a0 forDeletedGroupIdentifiers:(id)a1 bundleId:(id)a2;
+ (BOOL)shouldPruneStoreEvent:(id)a0 forDeletedIntentIdentifiers:(id)a1 bundleId:(id)a2;
+ (BOOL)shouldPruneStoreEvent:(id)a0 forInstalledApplications:(id)a1 installedAppExtensions:(id)a2;
+ (BOOL)shouldPruneStoreEvent:(id)a0 forLearnFromThisAppDisabledBundleIdentifiers:(id)a1;
+ (BOOL)shouldPruneStoreEvent:(id)a0 forUninstalledBundleId:(id)a1;
+ (BOOL)shouldPruneStoreEventForSiriAndDictationHistoryDeletion:(id)a0;
+ (BOOL)shouldPruneStoreEventForSiriDisabled:(id)a0;

@end
