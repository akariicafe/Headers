@class NSString;

@interface _NTKCDetailAddButton : UIButton

@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) NSString *disabledReason;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setDisabled:(BOOL)a0 forReason:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateColor;

@end
