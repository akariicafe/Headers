@class NSString, NSMutableArray, PKGlyphView;
@protocol PKExpressGlyphViewDelegate;

@interface PKExpressGlyphView : UIView <PKGlyphViewDelegate> {
    int _state;
    NSMutableArray *_completions;
    double _maximumLength;
    PKGlyphView *_glyphView;
    id<PKExpressGlyphViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)glyphView:(id)a0 revealingCheckmark:(BOOL)a1;

@end
