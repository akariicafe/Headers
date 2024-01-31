@class UIColor, UIVibrancyEffect, UIBlurEffect, NSString;

@interface UISegmentedControlDefaultStyleProvider : NSObject <UISegmentedControlStyleProvider>

@property (readonly, nonatomic) BOOL useGeneratedImages;
@property (readonly, nonatomic) BOOL useSelectionIndicatorStyling;
@property (readonly, nonatomic) BOOL animateSlidingSelectionByDefault;
@property (readonly, nonatomic) BOOL useTVStyleFocusSelection;
@property (readonly, nonatomic) double defaultContentPaddingWidth;
@property (readonly, nonatomic) double defaultTextContentPaddingWidth;
@property (readonly, nonatomic) double segmentSelectionScaleFactor;
@property (readonly, nonatomic) double segmentHidingFinalScaleFactor;
@property (readonly, nonatomic) BOOL limitInternalLayoutAndInteractionToDefaultHeight;
@property (readonly, nonatomic) BOOL hasTransparentBackgroundByDefault;
@property (readonly, nonatomic) UIColor *defaultBackgroundTintColor;
@property (readonly, nonatomic) BOOL supportsDynamicTypeByDefault;
@property (readonly, nonatomic) BOOL supportsAXPopover;
@property (readonly, nonatomic) double defaultInterSegmentSpacing;
@property (readonly, nonatomic) UIVibrancyEffect *selectedSegmentDefaultVibrancyEffect;
@property (readonly, nonatomic) UIBlurEffect *selectedSegmentDefaultBlurEffect;
@property (readonly, nonatomic) UIVibrancyEffect *selectedSegmentContentDefaultVibrancyEffect;
@property (readonly, nonatomic) UIVibrancyEffect *unselectedSegmentContentDefaultVibrancyEffect;
@property (readonly, nonatomic) BOOL hasShadowWithSelectedSegmentEffect;
@property (readonly, nonatomic) double mostlyInsideMargin;
@property (readonly, nonatomic) BOOL usesContinuousCurveCorners;
@property (readonly, nonatomic) BOOL animateHighlightingSelectionByDefault;
@property (readonly, nonatomic) UIVibrancyEffect *highlightedSegmentDefaultVibrancyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createBackdropView;
- (void)touchesEnded;
- (double)defaultHeightForControlSize:(int)a0 traitCollection:(id)a1;
- (BOOL)maskToCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsForControlSize:(int)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 traitCollection:(id)a2;
- (id)fontColorForSegment:(id)a0 enabled:(BOOL)a1 selected:(BOOL)a2 state:(unsigned long long)a3;
- (double)selectionIndicatorInsetForControlSize:(int)a0;
- (id)createSelectedSegmentEffectShadowView;
- (void)touchesBegan;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsForControlSize:(int)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)fontForControlSize:(int)a0 selected:(BOOL)a1;
- (double)dividerWidthForControlSize:(int)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForControlSize:(int)a0 position:(unsigned int)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 traitCollection:(id)a3;
- (double)cornerRadiusForControlSize:(int)a0;
- (id)createSegmentBezelView;

@end
