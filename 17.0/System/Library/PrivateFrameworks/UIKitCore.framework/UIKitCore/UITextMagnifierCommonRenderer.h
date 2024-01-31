@class NSDictionary, CALayer;

@interface UITextMagnifierCommonRenderer : UIView {
    BOOL m_loaded;
    NSDictionary *m_images;
    NSDictionary *m_offsets;
    CALayer *m_back;
    CALayer *m_mask;
    CALayer *m_content;
    CALayer *m_front;
    BOOL _isRegisteredForGeometryChanges;
}

- (void)update;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (id)backgroundColourIfNecessary;
- (void)loadImages;
- (id)magnifier;
- (void)performOperations:(id /* block */)a0;
- (id)visualsForMagnifier;

@end
