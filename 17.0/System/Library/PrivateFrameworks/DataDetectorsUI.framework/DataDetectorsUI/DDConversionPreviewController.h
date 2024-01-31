@class NSString, UIView;

@interface DDConversionPreviewController : UIViewController {
    UIView *_mainView;
    NSString *_title;
    NSString *_subtitle;
    struct CGSize { double width; double height; } _naturalTextSize;
    BOOL _finance;
}

- (double)preferredWidth;
- (id)view;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 finance:(BOOL)a2;

@end
