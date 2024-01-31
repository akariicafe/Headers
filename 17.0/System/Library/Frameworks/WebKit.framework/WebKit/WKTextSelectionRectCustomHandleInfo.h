@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo {
    struct FloatQuad { struct FloatPoint { float m_x; float m_y; } m_p1; struct FloatPoint { float m_x; float m_y; } m_p2; struct FloatPoint { float m_x; float m_y; } m_p3; struct FloatPoint { float m_x; float m_y; } m_p4; } _quad;
    BOOL _isHorizontal;
}

- (struct CGPoint { double x0; double x1; })topRight;
- (struct CGPoint { double x0; double x1; })topLeft;
- (id).cxx_construct;
- (struct CGPoint { double x0; double x1; })bottomRight;
- (struct CGPoint { double x0; double x1; })bottomLeft;
- (id)initWithFloatQuad:(const struct FloatQuad { struct FloatPoint { float x0; float x1; } x0; struct FloatPoint { float x0; float x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatPoint { float x0; float x1; } x3; } *)a0 isHorizontal:(BOOL)a1;

@end
