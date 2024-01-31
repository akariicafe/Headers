@interface PXStoryConcreteSaliencyArea : NSObject <PXStorySaliencyArea>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) float confidence;

- (id)init;
- (id)initWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(float)a1;

@end
