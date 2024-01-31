@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton> {
    long long _style;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (id)initWithStyle:(long long)a0;
- (void)_handleTap:(id)a0;
- (void).cxx_destruct;
- (long long)style;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)_createOverlayImageWithBackgroundWhite:(double)a0 backgroundAlpha:(double)a1 glyphAlpha:(double)a2;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;

@end
