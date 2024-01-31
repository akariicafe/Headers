@class CKGradientView, UIView, CKBalloonImageView;
@protocol CKGradientReferenceView;

@interface CKColoredBalloonView : CKBalloonView

@property (retain, nonatomic) CKBalloonImageView *mask;
@property (retain, nonatomic) CKGradientView *gradientView;
@property (retain, nonatomic) CKBalloonImageView *effectViewMask;
@property (nonatomic) BOOL wantsGradient;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly, nonatomic) BOOL hasBackground;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientOverrideFrame;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForDisplay;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)setColor:(char)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)clearFilters;
- (id)overlayColor;
- (struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })balloonDescriptor;
- (void)configureForComposition:(id)a0;
- (void)configureForMessagePart:(id)a0;
- (BOOL)needsGroupOpacity;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t { char x0; char x1; char x2; char x3; unsigned long long x4; char x5; char x6; long long x7; long long x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })a0;
- (void)setCanUseOpaqueMask:(BOOL)a0;
- (void)setEffectViewMaskImage:(id)a0;
- (void)setHasTail:(BOOL)a0;
- (void)updateWantsGradient;

@end
