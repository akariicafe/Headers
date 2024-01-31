@class UIStackView, UIView, PKPaletteToolPickerView, NSString, PKDrawingPaletteInputAssistantView, NSMutableDictionary, PKPaletteColorPickerContainerView, PKPaletteToolPickerContainerView, PKPaletteColorPickerView, NSLayoutConstraint;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {
    UIView *_lassoToolEditingViewForNilIdentifier;
    NSMutableDictionary *_lassoToolEditingViewForIdentifierTable;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView;
@property (retain, nonatomic) PKPaletteColorPickerContainerView *colorPickerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactColorPickerContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *compactColorPickerContainerViewHeightConstraint;
@property (retain, nonatomic) UIView *lassoToolEditingContainerView;
@property (retain, nonatomic) NSLayoutConstraint *lassoToolEditingContainerViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *lassoToolEditingContainerViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *lassoToolEditingContainerViewCompactWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *lassoToolEditingContainerViewCompactHeightConstraint;
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic) BOOL wantsColorPickerContainerViewInHierarchy;
@property (copy, nonatomic) NSString *lassoToolEditingViewIdentifier;
@property (readonly, nonatomic) UIView *lassoToolEditingView;
@property (nonatomic, getter=isLassoToolEditingViewVisible) BOOL lassoToolEditingViewVisible;
@property (readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView;
@property (nonatomic) long long contextEditingMode;
@property (nonatomic) BOOL isSmallestSupportedCompactWidth;
@property (nonatomic, getter=isInputAssistantViewVisible) BOOL inputAssistantViewVisible;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double scalingFactor;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateUI;
- (BOOL)_useCompactSize;
- (double)_compactToolsContainerWidth;
- (BOOL)_hasColorPickerContainerView;
- (double)_stackViewSpacing;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)a0;

@end
