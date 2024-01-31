@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo>

@property (readonly, nonatomic) struct CGSize { double width; double height; } _gradientImageSize;

- (id)initWithGradientImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })tileSystemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;

@end
