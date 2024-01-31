@interface EDAbsoluteAnchor : EDAnchor {
    struct CGPoint { double x; double y; } mPosition;
    struct CGSize { double width; double height; } mSize;
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })position;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGSize { double x0; double x1; })size;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
