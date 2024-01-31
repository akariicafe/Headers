@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue

@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (nonatomic) BOOL showingTouch;
@property (nonatomic) BOOL backgroundContainer;
@property (nonatomic) BOOL showingCursor;

- (id)_fillColor:(BOOL)a0;
- (id)_ultralightFillColorForOverlayFilter:(BOOL)a0 active:(BOOL)a1;
- (id)_strokeColor:(BOOL)a0;
- (void)setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1 updateView:(BOOL)a2;
- (id)_automaticFillColorForActive:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 active:(BOOL)a1;
- (void)layoutSubviews;

@end
