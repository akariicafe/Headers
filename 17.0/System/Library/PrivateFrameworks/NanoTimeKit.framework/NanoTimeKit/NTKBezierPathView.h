@class NTKBezierPathPointModel, UIColor, UIBezierPath, NSString, NTKPromise;

@interface NTKBezierPathView : UIView <CAAnimationDelegate> {
    UIBezierPath *_animateToPath;
    NTKPromise *_pointModel;
}

@property (retain, nonatomic) UIBezierPath *path;
@property (readonly, nonatomic) NTKBezierPathPointModel *pointModel;
@property (retain, nonatomic) UIColor *pathColor;
@property (copy, nonatomic) NSString *lineCap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (id)_shapeLayer;
- (void)animateToPath:(id)a0 duration:(double)a1 curve:(long long)a2;
- (struct CGPoint { double x0; double x1; })pointOnPathForHorizontalPercentage:(double)a0;

@end
