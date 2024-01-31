@interface PRSWallpaperLocationStateObserver : NSObject

@property (nonatomic) unsigned long long locations;
@property (nonatomic) BOOL needsSandboxExtensions;
@property (copy, nonatomic) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;

@end
