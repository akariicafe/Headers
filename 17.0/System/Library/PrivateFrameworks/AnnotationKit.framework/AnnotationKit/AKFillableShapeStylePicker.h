@class NSArray;

@interface AKFillableShapeStylePicker : AKModernToolbarPicker {
    NSArray *_buttons;
}

@property (nonatomic) BOOL showFill;

- (void).cxx_destruct;
- (void)_updateImagesForAnnotationType:(id)a0;
- (void)_styleButtonPressed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 controller:(id)a1;
- (void)revalidateItems:(id)a0;

@end
