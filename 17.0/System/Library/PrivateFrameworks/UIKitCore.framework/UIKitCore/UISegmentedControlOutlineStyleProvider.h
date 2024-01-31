@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider

- (double)defaultTextContentPaddingWidth;
- (id)fontColorForSegment:(id)a0 enabled:(BOOL)a1 selected:(BOOL)a2 state:(unsigned long long)a3;
- (id)fontForControlSize:(int)a0 selected:(BOOL)a1;
- (double)defaultHeightForControlSize:(int)a0;
- (double)defaultContentPaddingWidth;
- (BOOL)animateSelectionSliding;
- (BOOL)useSelectionIndicatorStyling;

@end
