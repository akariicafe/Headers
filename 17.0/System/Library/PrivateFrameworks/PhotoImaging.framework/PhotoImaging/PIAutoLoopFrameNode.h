@interface PIAutoLoopFrameNode : NURenderNode

- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_processImage:(id)a0 cleanRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transform:(id)a3 geometry:(id)a4;
- (struct { long long x0; long long x1; })videoScale;

@end
