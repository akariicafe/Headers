@interface ADNormals : NSObject

+ (long long)normalsFromDepth:(struct __CVBuffer { } *)a0 focalLength:(float)a1 principalPoint:(struct CGPoint { double x0; double x1; })a2 normalsOutput:(struct __CVBuffer { } *)a3 withHelperBuffer:(id)a4;
+ (long long)normalsFromDepth:(struct __CVBuffer { } *)a0 focalLength:(float)a1 principalPoint:(struct CGPoint { double x0; double x1; })a2 normalsOutput:(struct __CVBuffer { } *)a3;

@end
