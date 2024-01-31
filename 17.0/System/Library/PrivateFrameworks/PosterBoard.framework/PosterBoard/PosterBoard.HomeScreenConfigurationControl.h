@interface PosterBoard.HomeScreenConfigurationControl : UIControl {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ showsSymbolWhenSelected;
    void /* unknown type, empty encoding */ maximumHorizontalTitleOutset;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ symbolImageView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ previewContentView;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
