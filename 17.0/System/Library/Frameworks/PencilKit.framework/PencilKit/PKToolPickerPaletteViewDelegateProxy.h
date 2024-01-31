@class NSString, PKToolPicker;

@interface PKToolPickerPaletteViewDelegateProxy : NSObject <PKDrawingPaletteViewDelegate> {
    PKToolPicker *_toolPicker;
}

@property (readonly, nonatomic) PKToolPicker *toolPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithToolPicker:(id)a0;
- (void)paletteView:(id)a0 didChangeColor:(id)a1;
- (void)paletteView:(id)a0 didSelectTool:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)paletteView:(id)a0 shouldChangeSelectedToolColor:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paletteViewColorPickerPopoverPresentationSourceRect:(id)a0;
- (id)paletteViewColorPickerPopoverPresentationSourceView:(id)a0;
- (id)paletteViewCurrentFirstResponder:(id)a0;
- (id)paletteViewCurrentSelectionColor:(id)a0;
- (void)paletteViewDidChangePosition:(id)a0 fromPosition:(long long)a1 toPosition:(long long)a2;
- (void)paletteViewDidChangeScaleFactor:(id)a0;
- (void)paletteViewDidChangeTraitCollection:(id)a0;
- (void)paletteViewDidToggleRuler:(id)a0;
- (void)paletteViewFirstResponderDidUpdate:(id)a0;
- (void)paletteViewToolsDidChange:(id)a0;
- (id)paletteViewUndoManager:(id)a0;
- (BOOL)shouldHandlePencilInteractionWhenNotVisible:(id)a0;
- (BOOL)toggleLassoToolEditingViewColorPickerForPaletteView:(id)a0;

@end
