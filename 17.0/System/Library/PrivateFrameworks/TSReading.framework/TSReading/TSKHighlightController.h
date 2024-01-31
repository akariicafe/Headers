@class CALayer, TSUImage, NSString;

@interface TSKHighlightController : NSObject <CALayerDelegate> {
    CALayer *_imageLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overallRect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _canvasTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _layerTransform;
}

@property (retain, nonatomic) TSUImage *image;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) double viewScale;
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) struct CGPath { } *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disconnect;
- (void)reset;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)hide;
- (BOOL)drawRoundedRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buildLayersForPath:(struct CGPath { } *)a0 withImage:(id)a1;
- (void)createLayerWithZOrder:(double)a0 contentsScaleForLayers:(double)a1;
- (void)setCanvasTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 layerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
