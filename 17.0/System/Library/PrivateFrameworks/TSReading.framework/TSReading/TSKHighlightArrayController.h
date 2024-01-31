@class NSMutableArray;
@protocol TSKHighlightArrayControllerProtocol;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol> {
    NSMutableArray *_controllers;
    double _zOrder;
    id<TSKHighlightArrayControllerProtocol> _delegate;
    BOOL _creatingLayers;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _canvasTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _layerTransform;
}

@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) double viewScale;
@property (readonly, nonatomic) NSMutableArray *layers;
@property (nonatomic) BOOL shouldPulsate;
@property (nonatomic) BOOL pulsating;
@property (nonatomic) BOOL autohide;

- (void)disconnect;
- (void)reset;
- (void)dealloc;
- (void)startAnimating;
- (void)stop;
- (id)buildHighlightsForSearchReferences:(id)a0 contentsScaleForLayers:(double)a1;
- (id)initWithZOrder:(double)a0 delegate:(id)a1;
- (void)pulseAnimationDidStopForPulse:(id)a0;
- (void)setCanvasTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 layerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
