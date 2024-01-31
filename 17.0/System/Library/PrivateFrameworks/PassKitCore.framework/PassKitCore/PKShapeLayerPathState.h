@interface PKShapeLayerPathState : NSObject {
    double _strokeStartT0;
    double _strokeStartT1;
    double _strokeEndT0;
    double _strokeEndT1;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithShapeLayer:(id)a0;
- (id)initWithShapeLayer:(id)a0 reverse:(BOOL)a1;
- (id)initWithStrokeStart:(double)a0 strokeEnd:(double)a1;
- (id)initWithStrokeStartT0:(double)a0 strokeStartT1:(double)a1 strokeEndT0:(double)a2 strokeEndT1:(double)a3;
- (double)progressForShapeLayer:(id)a0;
- (void)setProgress:(double)a0 onShapeLayer:(id)a1;
- (void)setProgress:(double)a0 onShapeLayer:(id)a1 withAnimationHandler:(id /* block */)a2;
- (double)strokeEndAtProgress:(double)a0;
- (double)strokeStartAtProgress:(double)a0;

@end
