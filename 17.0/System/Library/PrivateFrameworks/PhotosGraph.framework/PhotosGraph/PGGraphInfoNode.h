@class NSString, NSArray, NSLocale, NSDate;

@interface PGGraphInfoNode : PGGraphOptimizedNode {
    double _creationDateTimeInterval;
    double _dateOfLastIncrementalUpdateInvocationTimeInterval;
    NSString *_flattenedLanguageIdentifiers;
}

@property (readonly) NSDate *creationDate;
@property (readonly) NSDate *dateOfLastIncrementalUpdateInvocation;
@property (readonly) NSLocale *locale;
@property (readonly) NSString *localeIdentifier;
@property (readonly) NSArray *languageIdentifiers;
@property (readonly) NSString *geoServiceProviderID;
@property (readonly) unsigned long long curationAlgorithmsVersion;
@property (readonly) unsigned long long relatedAlgorithmsVersion;
@property (readonly) unsigned long long memoriesAlgorithmsVersion;
@property (readonly) unsigned long long meaningAlgorithmsVersion;
@property (readonly) unsigned long long personActivityMeaningAlgorithmsVersion;
@property (readonly) unsigned long long relationshipAlgorithmsVersion;
@property (readonly) unsigned long long businessItemAlgorithmsVersion;
@property (readonly) unsigned long long publicEventAlgorithmsVersion;
@property (readonly) unsigned long long holidayAlgorithmsVersion;
@property (readonly) unsigned long long frequentLocationAlgorithmsVersion;
@property (readonly) unsigned long long autonamingAlgorithmsVersion;
@property (readonly) unsigned long long questionsVersion;
@property (readonly) unsigned long long tripKeyAssetAlgorithmsVersion;
@property (readonly) unsigned long long ageCategoryAlgorithmsVersion;
@property (readonly) unsigned long long memoryQualityAlgorithmsVersion;
@property (readonly) unsigned long long petAlgorithmsVersion;
@property (readonly) unsigned long long featuredPhotoAlgorithmsVersion;
@property (readonly) unsigned long long longTailFeaturedPhotoAlgorithmsVersion;
@property (readonly) unsigned long long sharedLibrarySuggestionsAlgorithmsVersion;
@property (readonly) unsigned long long sharedLibraryStartAlgorithmsVersion;
@property (readonly) unsigned long long sharedLibraryCameraLibrarySwitchAlgorithmsVersion;
@property (readonly) unsigned long long wallpaperAlgorithmsVersion;
@property (readonly) unsigned long long locationRepresentativeAssetAlgorithmsVersion;
@property (readonly) long long eventLabelingV2ModelVersion;
@property (readonly) double intelligencePlatformVersion;
@property (readonly) BOOL canUseLocationDomain;
@property (readonly) struct PGRoutineInfoStruct { BOOL routineAvailable; unsigned long long numberOfLocationsOfInterest; unsigned long long numberOfVisits; unsigned long long numberOfTimeMatches; unsigned long long numberOfCloseByLocationMatches; unsigned long long numberOfRemoteLocationMatches; unsigned long long numberOfMatchRequests; double pinningVisitsRatio; } routineInfo;
@property (readonly) BOOL canAccessContactsStore;
@property (readonly) double personalGoodAestheticsThreshold;
@property (readonly) double personalHighAestheticsThreshold;
@property (readonly) unsigned long long numberOfSelfies;
@property (readonly) double topTierAestheticScore;
@property (readonly) double topTierAestheticScoreForTripKeyAsset;
@property (readonly) unsigned long long numberOfUtilityAssets;
@property (readonly) unsigned long long numberOfDefaultAssets;
@property (readonly) unsigned long long numberOfImprovedAssets;
@property (readonly) unsigned long long numberOfBetterAssets;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) double mergeCandidateConfidenceThreshold;

+ (id)numberOfSelfies:(unsigned long long)a0;
+ (id)genericPropertiesWithCreationDate:(id)a0 localeIdentifier:(id)a1 languageIdentifiers:(id)a2 geoServiceProviderID:(id)a3 curationAlgorithmsVersion:(unsigned long long)a4 contactsStoreAccess:(BOOL)a5;
+ (id)assetPropertiesWithNumberOfUtilityAssets:(unsigned long long)a0 numberOfDefaultAssets:(unsigned long long)a1 numberOfImprovedAssets:(unsigned long long)a2 numberOfBetterAssets:(unsigned long long)a3;
+ (id)deserializeLanguageIdentifiers:(id)a0;
+ (id)serializeLanguageIdentifiers:(id)a0;
+ (id)personalAestheticsPropertiesWithHighAestheticsThreshold:(double)a0 goodAestheticsThreshold:(double)a1;
+ (id)locationPropertiesWithCanUseLocationDomain:(BOOL)a0;
+ (id)topTierScorePropertiesWithAestheticScore:(double)a0 aestheticScoreForTripKeyAsset:(double)a1;
+ (id)routineInfoPropertiesWithServiceManager:(id)a0;
+ (id)propertiesWithLastIncrementalUpdateInvocationOnDate:(id)a0;

- (id)label;
- (id)propertyDictionary;
- (id)initWithCreationDate:(id)a0 localeIdentifier:(id)a1 languageIdentifiers:(id)a2 geoServiceProviderID:(id)a3 curationAlgorithmsVersion:(unsigned long long)a4 contactsStoreAccess:(BOOL)a5;
- (void)setLocalProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void).cxx_destruct;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;

@end
