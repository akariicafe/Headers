@interface CHDAbsoluteSizeAnchor : CHDAnchor {
    struct CGPoint { double x; double y; } mFrom;
    struct CGSize { double width; double height; } mSize;
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })from;

@end
