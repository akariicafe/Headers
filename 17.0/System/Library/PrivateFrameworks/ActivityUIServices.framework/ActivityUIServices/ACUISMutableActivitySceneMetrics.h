@class ACUISEdgeInsets;

@interface ACUISMutableActivitySceneMetrics : ACUISActivitySceneMetrics

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) ACUISEdgeInsets *edgeInsets;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
