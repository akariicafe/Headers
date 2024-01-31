@class NSURL;

@interface DYPluginDirectoryProvider : NSObject {
    NSURL *_developerDirectory;
}

- (id)init;
- (void)enumerateDirectories:(id /* block */)a0;
- (id)getPlatformDirectoriesWithBundleName:(id)a0;

@end
