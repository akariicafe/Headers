@class UIImage, UIImageView;

@interface _SBAlertItemHeaderViewController : UIViewController {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIImage *image;

- (void)loadView;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_expectedSize;
- (double)_bottomMarginOffset;
- (double)_topMarginOffset;

@end
