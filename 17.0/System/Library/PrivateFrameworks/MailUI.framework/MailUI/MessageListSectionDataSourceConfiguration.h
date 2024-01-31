@class NSString, MFSearchProgressView, MessageListViewControllerState, EMObjectID, EMCachingContactStore, UICollectionView, EFPromise, MessageListCellLayoutValuesHelper, EMMessageList;
@protocol MessageListSectionDataSourceDelegate, MessageListSectionDataSourceSelectionModelProvider;

@interface MessageListSectionDataSourceConfiguration : NSObject

@property (readonly, nonatomic) EMObjectID *identifier;
@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) Class listCellClass;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) EFPromise *initialLoadCompletedPromise;
@property (readonly, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (readonly, nonatomic) MessageListViewControllerState *state;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceDelegate> delegate;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceSelectionModelProvider> selectionModelProvider;
@property (readonly, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) MFSearchProgressView *searchProgressView;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 section:(id)a1 collectionView:(id)a2 listCellClass:(Class)a3 messageList:(id)a4 layoutValuesHelper:(id)a5 state:(id)a6 contactStore:(id)a7 delegate:(id)a8 selectionModelProvider:(id)a9 initialLoadCompletedPromise:(id)a10 searchProgressView:(id)a11;

@end
