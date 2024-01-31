@interface CKSearchCollectionView : UICollectionView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (nonatomic) BOOL suppressDatasourceUpdates;
@property (nonatomic) BOOL lockContentOffset;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setDataSource:(id)a0;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndexPath:(id)a1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)a0 withReuseIdentifier:(id)a1 forIndexPath:(id)a2;

@end
