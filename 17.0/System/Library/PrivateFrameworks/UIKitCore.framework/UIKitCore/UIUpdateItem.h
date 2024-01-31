@class NSIndexPath, UICollectionViewUpdateItem;

@interface UIUpdateItem : NSObject {
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    struct { unsigned char isSectionOperation : 1; unsigned char headerFooterOnly : 1; } _updateItemFlags;
    int _action;
    NSIndexPath *_indexPath;
    long long _animation;
}

@property (readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (readonly, nonatomic) BOOL isDecomposedFromReload;

- (long long)compareIndexPathsForMoves:(id)a0;
- (long long)inverseCompareIndexPaths:(id)a0;
- (id)description;
- (long long)compareIndexPaths:(id)a0;
- (void).cxx_destruct;
- (id)_moveDestinationDescription;

@end
