@interface CMDiagramListMapper : CMDiagramShapeMapper {
    float mMaxLineCount;
}

- (struct CGSize { double x0; double x1; })textSize;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapChildrenAt:(id)a0 withState:(id)a1;
- (void)mapListItemAt:(id)a0 index:(unsigned long long)a1 withState:(id)a2;
- (void)setDefaultFonSize;
- (float)setFonSizeForChildNode:(id)a0 atIndex:(unsigned long long)a1 level:(int)a2;
- (struct CGSize { double x0; double x1; })sizeForNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)a0;

@end
