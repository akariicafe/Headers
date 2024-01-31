@class UIColor, UIStackView, NSNumberFormatter, NSMutableArray;
@protocol PKNumberPadInputViewDelegate;

@interface PKNumberPadInputView : UIInputView {
    unsigned char _batchedUpdateCount;
    BOOL _needsReload;
    BOOL _needsUpdate;
    NSNumberFormatter *_formatter;
    id<PKNumberPadInputViewDelegate> _delegate;
    UIStackView *_verticalStackView;
    NSMutableArray *_buttons;
}

@property (nonatomic) BOOL showsDecimalPointButton;
@property (copy, nonatomic) UIColor *numberPadColor;
@property (copy, nonatomic) UIColor *textColor;

+ (struct CGSize { double x0; double x1; })defaultSizeForInterfaceOrientation:(long long)a0;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)_updateButtons;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_reloadSubviews;
- (id)_createBorderedButtonForButtonValue:(unsigned long long)a0 withBorder:(unsigned long long)a1 primaryAction:(id)a2;
- (void)_numericKeyPressed:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 configurator:(id /* block */)a2;

@end
