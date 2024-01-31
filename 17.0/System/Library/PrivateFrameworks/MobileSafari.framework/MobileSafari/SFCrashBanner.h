@class SFThemeColorEffectView, NSString, UIVisualEffectView, UILabel, UIButton;

@interface SFCrashBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    UIVisualEffectView *_contentEffectView;
    UILabel *_label;
    struct CGSize { double width; double height; } _cachedLabelLayoutSize;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) unsigned long long messageType;
@property (readonly, nonatomic) NSString *bannerText;
@property (readonly, nonatomic) NSString *manuallyWrappedBannerText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_labelLayoutSizeForWidth:(double)a0;
- (BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)a0;
- (void)setBannerText:(id)a0 manuallyWrappedBannerText:(id)a1;
- (void)themeDidChange;

@end
