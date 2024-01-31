@class NSString, PKExpressGlyphView;
@protocol PKExpressBannerTrailingViewDelegate;

@interface PKExpressBannerTrailingView : UIView <PKExpressGlyphViewDelegate, SBUISystemApertureAccessoryView> {
    int _state;
    PKExpressGlyphView *_glyphView;
    id<PKExpressBannerTrailingViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)expressGlyphView:(id)a0 revealingCheckmarkAnimated:(BOOL)a1;

@end
