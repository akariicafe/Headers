@class NSArray, NSLayoutAnchor;

@interface _NSDistanceLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    NSLayoutAnchor *_minuend;
    NSLayoutAnchor *_subtrahend;
}

@property (readonly) NSArray *_childAnchors;

+ (id)distanceFromAnchor:(id)a0 toAnchor:(id)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)equationDescription;
- (id)initWithMinuend:(id)a0 subtrahend:(id)a1;

@end
