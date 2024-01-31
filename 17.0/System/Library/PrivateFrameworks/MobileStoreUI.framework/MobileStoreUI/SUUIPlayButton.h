@class NSString, SUUIPlayButtonImageCache;

@interface SUUIPlayButton : SUUIPlayButtonControl {
    BOOL _showStop;
}

@property (readonly, nonatomic) SUUIPlayButtonImageCache *imageCache;
@property (nonatomic) long long itemIdentifier;
@property (copy, nonatomic) NSString *playItemIdentifier;
@property (nonatomic) BOOL showOnDemand;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) BOOL useLargeButton;
@property (nonatomic, getter=isRadio) BOOL radio;

+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (struct CGSize { double x0; double x1; })buttonSize;
- (void)tintColorDidChange;
- (id)images;
- (void)refresh;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundType:(long long)a0;
- (void)layoutSubviews;
- (id)defaultBackgroundColor;
- (float)buttonCornerRadius;
- (void)_updateEnabledState;
- (id)outerBorderColor;
- (id)playImage;
- (BOOL)showOuterBorder;
- (id)cancelImage;
- (void)playIndicatorDidChange:(BOOL)a0;
- (void)reloadWithItemStatus:(id)a0 animated:(BOOL)a1;

@end
