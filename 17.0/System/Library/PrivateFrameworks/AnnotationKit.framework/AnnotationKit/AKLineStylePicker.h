@interface AKLineStylePicker : AKModernToolbarPicker

@property (readonly) unsigned long long lineType;
@property (readonly) long long lineStyle;

- (id)_buttonImagesForType:(unsigned long long)a0;
- (long long)_shapeTagForType:(unsigned long long)a0;
- (void)_styleButtonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineType:(unsigned long long)a1 controller:(id)a2;
- (void)revalidateItems:(id)a0;

@end
