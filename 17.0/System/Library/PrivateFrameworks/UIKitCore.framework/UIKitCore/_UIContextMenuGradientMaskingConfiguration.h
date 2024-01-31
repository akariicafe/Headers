@interface _UIContextMenuGradientMaskingConfiguration : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gradientMaskEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gradientMaskLengths;
@property (nonatomic) BOOL embedBackgroundForCompositing;
@property (nonatomic) BOOL backgroundMasksCorners;
@property (copy, nonatomic) id /* block */ platterHairlineColorProvider;
@property (nonatomic) double spacerHeaderFooterHeight;

- (void).cxx_destruct;

@end
