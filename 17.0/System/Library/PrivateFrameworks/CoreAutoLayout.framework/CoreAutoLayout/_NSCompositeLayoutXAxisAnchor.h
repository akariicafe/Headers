@class NSArray, NSLayoutXAxisAnchor, NSLayoutDimension;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor> {
    NSLayoutXAxisAnchor *_xAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (long long)_directionAbstraction;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)equationDescription;
- (id)initWithAnchor:(id)a0 plusDimension:(id)a1 times:(double)a2 plus:(double)a3;

@end
