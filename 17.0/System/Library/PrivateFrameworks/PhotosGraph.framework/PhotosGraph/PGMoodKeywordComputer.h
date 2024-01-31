@class PGGraphMomentNodeCollection, NSOrderedSet, NSArray, PGGraphHighlightTypeNodeCollection, PGGraphSocialGroupNodeCollection, PGGraphPersonNodeCollection, PGGraphHolidayNodeCollection;

@interface PGMoodKeywordComputer : NSObject

@property (retain, nonatomic) NSOrderedSet *orderedKeywords;
@property (retain, nonatomic) NSArray *keywordsRegions;
@property (retain, nonatomic) PGGraphHolidayNodeCollection *lunarNewYearHolidayNodes;
@property (retain, nonatomic) PGGraphHighlightTypeNodeCollection *shortTripTypeNodeCollection;
@property (retain, nonatomic) PGGraphPersonNodeCollection *familyOrPartnerPersonNodes;
@property (retain, nonatomic) PGGraphSocialGroupNodeCollection *bestSocialGroupNodes;
@property (retain, nonatomic) PGGraphMomentNodeCollection *natureMomentNodes;

- (void).cxx_destruct;
- (id)_bestSocialGroupNodesInGraph:(id)a0;
- (id)_celebratedHolidayKeywordsForMomentNodes:(id)a0 inGraph:(id)a1;
- (id)_familyOrPartnerPersonNodesInGraph:(id)a0;
- (id)_gatheringAndFamilyKeywordsForTriggeredMemory:(id)a0 isMeaningfulEventHoliday:(BOOL)a1 inGraph:(id)a2;
- (BOOL)_isCrowdedForMomentNodes:(id)a0;
- (id)_keywordsSortedByPriority:(id)a0;
- (id)_locationTripKeywordsForMomentNodes:(id)a0 locationHelper:(id)a1;
- (id)_lunarNewYearHolidayNodesInGraph:(id)a0;
- (id)_natureMomentNodesInGraph:(id)a0;
- (id)_shortTripTypeNodeCollectionInGraph:(id)a0;
- (id)moodKeywordsForTriggeredMemory:(id)a0 suggestedMood:(unsigned long long)a1 inGraph:(id)a2 locationHelper:(id)a3;

@end
