@class ANSTISPAlgorithm;

@interface ABPKPersonIDTracker : NSObject {
    ANSTISPAlgorithm *_anstAlgorithm;
}

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rotateBoundingBoxToPortrait:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withImageRes:(struct CGSize { double x0; double x1; })a1;
- (int)runWithInput:(struct __CVBuffer { } *)a0 atTimeStamp:(double)a1 andOutput:(id)a2;

@end
