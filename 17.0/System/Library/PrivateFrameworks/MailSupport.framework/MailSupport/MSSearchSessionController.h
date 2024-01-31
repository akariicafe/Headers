@class NSArray, NSMutableArray, NSObject;
@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;

@interface MSSearchSessionController : NSObject

@property (readonly, nonatomic) unsigned long long numberOfMessagesLeftToIndex;
@property (readonly, nonatomic) unsigned long long percentOfMessagesIndexed;
@property (readonly, nonatomic) int emailProvider;
@property (readonly, nonatomic) NSMutableArray *mutableSessionEngagements;
@property (readonly, weak, nonatomic) id<MSSearchSessionControllerDataSource> dataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *sessionEngagements;

- (id)init;
- (void)endSession;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)recordUserDidRightClickMessage:(id)a0;
- (void)_addToLatestEngagementWithUserEngagement:(id)a0;
- (void)_recordEngagement:(int)a0 forMessage:(id)a1 isTopHit:(BOOL)a2 messageListIndex:(long long)a3 spotlightListIndex:(long long)a4;
- (void)_recordUserDidNotSelectAnyMessage;
- (void)addNewEngagementWithAWDAtoms:(id)a0 searchScope:(BOOL)a1 suggestionsEngagements:(id)a2;
- (void)addNewEngagementWithAtoms:(id)a0 searchScope:(BOOL)a1 suggestionsEngagement:(id)a2;
- (void)recordUserDidOrbMessage:(id)a0;
- (void)recordUserDidOrbMessage:(id)a0 isTopHit:(BOOL)a1 messageListIndex:(long long)a2 spotlightListIndex:(long long)a3;
- (void)recordUserDidRightClickMessage:(id)a0 isTopHit:(BOOL)a1 messageListIndex:(long long)a2 spotlightListIndex:(long long)a3;
- (void)recordUserDidSelectMessage:(id)a0;
- (void)recordUserDidSelectMessage:(id)a0 isTopHit:(BOOL)a1 messageListIndex:(long long)a2 spotlightListIndex:(long long)a3;
- (void)recordUserDidSwipeMessage:(id)a0;
- (void)recordUserDidSwipeMessage:(id)a0 isTopHit:(BOOL)a1 messageListIndex:(long long)a2 spotlightListIndex:(long long)a3;
- (void)updateLastEngagementSearchResultCount:(unsigned long long)a0;

@end
