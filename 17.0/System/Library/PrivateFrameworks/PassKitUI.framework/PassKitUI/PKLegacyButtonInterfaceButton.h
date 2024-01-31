@class NSString, UIColor, UIImage;

@interface PKLegacyButtonInterfaceButton : UIButton <PKLegacyButtonInterface> {
    BOOL _showSpinner;
    UIColor *_overrideBackgroundColor;
    UIColor *_overrideForegroundColor;
    UIImage *_image;
}

@property (nonatomic) BOOL showSpinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setConfigurationUpdateHandler:(id /* block */)a0;
- (void)updateWithImage:(id)a0;
- (void)updateBackgroundColorWithColor:(id)a0;
- (void)updateActivityIndicatorColorWithColor:(id)a0;
- (void)updateTitleColorWithColor:(id)a0;

@end
