@interface CDMFeatureFlags : NSObject

+ (BOOL)isSiriMiniEnabled;
+ (BOOL)isLogNluEnabled;
+ (BOOL)isUaaPPreferred;
+ (BOOL)globalOverridesAreEnabled;
+ (BOOL)isAmbiguityRefactorEnabled;
+ (BOOL)isCATIEnabled;
+ (BOOL)isCATIMultiTurnEnabled;
+ (BOOL)isCDMClientXPCEnabled;
+ (BOOL)isCbrUnrestrictedByRDEnabled;
+ (BOOL)isCcqrAerCbrEnabled;
+ (BOOL)isContextUpdateEnabled;
+ (BOOL)isContextualSpanMatcherEnabled;
+ (BOOL)isFeatureStoreEnabled;
+ (BOOL)isFeatureStoreEnabledForExternalBuilds;
+ (BOOL)isInterpretationGroupFilteringEnabled;
+ (BOOL)isLVCEnabled;
+ (BOOL)isLighthouseAPIEnabled;
+ (BOOL)isMarrsMentionDetectorEnabled;
+ (BOOL)isMarrsMentionResolverEnabled;
+ (BOOL)isMentionResolverRewriterEnabled;
+ (BOOL)isPSCEnabled;
+ (BOOL)isRepetitionDetectionEnabled;
+ (BOOL)isSSUCacheUpdateOnEveryRequestEnabled;
+ (BOOL)isSSUEnableIndexingEnabled;
+ (BOOL)isSSUEnabled;
+ (BOOL)isShortcutsNLv4FollowupEnabled;
+ (BOOL)isTrieOverridesEnabled;
+ (BOOL)isUAFAssetsEnabled;
+ (BOOL)isUaaPEnabled;
+ (BOOL)isUsoEntitySpanEnabled;

@end
