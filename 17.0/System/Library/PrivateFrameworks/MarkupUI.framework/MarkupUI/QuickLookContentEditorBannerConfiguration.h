@class UIImage, NSString, UIAction;

@interface QuickLookContentEditorBannerConfiguration : NSObject

@property (retain, nonatomic) UIAction *primaryAction;
@property (retain, nonatomic) UIAction *dismissAction;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)configurationWithImage:(id)a0 title:(id)a1 subtitle:(id)a2 primaryAction:(id)a3 dismissAction:(id)a4;

- (void).cxx_destruct;

@end
