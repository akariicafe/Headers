@class NSString, CALayer;

@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer, CALayerDelegate> {
    CALayer *_selectionLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsDisplay;
- (id)init;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layoutSublayers;
- (void)setSelectionNeedsDisplay;

@end
