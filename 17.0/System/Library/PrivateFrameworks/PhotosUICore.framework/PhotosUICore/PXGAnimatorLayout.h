@class PXGLayout, PXGAnimator;

@interface PXGAnimatorLayout : NSObject

@property (readonly, weak, nonatomic) PXGAnimator *animator;
@property (retain, nonatomic) PXGLayout *inputLayout;
@property (nonatomic) struct PXGCameraConfiguration { struct { void /* unknown type, empty encoding */ columns[4]; } viewMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } billboardMatrix; void /* unknown type, empty encoding */ renderOrigin; } cameraConfiguration;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)removeAllFences;
- (id)init;
- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGSize { double x0; double x1; })referenceSize;
- (id)rootLayout;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)a0;
- (id)leafSublayoutForSpriteIndex:(unsigned int)a0;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithAnimator:(id)a0;
- (unsigned int)numberOfSprites;
- (id)fences;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 fromLayout:(id)a1;

@end
