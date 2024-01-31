@class NSObject, NSString, CABasicAnimation, NSCondition, CAShapeLayer, NSMutableArray, NSXMLParser, UIBezierPath, NSNumber, UIColor;
@protocol OS_os_log;

@interface BKUICurvesView : UIView <NSXMLParserDelegate, CAAnimationDelegate> {
    NSMutableArray *_pathLayers;
    UIColor *_color;
    unsigned long long _currentLayer;
    unsigned long long _preEstimateLayer;
    float _progress;
    BOOL _estimateFailed;
    BOOL _estimating;
    CABasicAnimation *_lastAnimation;
    double _lastRatio;
    struct CGSize { double width; double height; } _lastFrameSize;
    NSCondition *_initCondition;
    BOOL _inited;
    NSXMLParser *_parser;
    UIBezierPath *_wholePath;
    NSMutableArray *_paths;
    CAShapeLayer *_fingerLayer;
    NSObject<OS_os_log> *bkui_curves_view_log;
}

@property (nonatomic) struct CGSize { double width; double height; } sublayerSize;
@property (retain) NSNumber *speed;
@property float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void).cxx_destruct;
- (void)_resetEstimate:(id)a0;
- (void)_addEstimateWatchDog;
- (void)_animateEstimateFailure;
- (void)_animateFromLayer:(unsigned long long)a0 toLayer:(unsigned long long)a1 withColor:(id)a2;
- (unsigned long long)_animateFromLayer:(unsigned long long)a0 toProgress:(float)a1 withColor:(id)a2;
- (void)_checkEstimateFailedAfterAnimation:(id)a0;
- (struct CGPoint { double x0; double x1; })_getPoint:(id)a0;
- (void)_path:(id)a0 drawCurveToPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint1:(struct CGPoint { double x0; double x1; })a2 controlPoint2:(struct CGPoint { double x0; double x1; })a3;
- (void)_path:(id)a0 drawLineToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_removeEstimateWatchDog;
- (void)_resetLayers;
- (void)_startAnimation:(unsigned long long)a0 withColor:(id)a1 isLast:(BOOL)a2;
- (void)_waitForInit;
- (void)estimateFailed;
- (void)estimateProgress:(float)a0;
- (void)loadDataFromXML:(id)a0 name:(id)a1 color:(id)a2;
- (struct CGPath { } *)newQuartzPath:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a1;
- (void)setSublayersSize:(struct CGSize { double x0; double x1; })a0;

@end
