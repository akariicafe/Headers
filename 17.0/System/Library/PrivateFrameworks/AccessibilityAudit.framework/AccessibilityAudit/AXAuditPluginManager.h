@interface AXAuditPluginManager : NSObject

@property (nonatomic) BOOL _didLoadBundles;

+ (id)sharedManager;

- (void)_loadAuditBundle:(id)a0;
- (void)loadAuditBundles;
- (id)platformPlugin;
- (id)pluginForAuditCategory:(id)a0;

@end
