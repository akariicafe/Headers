@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (id)_defaultPlugInPaths;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)a0;
+ (id)sharedDatabaseIfExists;

- (void)close;
- (id)init;
- (void)dealloc;
- (void)refresh;
- (id)plugins;
- (void)_addPlugin:(id)a0;
- (void)setPlugInPaths:(id)a0;
- (id)_plugInPaths;
- (void)_removePlugin:(id)a0;
- (id)_scanForNewPlugins;
- (void)addPluginInstanceView:(id)a0;
- (void)destroyAllPluginInstanceViews;
- (BOOL)isMIMETypeRegistered:(id)a0;
- (id)pluginForExtension:(id)a0;
- (id)pluginForMIMEType:(id)a0;
- (void)removePluginInstanceView:(id)a0;
- (void)removePluginInstanceViewsFor:(id)a0;

@end
