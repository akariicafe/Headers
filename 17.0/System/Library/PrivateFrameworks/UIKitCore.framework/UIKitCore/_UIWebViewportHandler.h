@protocol _UIWebViewportHandlerDelegate;

@interface _UIWebViewportHandler : NSObject {
    BOOL _initialConfigurationHasBeenSentToDelegate;
    struct _UIWebViewportConfiguration { struct CGSize { double width; double height; } size; float initialScale; float minimumScale; float maximumScale; BOOL allowsUserScaling; BOOL allowsShrinkToFit; BOOL avoidsUnsafeArea; } _defaultConfiguration;
    struct _UIWebViewportConfiguration { struct CGSize { double width; double height; } size; float initialScale; float minimumScale; float maximumScale; BOOL allowsUserScaling; BOOL allowsShrinkToFit; BOOL avoidsUnsafeArea; } _configuration;
    struct CGSize { double width; double height; } _viewportArgumentsSize;
    BOOL _widthIsDeviceWidth;
    BOOL _heightIsDeviceHeight;
    BOOL _isInUpdateBlock;
}

@property (nonatomic) id<_UIWebViewportHandlerDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } documentBounds;
@property (readonly, nonatomic) struct CGSize { double width; double height; } availableViewSize;
@property (readonly, nonatomic) float initialScale;
@property (readonly, nonatomic) float minimumScale;
@property (readonly, nonatomic) float maximumScale;
@property (readonly, nonatomic) BOOL allowsUserScaling;
@property (readonly, nonatomic) unsigned int webkitDefinedConfigurationFlags;
@property (readonly, nonatomic, getter=isClassicViewportMode) BOOL classicViewportMode;
@property (readonly, nonatomic) BOOL avoidsUnsafeArea;
@property (readonly, nonatomic) struct _UIWebViewportConfiguration { struct CGSize { double x0; double x1; } x0; float x1; float x2; float x3; BOOL x4; BOOL x5; BOOL x6; } rawViewConfiguration;

- (void)update:(id /* block */)a0;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_resolveViewSizeRelativeLengths;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize { double x0; double x1; })a0 initialScale:(float)a1 minimumScale:(float)a2 maximumScale:(float)a3 allowsUserScaling:(float)a4 allowsShrinkToFit:(float)a5 viewportFit:(id)a6;
- (void)clearWebKitViewportConfigurationFlags;
- (double)integralInitialScale;
- (double)integralScaleForScale:(double)a0 keepingPointFixed:(struct CGPoint { double x0; double x1; } *)a1;
- (float)minimumScaleForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x0; double x1; } x0; float x1; float x2; float x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { double x0; double x1; } x0; float x1; float x2; float x3; BOOL x4; BOOL x5; BOOL x6; } *)a0;
- (void)setAvailableViewSize:(struct CGSize { double x0; double x1; })a0 updateConfigurationSize:(BOOL)a1;
- (BOOL)shouldIgnoreHorizontalScalingConstraints;
- (BOOL)shouldIgnoreScalingConstraints;
- (BOOL)shouldIgnoreVerticalScalingConstraints;
- (float)viewportHeight;
- (float)viewportWidth;

@end
