@class NSString, FigCaptionLayerPrivate;

@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {
    FigCaptionLayerPrivate *_priv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setVideoRelativeToViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFontName:(const char *)a0;
- (void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins { struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x0; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x1; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x2; struct FigGeometryDimension { double x0; unsigned int x1; unsigned int x2; } x3; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)a0 data:(id)a1;
- (void)resetCaptions;
- (void)setOptions:(id)a0 forKeyPath:(id)a1;
- (void)setSeparatedValue:(BOOL)a0;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { } *)a0;

@end
