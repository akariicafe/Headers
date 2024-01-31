@class NSIndexPath;

@interface SFFluidCollectionViewUpdateItem : NSObject <NSCopying>

@property (retain, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (retain, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic) long long updateAction;
@property (readonly, nonatomic) BOOL isSectionUpdate;
@property (readonly, nonatomic) BOOL hasIndexPathChange;

+ (id)updateItemForReloadAtIndexPath:(id)a0;
+ (id)updateItemForDeleteFromIndexPath:(id)a0;
+ (id)updateItemForInsertIntoIndexPath:(id)a0;
+ (id)updateItemForMoveFromIndexPath:(id)a0 toIndexPath:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inverseItem;

@end
