@interface SUPlainTextCellConfiguration : SUItemCellConfiguration

+ (double)rowHeightForContext:(id)a0 representedObject:(id)a1;

- (id)init;
- (id)colorForLabelAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (BOOL)getShadowColor:(id *)a0 offset:(struct CGSize { double x0; double x1; } *)a1 forLabelAtIndex:(unsigned long long)a2 withModifiers:(unsigned long long)a3;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)a0;

@end
