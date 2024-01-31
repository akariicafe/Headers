@class NSArray, UICollectionViewDiffableDataSource, UICollectionView;
@protocol ICItemIdentifier;

@interface ICDataSource : NSObject

@property (retain, nonatomic) NSArray *sectionControllers;
@property (nonatomic, getter=isTogglingLock) BOOL togglingLock;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *collectionViewDiffableDataSource;
@property (copy, nonatomic) id /* block */ willExpandItemHandler;
@property (copy, nonatomic) id /* block */ willCollapseItemHandler;
@property (readonly, nonatomic) id<ICItemIdentifier> firstRelevantItemIdentifier;

- (void)applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reloadDataAnimated:(BOOL)a0;
- (void)accountHidesSystemPaperNotesInCustomFoldersDidChange:(id)a0;
- (id)associatedCellsForItemIdentifiers:(id)a0;
- (id)nextRelevantItemIdentifierAfter:(id)a0;
- (void)noteLockManagerDidToggleLock:(id)a0;
- (void)noteLockManagerWillToggleLock:(id)a0;
- (void)reindexDataAnimated:(BOOL)a0;
- (void)reindexDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;
- (void)reloadDataAnimated:(BOOL)a0 dataIndexedBlock:(id /* block */)a1 dataRenderedBlock:(id /* block */)a2;

@end
