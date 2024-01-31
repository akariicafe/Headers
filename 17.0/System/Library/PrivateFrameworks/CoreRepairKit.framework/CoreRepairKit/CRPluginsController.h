@interface CRPluginsController : NSObject

- (BOOL)isApplicationInstalledWithMaxRetries:(int)a0 bundleName:(id)a1;
- (BOOL)rebuildApplicationDataBase;

@end
