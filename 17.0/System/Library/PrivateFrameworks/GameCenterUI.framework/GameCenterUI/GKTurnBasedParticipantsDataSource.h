@class NSString, GKTurnBasedMatch;

@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource

@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (readonly, nonatomic) NSString *sectionTitle;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)configureCollectionView:(id)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;

@end
