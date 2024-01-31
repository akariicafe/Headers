@class SUTouchCaptureView, UIImageView;

@interface SUImageViewController : SUViewController {
    SUTouchCaptureView *_backstopView;
    UIImageView *_imageView;
}

- (void)dealloc;
- (id)_imageView;
- (void)loadView;
- (void)_backstopAction:(id)a0;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;

@end
