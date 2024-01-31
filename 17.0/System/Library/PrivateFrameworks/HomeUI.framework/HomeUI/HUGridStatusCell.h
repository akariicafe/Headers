@interface HUGridStatusCell : UICollectionViewCell <HUQuickControlPresentationTransitionDelegate, HUGridCellProtocol>

@property (nonatomic, readonly) unsigned long long backgroundDisplayStyle;
@property (nonatomic) void /* unknown type, empty encoding */ cellContentsHidden;
@property (nonatomic, retain) void /* unknown type, empty encoding */ layoutOptions;
@property (nonatomic, retain) void /* unknown type, empty encoding */ item;

+ (Class)layoutOptionsClass;

- (double)backgroundCornerRadius;
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
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (BOOL)areCellContentsHidden;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
