@class UIFont, NSString, NSArray, UIImageView, UIView, MTVisualStylingProvider;

@interface FCUIOptionsControl : UIControl <UIPointerInteractionDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring> {
    UIView *_backgroundView;
    UIImageView *_glyphView;
    MTVisualStylingProvider *_glyphVisualStylingProvider;
    UIFont *_referenceFont;
    double _referencePointSize;
    double _maxPointSize;
}

@property (nonatomic) long long controlType;
@property (nonatomic, getter=isParentControlHighlighted) BOOL parentControlHighlighted;
@property (nonatomic, getter=isParentControlSelected) BOOL parentControlSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (double)_scaledValueForValue:(double)a0;
- (void)_configureBackgroundViewIfNecessary;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)_needsTextAttributesUpdate;
- (long long)_glyphViewVisualStyleForCurrentState;
- (void)_updateTextAttributes;
- (void)setTintColor:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateTextAttributesIfNecessary;
- (void)_setNeedsTextAttributesUpdate;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setGlyphVisualStylingProvider:(id)a0;
- (void).cxx_destruct;
- (id)_glyphImageNameForCurrentStateWithControlType:(long long)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)_configureGlyphViewIfNecessary;
- (id)initWithReferencePointSize:(double)a0 maximumPointSize:(double)a1;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
