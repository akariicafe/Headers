@class UIView;

@interface NTKCDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL ignoresRTLCorrection;
@property (nonatomic) BOOL showsSeparator;

+ (id)titleFont;
+ (id)defaultTextColor;
+ (id)reuseIdentifier;

- (id)init;
- (double)rowHeight;
- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_fontForDetailTextLabel;
- (id)_fontForTextLabel;
- (void)_fontSizeDidChange;
- (BOOL)_visibleAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
