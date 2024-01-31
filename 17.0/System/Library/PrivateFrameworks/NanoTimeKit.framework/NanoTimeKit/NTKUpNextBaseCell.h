@class UIView, NSString, REContent, UIImage, CALayer, CLKDevice, UIImageView, NSHashTable, UIColor;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, CLKMonochromeComplicationView> {
    struct CGSize { double width; double height; } _shadowSize;
    UIImageView *_shadowView;
    UIView *_overlayView;
    double _darkeningAmount;
    double _contentBrightness;
    NSHashTable *_layerProviders;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIImage *overrideContentImage;
@property (readonly, nonatomic) REContent *content;
@property (retain, nonatomic) NSString *representedElementIdentifier;
@property (readonly, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIColor *imageColor;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

+ (void)clearLabel:(id)a0;
+ (double)cornerRadiusForDevice:(id)a0;
+ (struct CGSize { double x0; double x1; })suggestedBodyImageSizeForDevice:(id)a0;
+ (Class)suggestedCellClassForContent:(id)a0;
+ (struct CGSize { double x0; double x1; })suggestedHeaderImageSizeForDevice:(id)a0;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithContent:(id)a0;
- (void)_updateColorOverlay;
- (void)addContentsLayerProvider:(id)a0;
- (void)enumerateContentsLayersWithBlock:(id /* block */)a0;
- (void)removeContentsLayerProvider:(id)a0;
- (void)setContentBrightness:(double)a0 animated:(BOOL)a1;
- (void)setContentImage:(id)a0 animated:(BOOL)a1;
- (id)transitionContextInView:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
