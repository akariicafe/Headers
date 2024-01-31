@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double headerViewHeight;
@property (nonatomic) double cameraViewAspectRatio;
@property (nonatomic) double headerHorizontalInnerMargins;
@property (nonatomic) double cellHeight;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
