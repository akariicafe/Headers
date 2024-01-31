@class NSURL;

@interface WKApplicationProxy : NSObject

@property (readonly, nonatomic) NSURL *bundleURL;

+ (id)gizmoAppBundleUrlWithPluginUrl:(id)a0;
+ (id)applicationsForContainerProxy:(id)a0;
+ (id)watchAppBundleUrlWithContainerUrl:(id)a0;

- (id)initWithBundleURL:(id)a0;
- (void).cxx_destruct;

@end
