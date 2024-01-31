@class CLKProgressProvider, NSNumber, UIView;
@protocol CDComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {
    UIView<CDComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

+ (double)_imageScaleForTemplate:(id)a0;
+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateRingWithProgressProvider:(id)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;

@end
