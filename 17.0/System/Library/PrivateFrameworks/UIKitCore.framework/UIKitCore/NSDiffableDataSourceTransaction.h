@class NSArray, NSDiffableDataSourceSnapshot, NSOrderedCollectionDifference;

@interface NSDiffableDataSourceTransaction : NSObject

@property (readonly, nonatomic) NSArray *reorderedItemIdentifiers;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;
@property (readonly, nonatomic) NSArray *sectionTransactions;

+ (id)applyTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;
+ (id)_computeReorderingTransactionWithInitialSnapshot:(id)a0 reorderingUpdate:(id)a1 sectionSnapshotProvider:(id /* block */)a2;
+ (id)reorderingTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;

- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (id)transactionWithSectionTransactions:(id)a0;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 finalSectionSnapshots:(id)a4;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 difference:(id)a3 reorderedItemIdentifiers:(id)a4 sectionTransactions:(id)a5;
- (id)initialDataSourceSnapshotter;
- (id)finalDataSourceSnapshotter;
- (id)performDiffGeneratingUpdates;
- (id)description;
- (BOOL)isReorderingTransaction;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 reorderedItemIdentifiers:(id)a3 difference:(id)a4 sectionTransactions:(id)a5;
- (id)_spiCopy;
- (BOOL)_containsItemIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)finalSectionCount;
- (BOOL)isEqual:(id)a0;
- (BOOL)isApplyTransaction;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialSectionCount;

@end
