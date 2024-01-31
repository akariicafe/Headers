@class NSString, NSNumber, NSMutableArray;

@interface MUCuratedCollectionsPlacecardAnalyticsManager : NSObject <MUCuratedCollectionsPlacecardAnalytics> {
    struct CollectionsPlacecardEvent { int action; NSString *value; NSNumber *collectionId; NSNumber *collectionCurrentlySaved; NSNumber *horizontalIndex; int target; int cardType; NSMutableArray *possibleActions; NSMutableArray *impossibleActions; NSNumber *verticalIndex; } _event;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cleanUp;
- (void)logEvent;
- (void)placecardCollectionTapped:(id)a0 atIndex:(unsigned long long)a1 isCurrentlySaved:(BOOL)a2;
- (void)placecardCollectionsScrollBackward;
- (void)placecardCollectionsScrollForward;
- (void)placecardCollectionsSeeAllTapped;
- (void)placecardExploreGuidesButtonTapped;

@end
