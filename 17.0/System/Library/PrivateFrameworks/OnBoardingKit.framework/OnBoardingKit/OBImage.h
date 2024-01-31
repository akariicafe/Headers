@class NSString, NSBundle, UIColor;

@interface OBImage : UIImage

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)imageNamed:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)_imageNameForUIInterfaceStyle:(long long)a0 originalName:(id)a1;
+ (id)_imageNamed:(id)a0 inBundle:(id)a1 convertToMatchInterfaceStyle:(BOOL)a2;
+ (long long)rootInterfaceStyle;

- (void).cxx_destruct;
- (id)_flatImageWithColor:(id)a0;
- (id)_obFlatImageWithColor:(id)a0;
- (id)imageForUserInterfaceStyle:(long long)a0;

@end
