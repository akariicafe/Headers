@class NSArray, UIStackView;

@interface MFSearchProgressView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *characterLabels;
@property (nonatomic, getter=isAnimating) BOOL animating;

+ (id)log;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)_endCharacterAnimation;
- (id)_newProgressLabelWithText:(id)a0;
- (id)_searchingFont;
- (void)_setupLabels;
- (void)_startCharacterAnimation;
- (void)setAnimating:(BOOL)a0 fade:(BOOL)a1;

@end
