@class UIImageView, UIImage, NSArray;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *imageViewConstraints;

+ (id)_imageViewWithImage:(id)a0;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;

@end
