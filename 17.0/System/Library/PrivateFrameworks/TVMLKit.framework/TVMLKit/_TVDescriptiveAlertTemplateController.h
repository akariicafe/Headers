@class UIColor, NSArray, IKViewElement, IKImageElement, UIView;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {
    IKViewElement *_templateElement;
    NSArray *_templateSubviews;
    NSArray *_templateSubcontrollers;
    UIView *_preferredFocusView;
    UIColor *_backgroundColor;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
}

- (void)loadView;
- (long long)_blurEffectStyle;
- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)_normalizeButtonsInViews:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
