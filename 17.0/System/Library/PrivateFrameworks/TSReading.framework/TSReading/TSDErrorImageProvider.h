@interface TSDErrorImageProvider : TSDImageProvider

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (id)retain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isValid;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isError;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)p_iconPDFDocument;

@end
