@class UIImage;

@interface CPUITableCellAccessory : NSObject

@property (retain, nonatomic) UIImage *image;

+ (id)accessoryWithActivityIndicator;
+ (id)accessoryWithCloudIcon;
+ (id)accessoryWithDisclosureIndicator;
+ (id)accessoryWithImage:(id)a0;
+ (id)accessoryWithiCloudIcon;

- (void).cxx_destruct;

@end
