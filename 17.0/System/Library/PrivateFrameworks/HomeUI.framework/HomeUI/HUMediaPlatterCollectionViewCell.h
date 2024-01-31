@class NSString;

@interface HUMediaPlatterCollectionViewCell : HUViewControllerCollectionViewCell <HUQuickControlPresentationTransitionDelegate>

@property (readonly, nonatomic) unsigned long long backgroundDisplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)backgroundCornerRadius;
- (void)prepareForReuse;
- (id)backgroundColor;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)primaryString;
- (id)secondaryLabelFont;
- (id)secondaryString;
- (id)primaryLabelFont;
- (id)prefixString;
- (id)prefixLabelFont;
- (id)baseIconViewConfiguration;
- (id)createBackgroundBlurView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconViewTileFrame;
- (id)prefixLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })prefixLabelTileFrame;
- (id)primaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryLabelTileFrame;
- (BOOL)recognizeDoubleClickGesture;
- (id)secondaryAttributedString;
- (id)secondaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryLabelTileFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tileFrame;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
