@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl {
    NSMutableArray *_buttons;
}

@property (nonatomic) BOOL numberButtonsEnabled;
@property (retain) NSArray *buttons;
@property (nonatomic) double buttonBackgroundAlpha;

- (id)buttons;
- (void)dealloc;
- (void)setButtons:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)buttonTapped:(id)a0;
- (void)buttonUp:(id)a0;
- (void).cxx_destruct;
- (void)buttonLongPressed:(id)a0;
- (void)buttonDown:(id)a0;
- (void)buttonUpOutside:(id)a0;
- (void)buttonCancelled:(id)a0;
- (id)initWithButtons:(id)a0;
- (void)_addButton:(id)a0;
- (void)_layoutGrid;
- (void)buttonLongPressedViaGesture:(id)a0;
- (void)handleCurrentLocaleDidChangeNotification:(id)a0;
- (void)replaceButton:(id)a0 atIndex:(unsigned long long)a1;

@end
