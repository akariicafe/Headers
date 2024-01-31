@interface AVTFunCamAvatarPickerStyle : NSObject

@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct CGSize { double width; double height; } engagedCellSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gridEdgeInsets;

+ (id)defaultLayoutStyle;
+ (id /* block */)insetProviderForConstant:(double)a0;

- (double)edgeLengthFittingWidth:(double)a0 environment:(id)a1;
- (id /* block */)imageItemInsetsForGrid;
- (id /* block */)imageItemInsetsForList;
- (id)initWithCellSize:(struct CGSize { double x0; double x1; })a0 engagedCellSize:(struct CGSize { double x0; double x1; })a1 interitemSpacing:(double)a2 gridEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end
