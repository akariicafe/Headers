@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ onlineParticipants;
    void /* unknown type, empty encoding */ offlineParticipants;
    void /* unknown type, empty encoding */ participantIsShownInGrid;
    void /* unknown type, empty encoding */ didCreateCellForParticipant;
}

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
