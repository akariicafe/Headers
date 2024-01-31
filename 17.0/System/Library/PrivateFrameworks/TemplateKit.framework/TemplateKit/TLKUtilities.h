@interface TLKUtilities : NSObject

+ (BOOL)isHiddenView:(id)a0;
+ (BOOL)isLargePhone;
+ (BOOL)isIpad;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (BOOL)isSiri;
+ (void)dispatchAsync:(id /* block */)a0;
+ (BOOL)deviceSupportsRotation;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (double)appIconCornerRadiusRatio;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (double)standardRoundedCornerRadiusRatio;
+ (BOOL)isPhone;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (BOOL)isMacOS;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (double)onePixelForCurrentScreenResolution;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (double)standardTableCellContentInset;

@end
