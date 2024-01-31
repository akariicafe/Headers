@class CALayer, NSString, UIFontDescriptor, CLKDevice, NTKComplicationVariant;
@protocol CLKMonochromeFilterProvider;

@interface NTKComplicationPlaceholderView : UIView <CLKFullColorImageView> {
    CLKDevice *_device;
    NSString *_complicationAppIdentifier;
    NTKComplicationVariant *_complicationVariant;
    CALayer *_strokesLayer;
}

@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLayers;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_circleDiameter;
- (id)_createCircularLayer;
- (id)_createCircularLayersWithDiameter:(double)a0;
- (id)_createDownloadMaskLayer;
- (id)_createDownloadProgressMaskWithDiameter:(double)a0 progress:(double)a1 contained:(BOOL)a2;
- (id)_createRectangularLayer;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
