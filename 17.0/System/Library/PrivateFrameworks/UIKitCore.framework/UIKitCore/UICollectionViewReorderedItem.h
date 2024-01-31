@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject

@property (readonly, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *originalIndexPath;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (readonly, nonatomic) NSIndexPath *lastCommittedIndexPath;
@property (readonly, nonatomic) BOOL isUncommitted;
@property (nonatomic) BOOL pinned;
@property (nonatomic) struct CGPoint { double x; double y; } pinnedPreviousContentOffset;
@property (copy, nonatomic) id /* block */ pinningTest;

- (id)description;
- (void).cxx_destruct;
- (void)commitTargetIndexPath;
- (id)expectedCellIndexPath;
- (id)initWithCell:(id)a0 indexPath:(id)a1;
- (BOOL)isNOOP;

@end
