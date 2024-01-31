@interface LNExtensionHostConfigurator : NSObject

+ (id)extensionIdentityWithExtensionPointIdentifier:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
+ (id)extensionProcessWithBundleIdentifier:(id)a0 extensionType:(long long *)a1 error:(id *)a2;

@end
