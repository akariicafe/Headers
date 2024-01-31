@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (void)update;
- (void)removeFromSuperlayer;
- (id)annotation;
- (id)UUID;
- (void)_updateNoteLayer;

@end
