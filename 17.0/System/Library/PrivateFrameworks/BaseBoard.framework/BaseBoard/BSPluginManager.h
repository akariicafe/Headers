@class NSString, NSBundle, NSArray;

@interface BSPluginManager : NSObject

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSString *pluginDirectory;
@property (readonly, copy, nonatomic) NSArray *pluginBundles;

+ (id)mainManager;

- (id)pluginBundleForName:(id)a0 type:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)pluginBundleForIdentifier:(id)a0;
- (id)pluginBundlesForType:(id)a0;

@end
