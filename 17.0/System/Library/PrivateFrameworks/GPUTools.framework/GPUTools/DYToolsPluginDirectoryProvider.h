@class NSString;

@interface DYToolsPluginDirectoryProvider : DYPluginDirectoryProvider {
    BOOL _includePrivatePlugins;
    NSString *_toolsPluginBundle;
    NSString *_toolsPrivatePluginBundle;
}

- (id)init;
- (void)enumerateDirectories:(id /* block */)a0;
- (id)initWithDeveloperPath:(id)a0 includePrivatePlugins:(BOOL)a1;

@end
