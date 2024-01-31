@interface VCPImageFaceDetector : VCPImageAnalyzer

+ (id)faceDetector;
+ (BOOL)isLivePhotoKeyFrameEnabled;

- (int)aggregateTileResults:(id)a0 tileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 landscape:(BOOL)a3 results:(id)a4;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)faceDetection:(struct __CVBuffer { } *)a0 faces:(id)a1 cancel:(id /* block */)a2;
- (BOOL)isDuplicate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)processTile:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;

@end
