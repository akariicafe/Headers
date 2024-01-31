@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell

@property (weak, nonatomic) id<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> delegate;
@property (nonatomic) long long userOptionIndex;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)_setupFromCollection;
- (void)selectUserOption;

@end
