@interface TILanguageModelLoaderManager : NSObject

+ (void)performMaintenance;
+ (void)contactStoreDidChange:(id)a0;
+ (id)knownClients;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)a0;
+ (void)dropResourcesExcludingInputModes:(id)a0;
+ (void)flushDynamicLearningCaches;
+ (void)flushDynamicResourcesForInputModes:(id)a0;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })modelForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3 isMultiLingualModeEnabled:(BOOL)a4 validEnglishTransformerMultilingualConfig:(BOOL)a5 trialParameters:(id)a6 inlineCompletionPrecision:(int)a7;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(BOOL)a0;
+ (void)setOfflineTrainingEnabled:(BOOL)a0;
+ (id)sharedLanguageModelLoaderForInputMode:(id)a0 customResourcePaths:(id)a1 dynamicResourcePath:(id)a2 mobileAssets:(id)a3 usesLinguisticContext:(BOOL)a4 isMultiLingualModeEnabled:(BOOL)a5 validEnglishTransformerMultilingualConfig:(BOOL)a6 trialParameters:(id)a7;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubForLocale:(id)a0 adaptationContext:(id)a1 staticResourcePaths:(id)a2 dynamicResourcePath:(id)a3 isMultiLingualModeEnabled:(BOOL)a4;
+ (void)unwireAllLanguageModelMemory;
+ (void)wireAllLanguageModelMemory;

@end
