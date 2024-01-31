@class UIView, NSString, CAMSlashView, UIImageView, NSNumberFormatter, CAMSlashMaskView, UIImageSymbolConfiguration, UILabel;
@protocol CAMControlStatusIndicatorDelegate;

@interface CAMControlStatusIndicator : UIControl <CAMControlStatusBarControl>

@property (class, readonly, nonatomic) NSNumberFormatter *decimalFormatter;
@property (class, readonly, nonatomic) NSNumberFormatter *integerFormatter;

@property (retain, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_outlineView;
@property (readonly, nonatomic) UILabel *_valueLabel;
@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (readonly, nonatomic) UIView *_slashMaskContainer;
@property (nonatomic, setter=_setValueLabelSize:) struct CGSize { double width; double height; } _valueLabelSize;
@property (nonatomic, setter=_setNeedsUpdateValueText:) BOOL _needsUpdateValueText;
@property (readonly, nonatomic) UIView *slashContainerView;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } imageOffset;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolColorConfiguration;
@property (weak, nonatomic) id<CAMControlStatusIndicatorDelegate> delegate;
@property (readonly, nonatomic) BOOL canShowValue;
@property (nonatomic, getter=isShowingValue) BOOL showingValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long orientation;

+ (id)_createStretchableCircleImageFilled:(BOOL)a0;
+ (id)_filledOutlineImage;
+ (id)_outlineImage;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)updateImage;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUseOutline;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)layoutSubviews;
- (void)_updateValueText;
- (id)valueText;
- (double)_additionalWidthForValue;
- (void)_updateImageOrientationAnimated:(BOOL)a0;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)_updateValueLabelVisibilityAnimated:(BOOL)a0;
- (unsigned long long)customPointSizeForImageSymbol;
- (id)imageForCurrentState;
- (id)imageNameForAXHUD;
- (void)setNeedsUpdateValueText;
- (void)setShowingValue:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)supportsOrientations;

@end
