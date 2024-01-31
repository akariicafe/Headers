@class NSDictionary, UICollectionViewCellRegistration;
@protocol EFCancelable;

@interface MessageListRecentSectionDataSource : MessageListSectionDataSource {
    UICollectionViewCellRegistration *_cellRegistration;
}

@property (retain, nonatomic) NSDictionary *snippetHintsByGlobalMessageID;
@property (nonatomic, getter=shouldHideFollowUp) BOOL hideFollowUp;
@property (retain, nonatomic) id<EFCancelable> userDefaultsObserver;

- (void).cxx_destruct;
- (void)collection:(id)a0 shouldHighlightSnippetHints:(id)a1;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2;
- (void)_configureCell:(id)a0 atIndexPath:(id)a1 itemID:(id)a2;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 listCellClass:(Class)a3 messageList:(id)a4 initialLoadCompletedPromise:(id)a5 layoutValuesHelper:(id)a6 state:(id)a7;

@end
