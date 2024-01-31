@class UILabel, UIImageView, UIColor;

@interface CAMZoomFactorLabel : UIView

@property (readonly, nonatomic) UILabel *_label;
@property (retain, nonatomic) UIImageView *_minimizedGlyph;
@property (nonatomic) double zoomFactor;
@property (nonatomic) BOOL showZoomFactorSymbol;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL useLeadingZero;
@property (nonatomic) BOOL preferDefaultSizing;
@property (nonatomic) BOOL minimized;

+ (id)_minimizedImageWithScale:(double)a0;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)_updateMinimizedGlyph;
- (void)layoutSubviews;
- (void)_updateLabelText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_labelInsets;

@end
