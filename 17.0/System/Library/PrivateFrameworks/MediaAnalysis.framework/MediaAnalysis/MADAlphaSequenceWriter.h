@interface MADAlphaSequenceWriter : NSObject

+ (id)transcodeSequenceData:(id)a0 maxDimension:(unsigned long long)a1 outputWidth:(unsigned long long *)a2 outputHeight:(unsigned long long *)a3;
+ (id)writerWithUniformTypeIdentifier:(id)a0 frameCount:(unsigned long long)a1 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)finishWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
