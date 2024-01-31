@class NSString, MRUTransportControlItem, UIImage, UIView, MRUCAPackageView, MRUVisualStylingProvider;

@interface MRUTransportButton : MPButton <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MRUCAPackageView *packageView;
@property (retain, nonatomic) UIImage *pendingImage;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (retain, nonatomic) MRUTransportControlItem *transportControlItem;
@property (nonatomic) long long pointerStyle;
@property (nonatomic) double cursorScale;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) double packageScale;
@property (nonatomic) BOOL showHighlightCircle;
@property (nonatomic) unsigned long long packageState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAsset:(id)a0 animated:(BOOL)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)updateBackgroundView;
- (void)clearPackage;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPackageGlyphState:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateContentView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateHighlighted;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAsset:(id)a0;
- (id)pointerStyleWithProposedEffect:(id)a0 proposedShape:(id)a1;
- (void)didSelect:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 animated:(BOOL)a2;

@end
