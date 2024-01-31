@class UIStackView, NSString, UIImageView, UILabel;

@interface HUCameraErrorView : UIStackView <HUCameraErrorViewable>

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIStackView *labelStackView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;

- (id)init;
- (void).cxx_destruct;

@end
