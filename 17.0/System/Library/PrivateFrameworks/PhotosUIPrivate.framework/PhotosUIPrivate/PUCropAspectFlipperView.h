@class UIButton, NSArray;
@protocol PUCropAspectViewControllerDelegate;

@interface PUCropAspectFlipperView : UIView {
    UIButton *_horizontalAspectButton;
    UIButton *_verticalAspectButton;
    NSArray *_layoutConstraints;
}

@property (weak, nonatomic) id<PUCropAspectViewControllerDelegate> delegate;
@property (nonatomic) long long aspectRatioOrientation;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (void)aspectRatioButtonPressed:(id)a0;
- (id)initWithLayoutOrientation:(long long)a0;

@end
