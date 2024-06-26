@class NSMutableDictionary, FFPlistParser, NSSet, NSArray, NSMutableArray, NSMutableSet;
@protocol FFParseErrorReporter, FFFileReader, FFSafeModeChecker, FFFileWriter;

@interface FFConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary *configByLevelIndex[2][8];
    NSMutableDictionary *metaByLevelIndex[8];
    NSMutableSet *disclosuresByLevelIndex[8];
    NSMutableDictionary *featureSetsMetaByLevelIndex[8];
    NSMutableSet *enabledFeatureSetsByLevelIndex[8];
    NSMutableDictionary *enabledFeatureSetsAtLevelIndexByGroup[8];
    NSMutableDictionary *definedFeatureSets;
    NSMutableDictionary *definedFeatureGroups;
    NSMutableDictionary *subscriptionsMetaByLevelIndex[8];
    NSMutableArray *subscriptionsByLevelIndex[8];
}

@property (class, readonly, nonatomic) FFConfiguration *shared;

@property (retain, nonatomic) id<FFFileWriter> filewriter;
@property (retain, nonatomic) id<FFFileReader> filereader;
@property (retain, nonatomic) id<FFParseErrorReporter> parseerrorreporter;
@property (retain, nonatomic) FFPlistParser *plistparser;
@property (retain, nonatomic) id<FFSafeModeChecker> safemodechecker;
@property (retain, nonatomic) NSMutableArray *profilePayloads;
@property (readonly, nonatomic) NSSet *domains;

+ (id)configurationForTestingWithFileWriter:(id)a0;
+ (id)configurationForProfileManagement;
+ (id)_configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1 parseErrorReporter:(id)a2 safeModeChecker:(id)a3;
+ (id)configurationForTestingWithFileReader:(id)a0 parseErrorReporter:(id)a1 safeModeChecker:(id)a2;
+ (id)configurationForTestingWithFileReader:(id)a0;
+ (id)configurationForTestingWithFileReader:(id)a0 parseErrorReporter:(id)a1;
+ (BOOL)isValidName:(id)a0;
+ (id)configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1;
+ (BOOL)isValidDisclosureName:(id)a0;

