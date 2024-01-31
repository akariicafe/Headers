@class NSString, NSURL;

@interface SNLPSSUApplicationInfo : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *assetURL;
@property (readonly) NSString *locale;

+ (id)applicationInfoWithBundleIdentifier:(id)a0 assetURL:(id)a1 forLocale:(id)a2 error:(id *)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 assetURL:(id)a1 forLocale:(id)a2;

@end
