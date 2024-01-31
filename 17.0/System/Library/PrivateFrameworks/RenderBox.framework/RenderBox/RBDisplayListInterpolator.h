@class NSDictionary;
@protocol RBDisplayListContents, _RBDisplayListContents;

@interface RBDisplayListInterpolator : NSObject <NSCopying> {
    struct refcounted_ptr<const RB::Interpolator::Object> { struct Object *_p; } _interp;
    struct objc_ptr<id<_RBDisplayListContents>> { id<_RBDisplayListContents> _p; } _from;
    struct objc_ptr<id<_RBDisplayListContents>> { id<_RBDisplayListContents> _p; } _to;
    struct objc_ptr<NSDictionary *> { NSDictionary *_p; } _options;
}

@property (retain, nonatomic) id<RBDisplayListContents> from;
@property (readonly, nonatomic) id<RBDisplayListContents> to;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic, getter=isIdentity) BOOL identity;
@property (readonly, nonatomic) BOOL onlyFades;
@property (readonly, nonatomic) double activeDuration;

+ (id)interpolatorWithFrom:(id)a0 to:(id)a1 options:(id)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)drawInState:(struct _RBDrawingState { } *)a0 by:(float)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectWithProgress:(float)a0;
- (id)contentsWithProgress:(float)a0;
- (double)maxAbsoluteVelocityWithProgress:(float)a0;
- (id)initWithFrom:(id)a0 to:(id)a1 options:(id)a2;

@end
