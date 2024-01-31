@class NSString, PXPhotosLayoutAnimationContext;

@interface PXPhotosLayoutAnimationHelper : NSObject <PXGAnimationDelegate>

@property (readonly, nonatomic) long long animationCurve;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) BOOL wantsFromSnapshot;
@property (readonly, nonatomic) BOOL wantsToSnapshot;
@property (readonly, nonatomic) BOOL wantsPresentationAdjustment;
@property (readonly, nonatomic) BOOL wantsDoubleSidedAnimations;
@property (readonly, nonatomic) BOOL wantsAnimationWithSpriteTransfer;
@property (readonly, nonatomic) unsigned int highFrameRateReason;
@property (readonly, nonatomic) PXPhotosLayoutAnimationContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(inout struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (id)initWithContext:(id)a0;
- (void)animation:(id)a0 prepareWithRootLayout:(id)a1 viewportShift:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(inout struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;

@end