- (id)initPrivate;
- (BOOL)reset:(id *)a0;
- (BOOL)phaseShouldBeEnabledByDefault:(id)a0;
- (void)invalidateCache;
- (void)removeDisclosure:(id)a0 atLevelIndex:(unsigned long long)a1;
- (id)makeFeatureDictionaryFrom:(id)a0 forDomain:(id)a1 atDomainLevel:(BOOL)a2 reportableFilename:(id)a3;
- (id)stateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)allFeatureGroups;
- (void)removeAllSubscriptionsAtLevelIndex:(unsigned long long)a0;
- (void)addDisclosureAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (id)subscriptionsFileURLForLevelIndex:(unsigned long long)a0;
- (id)attributesForFeatureGroup:(id)a0;
- (void)reportParseError:(id)a0 severity:(id)a1 whileParsingKey:(id)a2 inContext:(id)a3 inFile:(id)a4;
- (id)currentDisclosuresAtLevel:(long long)a0;
- (id)featuresForDomainAlreadyLocked:(id)a0;
- (long long)resolvedValueForFeatureSet:(id)a0 inGroup:(id)a1;
- (id)mutableDisclosureSetAtLevelIndex:(unsigned long long)a0;
- (id)fileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (void)loadFeatureSetDefinitions;
- (id)allSubscriptionsAtLevel:(long long)a0;
- (void)unsetFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (id)stateForFeature:(id)a0 domain:(id)a1;
- (void)_unsetFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (id)definedFeatureGroupsFilteredByCurrentDisclosures;
- (void)disableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (unsigned int)sortValueForPhase:(id)a0;
- (void)enableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (BOOL)addProfilePayload:(id)a0 error:(id *)a1;
- (long long)valueForFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (BOOL)writeCombinedUpdatesAtLevelIndex:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isFeatureHidden:(id)a0 domain:(id)a1;
- (id)featureSetsInGroup:(id)a0;
- (BOOL)writeFeatureSetUpdates:(id *)a0;
- (id)fileURLForDomain:(id)a0 pathIndex:(int)a1;
- (void)loadAllData;
- (long long)_resolvedValueForFeatureSet:(id)a0;
- (id)featureFlagsInSet:(id)a0 inGroup:(id)a1;
- (void)loadSubscriptionDataForLevelIndex:(unsigned long long)a0;
- (void)loadFeatureSetDefinitionsNamed:(id)a0 fromURL:(id)a1;
- (void)loadAllLevelsForDomain:(id)a0;
- (BOOL)resolvedStateForDisclosure:(id)a0;
- (void)removeAllFeatureSetDataAtLevelIndex:(unsigned long long)a0;
- (id)disclosureForFeatureGroup:(id)a0;
- (void)clearCachedData;
- (BOOL)writeSubscriptionUpdates:(id *)a0;
- (id)effectiveStateForFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)addSubscriptionAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void)addSubscription:(id)a0 atLevel:(long long)a1;
- (void)disableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)unsetFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)unsetFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)recalculateFeatureSetEffectsAt:(unsigned long long)a0;
- (id)disclosureFileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (long long)_valueForFeatureSet:(id)a0 atLevel:(long long)a1;
- (void)loadDomain:(id)a0 levelIndex:(unsigned long long)a1;
- (void)createMutableDomainConfig:(id)a0 levelIndex:(unsigned long long)a1;
- (void)_enableFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)enableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 levelIndex:(unsigned long long)a3;
- (id)definedFeatureSetsFilteredByCurrentDisclosures;
- (BOOL)writeDisclosureUpdates:(id *)a0;
- (id)featureSetsFileURLForLevelIndex:(unsigned long long)a0;
- (BOOL)resetDomain:(id)a0 error:(id *)a1;
- (id)featuresForDomain:(id)a0;
- (void)recalculateSubscriptionEffectsAt:(unsigned long long)a0;
- (BOOL)writeDomainUpdates:(id *)a0;
- (void)populateDictionary:(id)a0 withFeatures:(id)a1;
- (BOOL)commitProfilePayloadsAndReturnError:(id *)a0;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)parseSubscriptionsDictionary:(id)a0;
- (id)resolvedStateForFeature:(id)a0 domain:(id)a1;
- (void)unsetFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)removeDisclosure:(id)a0 atLevel:(long long)a1;
- (BOOL)writeCombinedUpdates:(id *)a0;
- (BOOL)commitUpdates:(id *)a0;
- (void)enableFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (void)setFeaturesMatchingAttribute:(id)a0 levelIndex:(unsigned long long)a1 value:(long long)a2;
- (BOOL)writeSubscriptionUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;
- (BOOL)isSafeMode;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)addDisclosure:(id)a0 atLevel:(long long)a1;
- (void)prepareToAddProfilePayloads;
- (id)currentDisclosures;
- (void)loadFeatureSetDataForLevelIndex:(unsigned long long)a0;
- (id)internalDisclosureFileURLForLevelIndex:(unsigned long long)a0;
- (id)initPrivateForBootTask;
- (id)disclosureForFeature:(id)a0 domain:(id)a1;
- (BOOL)writeDisclosureUpdatesAtlevelIndex:(unsigned long long)a0 error:(id *)a1;
- (void)removeAllDisclosuresAtLevelIndex:(unsigned long long)a0;
- (BOOL)isValidName:(id)a0;
- (id)defaultStateForFeature:(id)a0 domain:(id)a1;
- (id)currentDisclosuresAtLevelIndex:(unsigned long long)a0;
- (void)addFeaturesForDomain:(id)a0 pathIndex:(int)a1 fromURL:(id)a2;
- (void)removeSubscription:(id)a0 atLevel:(long long)a1;
- (void)loadCombinedDataForLevelIndex:(unsigned long long)a0;
- (BOOL)isValidDisclosureName:(id)a0;
- (BOOL)writeFeatureSetUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;
- (void)validateName:(id)a0;

@end
