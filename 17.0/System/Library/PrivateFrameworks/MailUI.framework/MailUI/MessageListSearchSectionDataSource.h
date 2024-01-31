@class UICollectionViewSupplementaryRegistration;

@interface MessageListSearchSectionDataSource : MessageListRecentSectionDataSource

@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *footerRegistration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)configuredReusableSupplementaryViewForCollectionView:(id)a0 elementKind:(id)a1 indexPath:(id)a2;
- (BOOL)hasSupplementaryViewOfKind:(id)a0;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 listCellClass:(Class)a3 searchProgressView:(id)a4 messageList:(id)a5 initialLoadCompletedPromise:(id)a6 layoutValuesHelper:(id)a7 state:(id)a8;

@end
