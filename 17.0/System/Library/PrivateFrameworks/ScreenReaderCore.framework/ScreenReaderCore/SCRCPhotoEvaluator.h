@interface SCRCPhotoEvaluator : NSObject

@property (class, readonly) SCRCPhotoEvaluator *sharedInstance;

- (id)evaluateImage:(struct CGImage { } *)a0 forCriteria:(unsigned long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
