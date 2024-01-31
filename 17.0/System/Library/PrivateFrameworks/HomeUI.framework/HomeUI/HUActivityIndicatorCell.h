@class NSString, UIImageView, UIActivityIndicatorView, UIImage, HUTitleDescriptionContentView;
@protocol HFStringGenerator;

@interface HUActivityIndicatorCell : UITableViewCell <HUDisableableCellProtocol>

@property (readonly, nonatomic) HUTitleDescriptionContentView *titleDescriptionView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) id<HFStringGenerator> titleText;
@property (retain, nonatomic) id<HFStringGenerator> descriptionText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupConstraints;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
