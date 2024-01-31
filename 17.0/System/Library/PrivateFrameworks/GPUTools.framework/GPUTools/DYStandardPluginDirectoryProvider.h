@class NSBundle;

@interface DYStandardPluginDirectoryProvider : DYPluginDirectoryProvider {
    NSBundle *_bundle;
    BOOL _includeDeveloperDirectory;
    BOOL _includeBundleDirectory;
}

+ (id)_developerDirectory;

- (id)init;
- (void)dealloc;
- (void)enumerateDirectories:(id /* block */)a0;
- (id)initWithBundle:(id)a0 includeDeveloperDirectory:(BOOL)a1 includeBundleDirectory:(BOOL)a2;

@end
