@class UIFont;

@interface HUMosaicCameraCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double descriptionInset;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double mosaicInterItemSpacing;
@property (nonatomic) double maxWidth;
@property (nonatomic) long long viewSizeSubclass;
@property (nonatomic) BOOL isMosaicCell;
@property (retain, nonatomic) UIFont *timingLabelFont;
@property (retain, nonatomic) UIFont *secondaryLabelFont;
@property (readonly, nonatomic) double minimumCameraCellWidth;
@property (readonly, nonatomic) double cameraCellWidth;
@property (readonly, nonatomic) double cameraCellHeight;
@property (nonatomic) double expandedFormatAspectRatio;

+ (double)heightForWidth:(double)a0;
+ (double)widthForHeight:(double)a0;
+ (double)columnWidthForContainerWidth:(double)a0 numberOfColumns:(unsigned long long)a1 padding:(double)a2;
+ (id)defaultOptionsForCellSizeSubclass:(long long)a0 viewSizeSubclass:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)cornerRadiusForCellSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isSingleCell;
- (unsigned long long)numColumnsForContainerWidth:(double)a0 minimumCameraCellWidth:(double)a1 padding:(double)a2;

@end
