@class NSString, UIImage, UIApplicationExtensionActivity, NSExtension;

@interface PUEditPlugin : NSObject

@property (readonly, nonatomic) UIApplicationExtensionActivity *applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;

+ (BOOL)pu_isMarkupExtensionIdentifier:(id)a0;
+ (id)pu_defaultMarkupExtensionIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtension:(id)a0 pluginCategoryType:(unsigned long long)a1;
- (BOOL)pu_isMarkupExtension;

@end
