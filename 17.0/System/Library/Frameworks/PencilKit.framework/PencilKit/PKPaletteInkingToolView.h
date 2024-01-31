@class PKToolConfiguration, NSString, UIImage, PKInk, PKPaletteAttributeViewController, UIImageView, NSLayoutConstraint, UILabel;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteInkingToolView : PKPaletteToolView <PKInkAttributesPickerDelegate, PKPaletteInkingTool> {
    PKPaletteAttributeViewController *_attributeViewController;
}

@property (retain, nonatomic) PKInk *ink;
@property (retain, nonatomic) UIImageView *colorIndicatorImageView;
@property (retain, nonatomic) UIImage *colorIndicatorImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorImageLeft;
@property (retain, nonatomic) UIImageView *colorIndicatorContourImageView;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageUp;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageRight;
@property (retain, nonatomic) UIImage *colorIndicatorContourImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorImageView;
@property (retain, nonatomic) UIImage *toolTipImageUp;
@property (retain, nonatomic) UIImage *toolTipImageRight;
@property (retain, nonatomic) UIImage *toolTipImageLeft;
@property (retain, nonatomic) UIImageView *tipIndicatorContourImageView;
@property (retain, nonatomic) UIImage *toolTipContourImageUp;
@property (retain, nonatomic) UIImage *toolTipContourImageRight;
@property (retain, nonatomic) UIImage *toolTipContourImageLeft;
@property (retain, nonatomic) UILabel *opacityLabel;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelRightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *opacityLabelCenterYConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setInkColor:(id)a0;
- (void)setScalingFactor:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_colorIndicatorImageViewFrame;
- (unsigned long long)_displayModeForAttributeViewController;
- (id)_opacityLabelFont;
- (id)_opacityLabelTextColor;
- (void)_reloadToolImage;
- (void)_setToolProperties:(id)a0 toolIdentifier:(id)a1;
- (BOOL)_shouldHaveAttributeViewController;
- (id)_toolColorIndicatorContourImageForCurrentEdgeLocation;
- (id)_toolColorIndicatorImageForCurrentEdgeLocation;
- (id)_toolTipContourImageForCurrentEdgeLocation;
- (id)_toolTipImageForCurrentEdgeLocation;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateOpacityLabel;
- (void)_updateToolColorBandAndTipImageViews;
- (id)attributeViewController;
- (id)initWithToolIdentifier:(id)a0 variant:(id)a1 configuration:(id)a2;
- (id)initWithToolIdentifier:(id)a0 variant:(id)a1 configuration:(id)a2 toolProperties:(id)a3;
- (void)inkAttributesPickerDidChangeInkOpacity:(id)a0;
- (void)inkAttributesPickerDidChangeInkThickness:(id)a0;
- (void)setEdgeLocation:(unsigned long long)a0;
- (void)setInkWeight:(double)a0;
- (void)setToolProperties:(id)a0;
- (id)toolProperties;

@end
