@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {
    struct { unsigned char connectedFrom : 1; unsigned char connectedTo : 1; } mInvalidFlags;
}

@property (retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property (retain, nonatomic) TSDDrawableInfo *connectedTo;

- (void)dealloc;
- (void)didCopy;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)copyWithContext:(id)a0;
- (Class)repClass;
- (BOOL)canAnchor;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutFullTransform;
- (id)computeLayoutInfoGeometry;
- (void)computeLayoutInfoGeometry:(id *)a0 andPathSource:(id *)a1;
- (void)performBlockWithTemporaryLayout:(id /* block */)a0;
- (id)presetKind;
- (void)willCopyWithOtherDrawables:(id)a0;

@end
