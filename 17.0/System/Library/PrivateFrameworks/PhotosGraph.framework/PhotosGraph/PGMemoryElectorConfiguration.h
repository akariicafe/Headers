@class NSTimeZone, NSArray, PGFeature, NSString, NSDate;

@interface PGMemoryElectorConfiguration : PGConfiguration

@property (copy, nonatomic) NSDate *localDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL shouldPersist;
@property (nonatomic) unsigned short pendingState;
@property (nonatomic) unsigned long long maximumTargetNumberOfMemories;
@property (nonatomic) unsigned long long minimumTargetNumberOfMemories;
@property (nonatomic) BOOL useMaximumTargetNumberOfMemories;
@property (nonatomic) unsigned long long maximumNumberOfMemoriesWithGuestAssets;
@property (nonatomic) double maximumRatioOfGuestAssets;
@property (nonatomic) unsigned long long numberOfDaysToLookInPast;
@property (nonatomic) unsigned long long numberOfDaysToLookInFuture;
@property (nonatomic) unsigned long long numberOfDaysToFocusOnNewMemoryTypes;
@property (nonatomic) unsigned long long minimumNumberOfDaysBeforeTimeDecay;
@property (retain, nonatomic) NSArray *collidableSuggestions;
@property (nonatomic) unsigned long long minimumNumberOfCuratedAssets;
@property (nonatomic) BOOL skipEnrichment;
@property (retain, nonatomic) NSArray *moodHistory;
@property (nonatomic) unsigned long long requestedMemoryCategory;
@property (nonatomic) unsigned long long requestedTriggerType;
@property (retain, nonatomic) PGFeature *requestedFeature;
@property (retain, nonatomic) NSString *requestedUniqueMemoryIdentifier;
@property (nonatomic) BOOL allowGuestAsset;

+ (id)defaultConfigurationDictionarySource;

- (id)init;
- (void).cxx_destruct;
- (id)futureMemoryCollisionUniversalDateInterval;
- (id)pastMemoryCollisionUniversalDateInterval;
- (unsigned long long)targetNumberOfMemoriesWithMemoryContext:(id)a0 totalNumberOfMemoryNodes:(unsigned long long)a1 referenceNumberOfDays:(unsigned long long)a2;

@end
