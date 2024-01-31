@interface WFOverlayTextAction : WFAction

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (id)textAttributes;
- (double)strokeWidth;
- (id)strokeColor;
- (id)textColor;
- (double)offset;
- (id)fontDescriptor;
- (double)rotation;
- (id)font;
- (double)fontSize;
- (long long)textAlignment;
- (id)text;
- (id)paragraphStyle;
- (id)textPosition;
- (double)xPosition;
- (id)parameterKeysIgnoredForParameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (double)boxWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForImage:(id)a0;
- (id)outlinedTextAttributes;
- (void)overlayImage:(id)a0 inContext:(id)a1;
- (BOOL)strokeEnabled;
- (id)strokeWidthPercentage;
- (BOOL)useProportionalSizing;
- (double)yPosition;

@end
