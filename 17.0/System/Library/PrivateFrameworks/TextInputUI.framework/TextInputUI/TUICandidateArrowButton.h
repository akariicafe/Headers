@class TUICandidateBackdropView, NSString, UIView;
@protocol TUICandidateViewStyle;

@interface TUICandidateArrowButton : UIButton

@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) TUICandidateBackdropView *backdropView;
@property (nonatomic) BOOL showsBackground;
@property (copy, nonatomic) NSString *arrowImageName;
@property (nonatomic) struct CGPoint { double x; double y; } arrowImageOffset;
@property (nonatomic) long long arrowDirection;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;
@property (readonly, nonatomic) UIView *contentView;

- (void)updateStyle;
- (void)commonInit;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (double)imageViewAlpha;
- (id)rotatedImageForImage:(id)a0 scale:(double)a1;
- (void)udpateBackgroundColor;

@end
