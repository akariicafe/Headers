@interface TNPageRepContainer : TSWPPageRep {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shadowPathRect;
    struct CGPath { } *_shadowPath;
}

- (BOOL)isOpaque;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)masksToBounds;
- (BOOL)directlyManagesLayerContent;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)shouldBeginScribbleAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
