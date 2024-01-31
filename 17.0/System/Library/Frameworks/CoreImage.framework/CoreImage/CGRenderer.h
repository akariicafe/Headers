@class NSString;

@interface CGRenderer : NSObject <CIGVRenderer> {
    struct CGContext { } *context;
}

@property BOOL drawWithSplines;
@property int direction;
@property struct CGSize { double width; double height; } separation;
@property BOOL drawEdgesFirst;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFileURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_drawNodeBadge:(id)a0;
- (struct CGColor { } *)_colorForNodeColor:(int)a0;
- (void)_drawCubicSpline:(id)a0;
- (void)_drawNodeContent:(id)a0;
- (void)_drawPolyline:(id)a0;
- (void)drawEdge:(id)a0 withPath:(id)a1;
- (void)drawNode:(id)a0;
- (void)flushRender;
- (void)hyperlinkEdge:(id)a0 from:(struct CGPoint { double x0; double x1; })a1 to:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)setFileTitle:(id)a0;

@end
