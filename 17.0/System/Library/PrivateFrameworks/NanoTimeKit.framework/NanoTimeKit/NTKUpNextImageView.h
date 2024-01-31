@class UIColor, CLKImageProvider, NSString, UIImage, UIImageView, CALayer, NTKUpNextBaseCell;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider, CLKMonochromeComplicationView> {
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    UIImageView *_overrideImageView;
    NTKUpNextBaseCell *_parentCell;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (readonly, nonatomic) CLKImageProvider *imageProvider;
@property (readonly, nonatomic) UIImage *overrideImage;
@property (retain, nonatomic) NSString *compositingFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void)_updateColors;
- (void)setContentMode:(long long)a0;
- (void)setOverrideImage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setImageProvider:(id)a0;
- (id)contentsLayer;
- (void)layoutSubviews;
- (BOOL)_hasMultipartImages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsLayerBoundsForLayout:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 parentCell:(id)a1;
- (void)setFullColorImage:(id)a0 tintableImageProvider:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
