@class NSString, LSApplicationWorkspace, LSApplicationProxy, UIImage;

@interface CKAppInstallation : NSObject <NSCopying> {
    NSString *_bundleIdentifier;
    LSApplicationProxy *_proxy;
    UIImage *_icon;
}

@property (retain, nonatomic) LSApplicationProxy *proxy;
@property (nonatomic) double percentComplete;
@property (nonatomic) unsigned long long installState;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *pluginBundleIdentifier;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) BOOL installed;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleIdentifier:(id)a0 startTime:(double)a1;

@end
