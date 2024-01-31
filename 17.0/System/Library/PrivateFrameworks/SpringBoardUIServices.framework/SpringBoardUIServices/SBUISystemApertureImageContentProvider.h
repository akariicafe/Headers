@class UIImage, UIImageView;

@interface SBUISystemApertureImageContentProvider : SBUISystemApertureAspectFittingContentProvider {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemImageName:(id)a0;

@end
