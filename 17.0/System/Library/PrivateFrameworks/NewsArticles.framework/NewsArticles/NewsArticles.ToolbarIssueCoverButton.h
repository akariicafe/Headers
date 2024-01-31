@interface NewsArticles.ToolbarIssueCoverButton : UIButton {
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ callToActionLabel;
    void /* unknown type, empty encoding */ coverDateLabel;
    void /* unknown type, empty encoding */ highlightView;
    void /* unknown type, empty encoding */ highlightColor;
}

@property (nonatomic) BOOL highlighted;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;

@end
