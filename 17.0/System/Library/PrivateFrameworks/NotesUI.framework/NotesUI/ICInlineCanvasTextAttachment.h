@class NSArray;

@interface ICInlineCanvasTextAttachment : ICBaseTextAttachment

@property (readonly, nonatomic) NSArray *inlineViews;
@property (readonly, nonatomic) NSArray *attachmentViews;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (void)setViewSelected:(BOOL)a0 inWindow:(id)a1;
- (void)updatePaletteVisibility;
- (void)updatePaletteVisibilityToVisible:(BOOL)a0;

@end
