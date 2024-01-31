@class IKViewElement, IKImageElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (long long)_blurEffectStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_backgroundImageProxy;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)setSpinnerDelay:(double)a0;
- (void)updateWithLoadingTemplate:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
