@class NSSet, NSString;

@interface PGDejunkerDeduperOptions : NSObject {
    NSString *_baseFlavor;
}

@property (nonatomic) BOOL doIdenticalDeduping;
@property (nonatomic) double identicalDedupingTimeInterval;
@property (nonatomic) double identicalDedupingTimeIntervalForPeople;
@property (nonatomic) double identicalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerIdenticalCluster;
@property (nonatomic) double identicalDedupingThreshold;
@property (nonatomic) double identicalDedupingThresholdForPeople;
@property (nonatomic) double identicalDedupingThresholdForBestItems;
@property (nonatomic) BOOL useFaceprintsForIdenticalDeduping;
@property (nonatomic) double identicalDedupingFaceprintDistance;
@property (nonatomic) BOOL doSemanticalDeduping;
@property (nonatomic) double semanticalDedupingTimeInterval;
@property (nonatomic) double semanticalDedupingTimeIntervalForPeople;
@property (nonatomic) double semanticalDedupingTimeIntervalForPersons;
@property (nonatomic) double semanticalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerSemanticalCluster;
@property (nonatomic) double semanticalDedupingThreshold;
@property (nonatomic) double semanticalDedupingThresholdForPeople;
@property (nonatomic) double semanticalDedupingThresholdForPersons;
@property (nonatomic) BOOL dontSemanticallyDedupePeople;
@property (nonatomic) BOOL dontSemanticallyDedupePersons;
@property (nonatomic) BOOL allowAdaptiveForSemanticalDeduping;
@property (nonatomic) BOOL semanticalDedupingProtectSmallClusters;
@property (nonatomic) BOOL useOnlyScenesForDeduping;
@property (nonatomic) BOOL useAllPersonsForDeduping;
@property (nonatomic) BOOL useFaceQualityForElection;
@property (nonatomic) BOOL doNotDedupeVideos;
@property (nonatomic) BOOL doNotDedupeInterestingPortraitsAndLivePictures;
@property (nonatomic) BOOL onlyDedupeContiguousItems;
@property (nonatomic) BOOL doDejunk;
@property (nonatomic) BOOL returnDedupedJunkIfOnlyJunk;
@property (nonatomic) BOOL doFinalPass;
@property (nonatomic) double finalPassTimeInterval;
@property (nonatomic) double finalPassMaximumTimeGroupExtension;
@property (nonatomic) double finalPassDedupingThreshold;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSSet *identifiersOfRequiredItems;
@property (retain, nonatomic) NSSet *identifiersOfEligibleItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initForMemories;
- (id)dictionaryRepresentationRestrictingToGlobalOptions:(BOOL)a0;
- (id)initForCuratedLibrary;

@end
