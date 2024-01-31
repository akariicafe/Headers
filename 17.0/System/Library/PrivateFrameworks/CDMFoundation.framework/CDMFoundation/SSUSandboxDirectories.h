@class NSURL;

@interface SSUSandboxDirectories : NSObject

@property (retain, nonatomic) NSURL *installedAppsDirectoryURL;
@property (retain, nonatomic) NSURL *cacheDirectoryURL;

- (void).cxx_destruct;

@end
