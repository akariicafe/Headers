@class UIImageView, UILabel, UIStackView;

@interface RUICustomImageTableViewCell : RemoteUITableViewCell

@property (retain, nonatomic) UIImageView *customImageViewInternal;
@property (retain, nonatomic) UILabel *customTextLabelInternal;
@property (retain, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UIImageView *customImageView;
@property (readonly, nonatomic) UILabel *customTextLabel;

- (void).cxx_destruct;
- (id)_customImageViewInternal;
- (id)_customTextLabelInternal;
- (void)_initializeViews;

@end
