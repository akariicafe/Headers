@class MARelation, NSString, NSDate, PGGraphHighlightNodeCollection, PGGraphHighlightGroupNode;
@protocol PGGraphEventCollection;

@interface PGGraphHighlightNode : PGGraphOptimizedNode <PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PGEventEnrichment, PGAssetCollectionFeature> {
    double _localStartTimestamp;
    double _localEndTimestamp;
}

@property (class, readonly) MARelation *momentInHighlight;
@property (class, readonly) MARelation *momentInDayHighlight;
@property (class, readonly) MARelation *highlightGroupOfHighlight;
@property (class, readonly) MARelation *highlightWithPrivateAssetsOfHighlight;
@property (class, readonly) MARelation *highlightWithSharedAssetsOfHighlight;
@property (class, readonly) MARelation *highlightWithPrivateAndSharedAssetsOfHighlight;

@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *uuid;
@property (readonly) double timezoneOffsetAtStart;
@property (readonly) double timezoneOffsetAtEnd;
@property (readonly) BOOL isPartOfTrip;
@property (readonly) BOOL isPartOfLongTrip;
@property (readonly) BOOL isPartOfShortTrip;
@property (readonly) BOOL isPartOfAggregation;
@property (readonly) BOOL isInteresting;
@property (readonly) unsigned long long numberOfRegularGemAssets;
@property (readonly) unsigned long long numberOfShinyGemAssets;
@property (readonly) unsigned short sharingComposition;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly, nonatomic) PGGraphHighlightNodeCollection *collection;
@property (readonly) NSString *name;
@property (readonly) NSString *UUID;
@property (readonly) double contentScore;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) BOOL isLongTrip;
@property (readonly) BOOL isShortTrip;
@property (readonly) BOOL isTrip;
@property (readonly) BOOL petIsPresent;
@property (readonly) double timestampUTCStart;
@property (readonly) double timestampUTCEnd;
@property (readonly) BOOL isInterestingWithAlternateJunking;
@property (readonly) BOOL isSmartInteresting;
@property (readonly) id<PGGraphEventCollection> eventCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL hasLocation;
@property (readonly) id<PGGraphEventCollection> scenedEventCollection;
@property (readonly) BOOL isAggregation;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; double x14; double x15; unsigned long long x16; unsigned long long x17; })_promotionScoreDescriptorWithMomentNodes:(id)a0 neighborScoreComputer:(id)a1;
+ (id)filterWithUUID:(id)a0;
+ (double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; double x14; double x15; unsigned long long x16; unsigned long long x17; })a0;
+ (id)allHighlightsFilter;
+ (double)averagePromotionScoreWithPromotionScoreDescriptor:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; double x14; double x15; unsigned long long x16; unsigned long long x17; })a0;
+ (double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; double x14; double x15; unsigned long long x16; unsigned long long x17; })a0;
+ (id)dayHighlightsFilter;
+ (id)filterWithUUIDs:(id)a0;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)a0 withName:(id)a1;
+ (double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; double x14; double x15; unsigned long long x16; unsigned long long x17; })a0 isAggregation:(BOOL)a1 enrichmentState:(unsigned short)a2;
+ (id)otherVeryMeaningfulMeanings;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)a0;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)a0;
+ (id)promotionScoreSortDescriptors;
+ (double)promotionScoreWithHighlightNode:(id)a0 enrichmentState:(unsigned short)a1 numberOfExtendedAssets:(unsigned long long)a2 neighborScoreComputer:(id)a3;
+ (id)propertiesWithHighlight:(id)a0;
+ (id)scoreSortDescriptors;

- (id)debugDictionary;
- (id)label;
- (id)propertyDictionary;
- (id)poiNodes;
- (void)setLocalProperties:(id)a0;
- (id)businessNodes;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)celebratedHolidayNodes;
- (void).cxx_destruct;
- (id)publicEventNodes;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)a0;
- (id)propertyForKey:(id)a0;
- (id)meaningLabels;
- (id)enrichableEvent;
- (id)meaningfulEvent;
- (id)businessedEvent;
- (id)addressNodes;
- (id)anniversaryPersonNodes;
- (id)birthdayPersonNodes;
- (id)connectedEventsWithTargetDomain:(unsigned short)a0;
- (id)consolidatedPersonNodes;
- (id)consolidatedPersonNodesPresentInAssets;
- (id)dateNodes;
- (BOOL)endsBeforeLocalDate:(id)a0;
- (void)enumerateBusinessesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)eventEnrichmentMomentNodes;
- (id)eventEnrichmentSortedMomentNodes;
- (id)eventSortedMomentNodes;
- (id)fetchAssetCollectionInPhotoLibrary:(id)a0;
- (BOOL)happensPartiallyAtHomeOfPersonNodes:(id)a0;
- (BOOL)happensPartiallyAtHomeOrWorkOfPersonNodes:(id)a0;
- (BOOL)happensPartiallyAtWorkOfPersonNodes:(id)a0;
- (BOOL)hasPeopleCountingMe:(BOOL)a0;
- (id)holidayNodes;
- (id)initFromHighlight:(id)a0;
- (id)keywordsForRelatedType:(unsigned long long)a0 focusOnNodes:(id)a1;
- (id)locatedEvent;
- (id)naturalLanguageFeatures;
- (double)nonMeaningfulPromotionScoreForTripKeyAssetWithEnrichmentState:(unsigned short)a0 neighborScoreComputer:(id)a1;
- (id)peopledEvent;
- (id)personNodes;
- (id)personNodesInProximity;
- (id)petNodes;
- (id)photoEvent;
- (id)relatableEvent;
- (id)relatableNode;
- (id)reliableMeaningLabels;
- (id)roiNodes;
- (id)scenedEvent;
- (id)seasonNodes;
- (id)socialGroupNodes;
- (BOOL)startsAfterLocalDate:(id)a0;
- (id)timedEvent;
- (double)weightForMoment:(id)a0;

@end
